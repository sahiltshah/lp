#include <bits/stdc++.h>
using namespace std;

vector<pair<char, string> > grammar;

void get_productions()
{
	cout<<"Enter number of productions:"; int n; cin>>n;

	cout<<"Enter productions:\n";

	for(int i=1; i<=n; i++)
	{
		cout << "Production:" << i << endl;

		char lhs; string rhs;

		cout << "Enter left side:"; cin>>lhs;
		cout << "Enter right side:"; cin>>rhs;

		grammar.push_back(make_pair(lhs, rhs));
	}
}

void remove_null_productions()
{
	vector<char> nullvars;

	int i=0;
	int prev;
	while(i<grammar.size())
	{
		if(grammar[i].second[0]=='0')
		{
			nullvars.push_back(grammar[i].first);
			grammar.erase(grammar.begin() + i);
		}
		else
		{
			i++;
		}
	}

	i=0;

	//cout<<"Here1"<<endl;

	while(1)
	{
		prev=nullvars.size();

		while(i<grammar.size())
		{
			int flag=0;
			for(int j=0; j<grammar[i].second.size(); j++)
			{
				if(find(nullvars.begin(), nullvars.end(), grammar[i].second[j])==nullvars.end())
				{
					flag=1; break;
				}
			}

			if(flag==0)
			{
				if(find(nullvars.begin(), nullvars.end(), grammar[i].first)==nullvars.end())
				{
					nullvars.push_back(grammar[i].first);
				}
			}

			i++;
		}

		if(prev==nullvars.size())break;
	}

	//cout<<"Here2"<<endl;

	i=0;
	int k=0;

	while(i<grammar.size())
	{
		string s = grammar[i].second;

		for(int j=0; j<s.size(); j++)
		{
			if(find(nullvars.begin(), nullvars.end(), s[j]) != nullvars.end())
			{
				string tmp;

				for(int k=0; k<s.size(); k++)
				{
					if(k!=j)
					{
						string lol(1, s[k]);
						tmp += lol;
					}
				}

				pair<char, string> p = make_pair(grammar[i].first, tmp);

				grammar.insert(grammar.begin()+i+1, p);
			}
		}

		i++;
	}

	//cout<<"Here3"<<endl;

	i=0;
	while(i<grammar.size())
	{
		if(grammar[i].second.size()==0)
		{
			grammar.erase(grammar.begin() + i);
		}
		else
		{
			i++;
		}
	}

	i=0;

	
	while(i<grammar.size())
	{
		int flag=0;

		for(int kk=i+1; kk<grammar.size(); kk++)
		{
			if(grammar[i]==grammar[kk])
			{
				flag=1; break;
			}
		}

		if(flag==1)
		{
			grammar.erase(grammar.begin()+i);
		}
		else i++;
	}
	

	//cout<<"Here4"<<endl;

	for(i=0; i<grammar.size(); i++)
	{
		cout<<grammar[i].first<<"->"<<grammar[i].second<<endl;
	}
}

void remove_useless(pair<char, string> p, vector<char> &useful)
{
	//cout<<"Here";
	for(int i=0; i<p.second.size(); i++)
	{
		for(int j=0; j<grammar.size(); j++)
		{
			if(grammar[j].first==p.second[i])
			{
				if(find(useful.begin(), useful.end(), p.second[i])==useful.end())
				{
					useful.push_back(p.second[i]);
					//cout<<p.second[i]<<endl;
					remove_useless(grammar[j], useful);
				}
			}
		}
	}
}

void gone_case(vector<char> useful)
{
	int i=0;

	while(i<grammar.size())
	{
		if(find(useful.begin(), useful.end(), grammar[i].first) == useful.end())
		{
			grammar.erase(grammar.begin() + i);
		}
		else
		{
			i++;
		}
	}

	for(i=0; i<grammar.size(); i++)
	{
		cout<<grammar[i].first<<"->"<<grammar[i].second<<endl;
	}
}

void remove_unit_productions(pair<char, string> p, int in)
{
	if(p.second.size()==1 && isupper(p.second[0]))
	{
		for(int i=0; i<grammar.size(); i++)
		{
			if(grammar[i].first==p.second[0])
			{
				if(grammar[i].second.size()>1 || !isupper(grammar[i].second[0]))
				{
					grammar[in].second = grammar[i].second;
				}
				else
				{
					remove_unit_productions(grammar[i], i);
					grammar[in].second = grammar[i].second;
				}
			}
		}
	}
}

void remove_immediate_left_recursion()
{
	for(int i=0; i<grammar.size(); i++)
	{
		if(grammar[i].first == grammar[i].second[0])
		{
			string subs;

			for(int j=1; j<grammar[i].second.size(); j++)
			{
				subs += grammar[i].second[j];
			}

			string x = grammar[i+1].second;

			string nont(1, grammar[i].first);
			x += nont;
			x += "^";
			grammar[i].second = x;

			grammar[i+1].first = nont[0];

			subs += nont;
			subs += "^";
			subs += "|0";
			grammar[i+1].second = subs;
		}
	}

	for(int i=0; i<grammar.size(); i++)
	{
		if(grammar[i].second[grammar[i].second.size()-2]=='|')
			cout<<grammar[i].first<<"^->"<<grammar[i].second<<endl;
		else
			cout<<grammar[i].first<<"->"<<grammar[i].second<<endl;
	}
}

int main()
{
	get_productions();

	cout<<"Removing useless symbols\n";
	vector<char> useful;
	useful.push_back(grammar[0].first);
	remove_useless(grammar[0], useful); gone_case(useful);

	cout<<"Removing null productions\n";
	remove_null_productions();


	cout<<"Removing unit productions\n";
	for(int i=0; i<grammar.size(); i++)remove_unit_productions(grammar[i], i);
	useful.clear();
	useful.push_back(grammar[0].first);
	remove_useless(grammar[0], useful); gone_case(useful);

	cout<<"Remove immediate left recursion\n";
	remove_immediate_left_recursion();

	return 0;
}