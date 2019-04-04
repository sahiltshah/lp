/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "project.y" /* yacc.c:339  */

	#include<stdio.h>
	int yylex(void);
	int yyerror(const char *s);
	int success = 1;

#line 73 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    int_const = 258,
    char_const = 259,
    float_const = 260,
    id = 261,
    string = 262,
    enumeration_const = 263,
    storage_const = 264,
    type_const = 265,
    qual_const = 266,
    struct_const = 267,
    enum_const = 268,
    DEFINE = 269,
    IF = 270,
    FOR = 271,
    DO = 272,
    WHILE = 273,
    BREAK = 274,
    SWITCH = 275,
    CONTINUE = 276,
    RETURN = 277,
    CASE = 278,
    DEFAULT = 279,
    GOTO = 280,
    SIZEOF = 281,
    PUNC = 282,
    or_const = 283,
    and_const = 284,
    eq_const = 285,
    shift_const = 286,
    rel_const = 287,
    inc_const = 288,
    point_const = 289,
    param_const = 290,
    ELSE = 291,
    HEADER = 292
  };
#endif
/* Tokens.  */
#define int_const 258
#define char_const 259
#define float_const 260
#define id 261
#define string 262
#define enumeration_const 263
#define storage_const 264
#define type_const 265
#define qual_const 266
#define struct_const 267
#define enum_const 268
#define DEFINE 269
#define IF 270
#define FOR 271
#define DO 272
#define WHILE 273
#define BREAK 274
#define SWITCH 275
#define CONTINUE 276
#define RETURN 277
#define CASE 278
#define DEFAULT 279
#define GOTO 280
#define SIZEOF 281
#define PUNC 282
#define or_const 283
#define and_const 284
#define eq_const 285
#define shift_const 286
#define rel_const 287
#define inc_const 288
#define point_const 289
#define param_const 290
#define ELSE 291
#define HEADER 292

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 195 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  44
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1216

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  198
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  351

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    62,     2,     2,     2,    60,    57,     2,
      49,    50,    40,    38,    46,    39,    63,    41,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    48,    43,
      58,    47,    59,    54,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    51,     2,    52,    56,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    53,     2,     2,     2,
       2,     2,     2,    44,    55,    45,    61,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    18,    18,    19,    20,    22,    23,    25,    26,    28,
      29,    30,    31,    33,    34,    36,    37,    39,    40,    41,
      42,    43,    44,    46,    48,    49,    50,    51,    53,    55,
      56,    57,    59,    61,    62,    64,    65,    67,    68,    70,
      72,    73,    74,    75,    77,    78,    80,    81,    82,    84,
      85,    86,    88,    89,    91,    92,    94,    95,    97,    98,
      99,   100,   101,   102,   103,   105,   106,   107,   108,   110,
     111,   113,   114,   116,   117,   119,   120,   121,   123,   124,
     126,   127,   128,   130,   131,   133,   134,   136,   137,   138,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   150,
     152,   153,   154,   155,   156,   157,   159,   160,   161,   163,
     164,   166,   167,   168,   169,   171,   172,   174,   175,   176,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     189,   190,   191,   192,   193,   195,   196,   198,   199,   201,
     202,   204,   205,   207,   209,   210,   212,   213,   215,   216,
     218,   219,   221,   222,   224,   225,   227,   228,   229,   230,
     232,   233,   235,   236,   237,   239,   240,   241,   242,   244,
     245,   247,   248,   249,   250,   251,   253,   253,   253,   253,
     253,   253,   255,   256,   257,   258,   259,   260,   261,   263,
     264,   265,   266,   268,   269,   271,   272,   273,   274
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "int_const", "char_const", "float_const",
  "id", "string", "enumeration_const", "storage_const", "type_const",
  "qual_const", "struct_const", "enum_const", "DEFINE", "IF", "FOR", "DO",
  "WHILE", "BREAK", "SWITCH", "CONTINUE", "RETURN", "CASE", "DEFAULT",
  "GOTO", "SIZEOF", "PUNC", "or_const", "and_const", "eq_const",
  "shift_const", "rel_const", "inc_const", "point_const", "param_const",
  "ELSE", "HEADER", "'+'", "'-'", "'*'", "'/'", "\"then\"", "';'", "'{'",
  "'}'", "','", "'='", "':'", "'('", "')'", "'['", "']'", "'t'", "'?'",
  "'|'", "'^'", "'&'", "'<'", "'>'", "'%'", "'~'", "'!'", "'.'", "$accept",
  "program_unit", "translation_unit", "external_decl",
  "function_definition", "decl", "decl_list", "decl_specs",
  "storage_class_spec", "type_spec", "type_qualifier",
  "struct_or_union_spec", "struct_or_union", "struct_decl_list",
  "init_declarator_list", "init_declarator", "struct_decl",
  "spec_qualifier_list", "struct_declarator_list", "struct_declarator",
  "enum_spec", "enumerator_list", "enumerator", "declarator",
  "direct_declarator", "pointer", "type_qualifier_list", "param_type_list",
  "param_list", "param_decl", "id_list", "initializer", "initializer_list",
  "type_name", "abstract_declarator", "direct_abstract_declarator",
  "typedef_name", "stat", "labeled_stat", "exp_stat", "compound_stat",
  "stat_list", "selection_stat", "iteration_stat", "jump_stat", "exp",
  "assignment_exp", "assignment_operator", "conditional_exp", "const_exp",
  "logical_or_exp", "logical_and_exp", "inclusive_or_exp",
  "exclusive_or_exp", "and_exp", "equality_exp", "relational_exp",
  "shift_expression", "additive_exp", "mult_exp", "cast_exp", "unary_exp",
  "unary_operator", "postfix_exp", "primary_exp", "argument_exp_list",
  "consts", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,    43,    45,
      42,    47,   293,    59,   123,   125,    44,    61,    58,    40,
      41,    91,    93,   116,    63,   124,    94,    38,    60,    62,
      37,   126,    33,    46
};
# endif

