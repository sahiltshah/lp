#include <bits/stdc++.h>
using namespace std;

map<char, vector<string> > productions;
vector<vector<vector<pair<char, string> > > > cyk;

void get_productions()
{
	cout<<"Enter number of productions:"; int n; cin>>n;

	for(int i=0; i<n; i++)
	{
		cout<<(i+1)<<endl;
		cout<<"Enter left side:"; char ch; cin>>ch;
		cout<<"Enter right side:"; string s; cin>>s; productions[ch].push_back(s);
	}
}

vector<string> get_combinations(vector<pair<char, string> > a, vector<pair<char, string> > b)
{
	vector<string> ret;

	for(int i=0; i<a.size(); i++)
	{
		for(int j=0; j<b.size(); j++)
		{
			string x(1, a[i].first), y(1, b[j].first);
			if(x=="0" && y=="0")continue;
			else if(x=="0")ret.push_back( y );
			else if(y=="0")ret.push_back( x );
			else ret.push_back( x + y );
		}
	}

	return ret;
}

void create_table(string s)
{
	vector<vector<pair<char, string> > > first;

	for(int i=0; i<s.size(); i++)
	{
		string x(1, s[i]);
		map<char, vector<string> >::iterator it;
		vector<pair<char, string > > p;
		for(it=productions.begin(); it!=productions.end(); it++)
		{
			char lhs = it->first;
			vector<string> rhs = it->second;
			for(int j=0; j<rhs.size(); j++)
			{
				if(rhs[j]==x)
				{
					p.push_back(make_pair(lhs, rhs[j]));
				}
			}
		}
		first.push_back(p);
	}

	cyk.push_back(first);

	cout<<"First Row:\n";
	for(int i=0; i<first.size(); i++)
	{
		for(int j=0; j<first[i].size(); j++)
		{
			cout<<"("<<first[i][j].first<<","<<first[i][j].second<<")";
		}
		cout<<endl;
	}

	for(int i=1; i<=s.size()-1; i++)
	{
		cout<<"Row:"<<i<<endl;

		vector<vector<pair<char, string> > > row;

		for(int j=0; j<cyk[i-1].size()-1; j++)
		{
			vector<pair<char, string> > element;

			int x1=0, y1=j, x2=i-1, y2=j+1;
			
			for(; x2>=0; x1++, x2--, y2++)
			{
				vector<string> combos = get_combinations(cyk[x1][y1], cyk[x2][y2]);

				map<char, vector<string> >::iterator it; 

				for(int k=0; k<combos.size(); k++)
				{
					//vector<pair<char, string > > p;
					for(it=productions.begin(); it!=productions.end(); it++)
					{
						char lhs = it->first;
						vector<string> rhs = it->second;
						for(int lol=0; lol<rhs.size(); lol++)
						{
							if(rhs[lol]==combos[k])
							{
								element.push_back(make_pair(lhs, rhs[lol]));
								cout<<"("<<lhs<<","<<rhs[lol]<<")";
							}
						}
					}
				}

				if(element.size()==0)
				{
					string tmp(1, '0'); 
					element.push_back(make_pair(tmp[0], tmp));
					cout<<"(0,0)";
				}
				cout<<endl;
			}

			row.push_back(element);
			cout<<endl;
		}

		cyk.push_back(row);
	}

	cout<<"Root: ("<<cyk[s.size()-1][0][0].first<<","<<cyk[s.size()-1][0][0].second<<")"<<endl;

	if(cyk[s.size()-1][0][0].first=='S')cout<<"Accepted!!"<<endl;
	else cout<<"Not in grammar!!"<<endl;
}

void its_rewind_time(char s, int i, int j)
{
	vector<pair<char, string> > curr_element = cyk[i][j];

	char left, right;

	for(int k=0; k<curr_element.size(); k++)
	{
		if(curr_element[k].first==s)
		{
			
			left=curr_element[k].second[0];
			if(curr_element[k].second.size()>1)right=curr_element[k].second[1];

			cout<< s << "->" << curr_element[k].second << endl;
			break;
		}
	}
	
	int x1=0, y1=j, x2=i-1, y2=j+1;

	for(; x2>=0; x1++, x2--, y2++)
	{
		vector<pair<char, string> > element1 = cyk[x1][y1];
		vector<pair<char, string> > element2 = cyk[x2][y2];

		for(int k=0; k<element1.size(); k++)
		{
			for(int l=0; l<element2.size(); l++)
			{
				if(element1[k].first==left && element2[l].first==right)
				{
					its_rewind_time(left, x1, y1);
					its_rewind_time(right, x2, y2);
				}
			}
		}
	}
}

int main()
{
	get_productions();
	string s; 
	cout<<"Enter string:"; cin>>s;
	create_table(s);
	its_rewind_time(cyk[s.size()-1][0][0].first, s.size()-1, 0);
	return 0;
}