#define YYPACT_NINF -172

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-172)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     258,  -172,  -172,  -172,  -172,  -172,     9,    69,   258,    22,
      48,  -172,     6,   304,  -172,  -172,  -172,   115,   648,   648,
     648,  -172,    11,  -172,   159,   231,    20,  -172,    12,    60,
    -172,  -172,  -172,  -172,  -172,  -172,  1092,   258,  -172,  -172,
    -172,  -172,    22,    52,  -172,  -172,  -172,    21,  -172,   599,
    -172,  -172,  -172,    34,    31,   316,  -172,   159,   115,  -172,
     820,   677,   231,    60,    78,   -15,  -172,  1139,  1154,  -172,
    -172,  -172,   592,  -172,  -172,  -172,   176,  -172,  -172,    -8,
      81,    75,    83,    92,   148,    53,   154,   121,    97,  -172,
       1,  1092,    93,  -172,  -172,  -172,  -172,  -172,  -172,    48,
     692,   159,  -172,    31,    31,    31,   230,  -172,   134,   157,
     196,   232,   532,   239,   287,   309,   324,   739,  1092,   202,
     362,  -172,  -172,   376,  -172,  -172,  -172,  -172,   436,  -172,
    -172,  -172,   105,  -172,  -172,   323,  -172,  -172,   101,   321,
     326,  -172,   201,  -172,  -172,   322,  -172,   263,  1092,  -172,
      60,   592,  -172,  -172,   126,   325,  1092,  -172,  1092,  1092,
    1092,  1092,  1092,  1092,  1092,  1092,  1092,  1092,  1092,  1092,
    1092,  1092,  1092,  1092,  -172,  -172,  1092,  -172,  -172,   370,
     754,  1092,   384,  -172,   692,  -172,  -172,  -172,   695,  -172,
    -172,  -172,  -172,  1092,   168,  -172,   355,   532,  1092,   802,
     392,  1092,  -172,  1092,  -172,  -172,   170,   363,   532,   369,
    -172,   484,  -172,  -172,  -172,   573,   817,  -172,    19,  -172,
     296,  -172,   395,   407,  -172,  -172,  -172,  -172,  -172,   367,
    1157,   299,  -172,  1092,  -172,    81,   318,    75,    83,    92,
     148,    53,   154,   154,   154,   121,    97,    97,  -172,  -172,
    -172,  -172,  -172,  -172,  -172,   207,    76,  -172,  -172,   306,
    -172,  -172,  -172,   134,  1092,  -172,   210,   877,   192,   373,
     227,   228,  -172,   532,  -172,  -172,  -172,  -172,   368,   374,
    -172,   371,   296,   293,   892,  -172,  -172,  -172,  -172,  -172,
    1092,  1092,  -172,  -172,  -172,   630,  -172,  -172,   532,   952,
     216,   967,  1092,   532,   532,  -172,  -172,  -172,  -172,  -172,
     377,  -172,   379,  -172,  -172,  -172,  -172,   390,   532,   241,
    1014,  1029,   233,   243,  -172,  -172,  -172,  -172,   532,  -172,
     532,   532,   244,   532,   250,  1077,   385,  -172,  -172,  -172,
     532,  -172,   532,   532,   251,  -172,  -172,  -172,  -172,   532,
    -172
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    58,    23,    24,    28,    32,     0,     0,     0,    66,
       0,    99,     0,     4,     5,     7,     8,     0,    18,    20,
      22,    25,     0,    26,     0,    57,     0,    27,    51,     0,
     195,   196,   197,   189,   191,   198,     0,     0,   190,     2,
      69,    68,    65,     0,     1,     6,    14,     0,    35,    37,
      17,    19,    21,    31,     0,     0,    15,     0,     0,    12,
       0,     0,    56,     0,    54,     0,    52,     0,     0,   178,
     179,   177,     0,   176,   180,   181,     0,   135,   137,   141,
     144,   146,   148,   150,   152,   154,   156,   160,   162,   165,
     169,     0,   171,   182,     3,    70,    67,    59,    13,     0,
       0,     0,    11,     0,    41,    43,     0,    33,     0,   189,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   110,   114,     0,   115,   100,   101,   102,     0,   103,
     104,   105,     0,    16,    10,    37,    78,    64,    77,     0,
      71,    73,     0,    61,   143,     0,   169,     0,     0,    50,
       0,     0,   174,   172,    86,     0,     0,   192,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   139,   140,     0,   173,   188,     0,
       0,     0,     0,    36,     0,    38,    80,     9,     0,    40,
      42,    30,    34,     0,     0,    44,    46,     0,     0,     0,
       0,     0,   132,     0,   131,   134,     0,     0,     0,     0,
     113,     0,   112,   116,   109,     0,     0,    75,    87,    76,
      89,    62,     0,     0,    63,    60,    49,    55,    53,     0,
       0,    87,    85,     0,   136,   145,     0,   147,   149,   151,
     153,   155,   159,   157,   158,   161,   163,   164,   166,   167,
     168,   138,   187,   185,   193,     0,     0,   186,    83,     0,
      29,    48,    39,     0,     0,   106,     0,     0,     0,     0,
       0,     0,   133,     0,   108,   130,   111,    98,     0,     0,
      94,     0,    88,     0,     0,    72,    74,    79,   175,   170,
       0,     0,   184,   183,    81,     0,    45,    47,     0,     0,
       0,     0,     0,     0,     0,   107,    96,    90,    92,    97,
       0,    93,     0,   142,   194,    82,    84,   117,     0,     0,
       0,     0,     0,     0,   120,   119,    95,    91,     0,   129,
       0,     0,     0,     0,     0,     0,     0,   118,   128,   127,
       0,   125,     0,     0,     0,   121,   126,   124,   123,     0,
     122
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -172,    42,  -172,   419,  -172,   -10,   132,     3,  -172,   -45,
      29,  -172,  -172,   331,  -172,   336,  -101,   -53,  -172,   173,
    -172,   382,   297,    -9,   -16,    -7,  -172,   -56,  -172,   224,
    -172,  -171,  -172,   298,   -18,   -11,  -172,   -94,  -172,  -172,
       8,   327,  -172,  -172,  -172,   -36,   -76,  -172,   -32,  -111,
    -172,   305,   307,   303,   308,   302,   313,    63,   300,   193,
     -79,    28,  -172,  -172,   459,  -172,  -172
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    12,    13,    14,    15,    16,    57,    58,    18,    19,
      20,    21,    22,   106,    47,    48,   107,   108,   194,   195,
      23,    65,    66,    24,    25,    26,    42,   278,   140,   141,
     142,   185,   259,   155,   279,   220,    27,   124,   125,   126,
     127,   128,   129,   130,   131,   132,    77,   176,    78,   145,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,   255,    38
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      76,    43,    41,    17,   139,   192,    44,   207,    49,   104,
      62,    17,   177,   258,    56,    28,    17,    53,   200,   154,
     158,    50,    51,    52,   186,     1,     1,   104,   174,   144,
     149,   150,    59,     4,   213,    96,    76,   227,    40,    56,
      17,     3,     4,     5,     6,    56,   159,   133,   175,   135,
      39,   189,   190,    29,     1,    54,    63,   102,   104,   104,
     104,   104,     9,   138,    98,   134,    64,    99,   215,    10,
     216,    95,    30,    31,    32,    33,    34,    35,   103,    94,
     234,   206,   261,   105,    11,   165,   144,   192,     9,   146,
     135,   133,   248,   249,   250,   152,   153,    10,   154,   196,
     251,   105,    97,   265,   254,   281,   104,     1,   186,   187,
     160,   166,   167,   133,   274,    76,   144,   213,    36,   146,
     219,     1,   156,   236,   316,   148,   178,   179,   293,   217,
     161,   218,   105,   105,   105,   105,   232,   171,   172,   162,
       1,     9,   180,   104,   181,   256,   146,   231,   214,   163,
     215,   156,   216,   297,   289,     9,   182,   173,    46,   169,
     170,   144,   266,   268,    10,   270,     9,   271,     2,     3,
       4,     5,     6,   312,     9,   230,   146,   216,   164,   305,
     105,   101,   193,    10,   144,   168,   146,   123,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,    62,    55,   317,   197,    43,   282,   218,   324,
     325,   262,    11,   272,   263,   314,   156,   105,   138,   186,
     282,   146,   156,   231,   329,   138,   157,   310,   242,   243,
     244,   300,   144,   138,   337,   301,   338,   339,   156,   341,
       3,     4,     5,     6,   146,   198,   346,   223,   347,   348,
     208,   224,   144,   291,   196,   350,   156,   292,   313,   320,
     298,   146,   156,   319,     1,   322,   323,     2,     3,     4,
       5,     6,     7,   156,   156,   191,   335,   303,   304,   156,
      60,   199,    61,    11,   332,   334,   138,   156,   201,   156,
     156,   330,   146,   336,   340,     8,   156,   156,     9,   344,
     342,   349,     2,     3,     4,     5,     6,    10,   226,   150,
       1,    11,   146,     2,     3,     4,     5,     6,   146,    30,
      31,    32,   109,    34,    35,     2,     3,     4,     5,     6,
     202,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,    67,   309,     9,   283,    11,   284,   230,    68,
     216,   294,   295,    10,    69,    70,    71,    11,   203,   121,
      55,   122,   246,   247,   156,    72,   290,   204,   209,    11,
     100,   221,   222,    73,   225,   233,   252,    74,    75,    30,
      31,    32,   109,    34,    35,     2,     3,     4,     5,     6,
     257,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,    67,   264,     2,     3,     4,     5,     6,    68,
     269,   273,   275,   287,    69,    70,    71,   288,   306,   121,
      55,   210,   302,   308,   307,    72,   328,   326,   345,    11,
     285,   327,    45,    73,   188,   183,   296,    74,    75,    30,
      31,    32,   109,    34,    35,   147,   286,   228,    11,   229,
     211,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,    67,   235,   238,   240,    37,   237,   245,    68,
     239,     0,     0,     0,    69,    70,    71,   241,     0,   121,
      55,   212,     0,     0,     0,    72,     0,    30,    31,    32,
     109,    34,    35,    73,     0,     0,     0,    74,    75,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
      67,     0,     0,     0,     0,     0,     0,    68,     0,     0,
       0,     0,    69,    70,    71,     0,     0,   121,    55,   276,
       0,     0,     0,    72,     0,    30,    31,    32,   109,    34,
      35,    73,     0,     0,     0,    74,    75,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,    67,     0,
       0,     0,     0,     0,     0,    68,     0,     0,     0,     0,
      69,    70,    71,     0,     0,   121,    55,     0,     0,     1,
       0,    72,     2,     3,     4,     5,     6,     0,     0,    73,
       0,     0,     0,    74,    75,    30,    31,    32,    33,    34,
      35,     0,     3,     4,     5,     6,     0,     0,     2,     3,
       4,     5,     6,     9,     0,     0,     0,     0,    67,     0,
       0,     0,   215,   277,   216,    68,    11,     0,     0,     0,
      69,    70,    71,    30,    31,    32,    33,    34,    35,     0,
       0,    72,     0,    55,     0,    11,   100,     0,     0,    73,
       0,     0,    11,    74,    75,     0,    67,     2,     3,     4,
       5,     6,     0,    68,     0,     0,     0,     0,    69,    70,
      71,     0,     0,     0,   184,   315,     0,     0,     0,    72,
      30,    31,    32,    33,    34,    35,     0,    73,     0,     0,
       0,    74,    75,     0,     0,    30,    31,    32,    33,    34,
      35,    11,     0,    67,     0,     3,     4,     5,     6,     0,
      68,     0,     0,     0,     0,    69,    70,    71,    67,     0,
       0,     0,     0,     0,     0,    68,    72,     0,     0,   143,
      69,    70,    71,     0,    73,     0,   184,     0,    74,    75,
     260,    72,    30,    31,    32,    33,    34,    35,    11,    73,
       0,     0,     0,    74,    75,     0,     0,    30,    31,    32,
      33,    34,    35,     0,     0,    67,     0,     0,     0,     0,
       0,     0,    68,     0,     0,     0,     0,    69,    70,    71,
      67,     0,   205,     0,     0,     0,     0,    68,    72,     0,
       0,     0,    69,    70,    71,     0,    73,     0,     0,     0,
      74,    75,     0,    72,   253,    30,    31,    32,    33,    34,
      35,    73,     0,     0,     0,    74,    75,     0,     0,     0,
      30,    31,    32,    33,    34,    35,   136,     0,    67,     2,
       3,     4,     5,     6,     0,    68,     0,     0,     0,     0,
      69,    70,    71,    67,     0,   267,     0,     0,     0,     0,
      68,    72,     0,     0,     0,    69,    70,    71,     0,    73,
       0,     0,     0,    74,    75,     0,    72,     0,     0,   280,
     137,     0,     0,    11,    73,     0,     0,     0,    74,    75,
      30,    31,    32,    33,    34,    35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    30,    31,    32,    33,    34,
      35,     0,     0,    67,     0,     0,     0,     0,     0,     0,
      68,     0,     0,     0,     0,    69,    70,    71,    67,     0,
     299,     0,     0,     0,     0,    68,    72,     0,     0,     0,
      69,    70,    71,     0,    73,     0,     0,     0,    74,    75,
       0,    72,     0,     0,   311,     0,     0,     0,     0,    73,
       0,     0,     0,    74,    75,    30,    31,    32,    33,    34,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      30,    31,    32,    33,    34,    35,     0,     0,    67,     0,
       0,     0,     0,     0,     0,    68,     0,     0,     0,     0,
      69,    70,    71,    67,     0,     0,     0,     0,     0,     0,
      68,    72,   318,     0,     0,    69,    70,    71,     0,    73,
     321,     0,     0,    74,    75,     0,    72,    30,    31,    32,
      33,    34,    35,     0,    73,     0,     0,     0,    74,    75,
       0,     0,    30,    31,    32,    33,    34,    35,     0,     0,
      67,     0,     0,     0,     0,     0,     0,    68,     0,     0,
       0,     0,    69,    70,    71,    67,     0,     0,     0,     0,
       0,     0,    68,    72,   331,     0,     0,    69,    70,    71,
       0,    73,     0,     0,     0,    74,    75,     0,    72,   333,
      30,    31,    32,    33,    34,    35,    73,     0,     0,     0,
      74,    75,     0,     0,     0,    30,    31,    32,    33,    34,
      35,     0,     0,    67,     0,     0,     0,     0,     0,     0,
      68,     0,     0,     0,     0,    69,    70,    71,    67,     0,
       0,     0,     0,     0,     0,    68,    72,   343,     0,     0,
      69,    70,    71,     0,    73,     0,     0,     0,    74,    75,
       0,    72,    30,    31,    32,    33,    34,    35,     0,    73,
       0,     0,     0,    74,    75,     0,     0,    30,    31,    32,
      33,    34,    35,     0,     0,    67,     2,     3,     4,     5,
       6,     0,    68,     0,     0,     0,     0,    69,    70,    71,
      67,     0,     0,     0,     0,     0,     0,    68,   151,     0,
       0,     0,    69,    70,    71,     0,    73,     9,     0,     0,
      74,    75,     0,    36,     0,     0,   230,   277,   216,     0,
      11,    73,     0,     0,     0,    74,    75
};

static const yytype_int16 yycheck[] =
{
      36,    10,     9,     0,    60,   106,     0,   118,    17,    54,
      26,     8,    91,   184,    24,     6,    13,     6,   112,    72,
      28,    18,    19,    20,   100,     6,     6,    72,    27,    61,
      45,    46,    24,    11,   128,    42,    72,   148,     9,    49,
      37,    10,    11,    12,    13,    55,    54,    57,    47,    58,
       8,   104,   105,    44,     6,    44,    44,    49,   103,   104,
     105,   106,    40,    60,    43,    57,     6,    46,    49,    49,
      51,    42,     3,     4,     5,     6,     7,     8,    44,    37,
     156,   117,   193,    54,    53,    32,   118,   188,    40,    61,
      99,   101,   171,   172,   173,    67,    68,    49,   151,   108,
     176,    72,    50,   197,   180,   216,   151,     6,   184,   101,
      29,    58,    59,   123,   208,   151,   148,   211,    49,    91,
     138,     6,    46,   159,   295,    47,    33,    34,    52,   138,
      55,   138,   103,   104,   105,   106,   154,    40,    41,    56,
       6,    40,    49,   188,    51,   181,   118,   154,    43,    57,
      49,    46,    51,   264,   233,    40,    63,    60,    43,    38,
      39,   193,   198,   199,    49,   201,    40,   203,     9,    10,
      11,    12,    13,   284,    40,    49,   148,    51,    30,   273,
     151,    49,    48,    49,   216,    31,   158,    55,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   218,    44,   298,    48,   215,   218,   215,   303,
     304,    43,    53,    43,    46,   291,    46,   188,   215,   295,
     231,   193,    46,   230,   318,   222,    50,   283,   165,   166,
     167,   267,   264,   230,   328,    43,   330,   331,    46,   333,
      10,    11,    12,    13,   216,    49,   340,    46,   342,   343,
      48,    50,   284,    46,   263,   349,    46,    50,   290,    43,
      50,   233,    46,   299,     6,   301,   302,     9,    10,    11,
      12,    13,    14,    46,    46,    45,    43,    50,    50,    46,
      49,    49,    51,    53,   320,   321,   283,    46,    49,    46,
      46,    50,   264,    50,    50,    37,    46,    46,    40,   335,
      50,    50,     9,    10,    11,    12,    13,    49,    45,    46,
       6,    53,   284,     9,    10,    11,    12,    13,   290,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      43,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    50,    40,    49,    53,    51,    49,    33,
      51,    45,    46,    49,    38,    39,    40,    53,    49,    43,
      44,    45,   169,   170,    46,    49,    48,    43,     6,    53,
      47,    50,    46,    57,    52,    50,     6,    61,    62,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
       6,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    48,     9,    10,    11,    12,    13,    33,
      18,    48,    43,     6,    38,    39,    40,    50,    50,    43,
      44,    45,    49,    52,    50,    49,    36,    50,    43,    53,
      35,    52,    13,    57,   103,    99,   263,    61,    62,     3,
       4,     5,     6,     7,     8,    63,   222,   150,    53,   151,
     123,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   158,   161,   163,     7,   160,   168,    33,
     162,    -1,    -1,    -1,    38,    39,    40,   164,    -1,    43,
      44,    45,    -1,    -1,    -1,    49,    -1,     3,     4,     5,
       6,     7,     8,    57,    -1,    -1,    -1,    61,    62,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    40,    -1,    -1,    43,    44,    45,
      -1,    -1,    -1,    49,    -1,     3,     4,     5,     6,     7,
       8,    57,    -1,    -1,    -1,    61,    62,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    40,    -1,    -1,    43,    44,    -1,    -1,     6,
      -1,    49,     9,    10,    11,    12,    13,    -1,    -1,    57,
      -1,    -1,    -1,    61,    62,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    12,    13,    -1,    -1,     9,    10,
      11,    12,    13,    40,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    49,    50,    51,    33,    53,    -1,    -1,    -1,
      38,    39,    40,     3,     4,     5,     6,     7,     8,    -1,
      -1,    49,    -1,    44,    -1,    53,    47,    -1,    -1,    57,
      -1,    -1,    53,    61,    62,    -1,    26,     9,    10,    11,
      12,    13,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      40,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
       3,     4,     5,     6,     7,     8,    -1,    57,    -1,    -1,
      -1,    61,    62,    -1,    -1,     3,     4,     5,     6,     7,
       8,    53,    -1,    26,    -1,    10,    11,    12,    13,    -1,
      33,    -1,    -1,    -1,    -1,    38,    39,    40,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    49,    -1,    -1,    52,
      38,    39,    40,    -1,    57,    -1,    44,    -1,    61,    62,
      45,    49,     3,     4,     5,     6,     7,     8,    53,    57,
      -1,    -1,    -1,    61,    62,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    40,
      26,    -1,    43,    -1,    -1,    -1,    -1,    33,    49,    -1,
      -1,    -1,    38,    39,    40,    -1,    57,    -1,    -1,    -1,
      61,    62,    -1,    49,    50,     3,     4,     5,     6,     7,
       8,    57,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     6,    -1,    26,     9,
      10,    11,    12,    13,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    40,    26,    -1,    43,    -1,    -1,    -1,    -1,
      33,    49,    -1,    -1,    -1,    38,    39,    40,    -1,    57,
      -1,    -1,    -1,    61,    62,    -1,    49,    -1,    -1,    52,
      50,    -1,    -1,    53,    57,    -1,    -1,    -1,    61,    62,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    38,    39,    40,    26,    -1,
      43,    -1,    -1,    -1,    -1,    33,    49,    -1,    -1,    -1,
      38,    39,    40,    -1,    57,    -1,    -1,    -1,    61,    62,
      -1,    49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    -1,    61,    62,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    39,    40,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    49,    50,    -1,    -1,    38,    39,    40,    -1,    57,
      43,    -1,    -1,    61,    62,    -1,    49,     3,     4,     5,
       6,     7,     8,    -1,    57,    -1,    -1,    -1,    61,    62,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    39,    40,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    49,    50,    -1,    -1,    38,    39,    40,
      -1,    57,    -1,    -1,    -1,    61,    62,    -1,    49,    50,
       3,     4,     5,     6,     7,     8,    57,    -1,    -1,    -1,
      61,    62,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    -1,    -1,    -1,    38,    39,    40,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    49,    50,    -1,    -1,
      38,    39,    40,    -1,    57,    -1,    -1,    -1,    61,    62,
      -1,    49,     3,     4,     5,     6,     7,     8,    -1,    57,
      -1,    -1,    -1,    61,    62,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    -1,    26,     9,    10,    11,    12,
      13,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,    40,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    33,    49,    -1,
      -1,    -1,    38,    39,    40,    -1,    57,    40,    -1,    -1,
      61,    62,    -1,    49,    -1,    -1,    49,    50,    51,    -1,
      53,    57,    -1,    -1,    -1,    61,    62
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     9,    10,    11,    12,    13,    14,    37,    40,
      49,    53,    65,    66,    67,    68,    69,    71,    72,    73,
      74,    75,    76,    84,    87,    88,    89,   100,     6,    44,
       3,     4,     5,     6,     7,     8,    49,   128,   130,    65,
      74,    89,    90,    87,     0,    67,    43,    78,    79,    87,
      71,    71,    71,     6,    44,    44,    69,    70,    71,   104,
      49,    51,    88,    44,     6,    85,    86,    26,    33,    38,
      39,    40,    49,    57,    61,    62,   109,   110,   112,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    65,    74,    89,    50,    43,    46,
      47,    70,   104,    44,    73,    74,    77,    80,    81,     6,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    43,    45,    70,   101,   102,   103,   104,   105,   106,
     107,   108,   109,    69,   104,    87,     6,    50,    71,    91,
      92,    93,    94,    52,   112,   113,   125,    85,    47,    45,
      46,    49,   125,   125,    81,    97,    46,    50,    28,    54,
      29,    55,    56,    57,    30,    32,    58,    59,    31,    38,
      39,    40,    41,    60,    27,    47,   111,   124,    33,    34,
      49,    51,    63,    79,    44,    95,   110,   104,    77,    81,
      81,    45,    80,    48,    82,    83,    87,    48,    49,    49,
     101,    49,    43,    49,    43,    43,   109,   113,    48,     6,
      45,   105,    45,   101,    43,    49,    51,    87,    89,    98,
      99,    50,    46,    46,    50,    52,    45,   113,    86,    97,
      49,    89,    98,    50,   110,   115,   109,   116,   117,   118,
     119,   120,   121,   121,   121,   122,   123,   123,   124,   124,
     124,   110,     6,    50,   110,   129,   109,     6,    95,    96,
      45,   113,    43,    46,    48,   101,   109,    43,   109,    18,
     109,   109,    43,    48,   101,    43,    45,    50,    91,    98,
      52,   113,    99,    49,    51,    35,    93,     6,    50,   124,
      48,    46,    50,    52,    45,    46,    83,   113,    50,    43,
     109,    43,    49,    50,    50,   101,    50,    50,    52,    50,
      91,    52,   113,   112,   110,    45,    95,   101,    50,   109,
      43,    43,   109,   109,   101,   101,    50,    52,    36,   101,
      50,    50,   109,    50,   109,    43,    50,   101,   101,   101,
      50,   101,    50,    50,   109,    43,   101,   101,   101,    50,
     101
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    65,    65,    66,    66,    67,    67,    68,
      68,    68,    68,    69,    69,    70,    70,    71,    71,    71,
      71,    71,    71,    72,    73,    73,    73,    73,    74,    75,
      75,    75,    76,    77,    77,    78,    78,    79,    79,    80,
      81,    81,    81,    81,    82,    82,    83,    83,    83,    84,
      84,    84,    85,    85,    86,    86,    87,    87,    88,    88,
      88,    88,    88,    88,    88,    89,    89,    89,    89,    90,
      90,    91,    91,    92,    92,    93,    93,    93,    94,    94,
      95,    95,    95,    96,    96,    97,    97,    98,    98,    98,
      99,    99,    99,    99,    99,    99,    99,    99,    99,   100,
     101,   101,   101,   101,   101,   101,   102,   102,   102,   103,
     103,   104,   104,   104,   104,   105,   105,   106,   106,   106,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     108,   108,   108,   108,   108,   109,   109,   110,   110,   111,
     111,   112,   112,   113,   114,   114,   115,   115,   116,   116,
     117,   117,   118,   118,   119,   119,   120,   120,   120,   120,
     121,   121,   122,   122,   122,   123,   123,   123,   123,   124,
     124,   125,   125,   125,   125,   125,   126,   126,   126,   126,
     126,   126,   127,   127,   127,   127,   127,   127,   127,   128,
     128,   128,   128,   129,   129,   130,   130,   130,   130
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     1,     2,     1,     1,     4,
       3,     3,     2,     3,     2,     1,     2,     2,     1,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     5,
       4,     2,     1,     1,     2,     1,     3,     1,     3,     3,
       2,     1,     2,     1,     1,     3,     1,     3,     2,     5,
       4,     2,     1,     3,     1,     3,     2,     1,     1,     3,
       4,     3,     4,     4,     3,     2,     1,     3,     2,     1,
       2,     1,     3,     1,     3,     2,     2,     1,     1,     3,
       1,     3,     4,     1,     3,     2,     1,     1,     2,     1,
       3,     4,     3,     3,     2,     4,     3,     3,     2,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     2,
       1,     4,     3,     3,     2,     1,     2,     5,     7,     5,
       5,     7,     9,     8,     8,     7,     8,     7,     7,     6,
       3,     2,     2,     3,     2,     1,     3,     1,     3,     1,
       1,     1,     5,     1,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     3,     3,
       1,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       4,     1,     2,     2,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     3,     3,     3,     2,     1,
       1,     1,     3,     1,     3,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      
#line 1709 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 276 "project.y" /* yacc.c:1906  */


int main()
{
    yyparse();
    if(success)
    	printf("Parsing Successful\n");
    return 0;
}

int yyerror(const char *msg)
{
	extern int yylineno;
	printf("Parsing Failed\nLine Number: %d %s\n",yylineno,msg);
	success = 0;
	return 0;
}

