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
#line 1 "/home/red-sea/COSSIM/hla/certi/libCERTI/syntax.yy" /* yacc.c:339  */

// ----------------------------------------------------------------------------
// CERTI - HLA RunTime Infrastructure
// Copyright (C) 2003  ONERA
//
// This file is part of CERTI-libCERTI
//
// CERTI-libCERTI is free software ; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation ; either version 2 of
// the License, or (at your option) any later version.
//
// CERTI-libCERTI is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY ; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this program ; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
// USA
//
// $Id: syntax.yy,v 3.10 2011/12/29 17:59:28 erk Exp $
// ----------------------------------------------------------------------------

#include "fed.hh"
#include <iostream>

using std::cout ;
using std::cerr ;
using std::endl ;

namespace certi {
namespace fedparser {

extern std::string arg ;
extern const char *fed_filename ;
extern int line_number ;
extern std::string federationname_arg;
extern std::string federatename_arg;
extern std::string timestamp_arg;
extern std::string spacename_arg ;
extern std::string dimensionname_arg;
extern std::string objectclassname_arg;
extern std::string attributename_arg;
extern std::string interactionclassname_arg;
extern std::string parametername_arg;

}}

int yylex();
int yyerror(const char *);


#line 121 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    IDENT = 258,
    STRING = 259,
    L_PAR = 260,
    R_PAR = 261,
    ATTRIBUTE = 262,
    CLASS = 263,
    DIMENSION = 264,
    FED = 265,
    FED_VERSION = 266,
    FEDERATION = 267,
    FEDERATE = 268,
    INTERACTIONS = 269,
    OBJECTS = 270,
    ORDER = 271,
    PARAMETER = 272,
    SEC_LEVEL = 273,
    SPACE = 274,
    SPACES = 275,
    TRANSPORT = 276,
    TIMESTAMP_TOKEN = 277
  };
#endif
/* Tokens.  */
#define IDENT 258
#define STRING 259
#define L_PAR 260
#define R_PAR 261
#define ATTRIBUTE 262
#define CLASS 263
#define DIMENSION 264
#define FED 265
#define FED_VERSION 266
#define FEDERATION 267
#define FEDERATE 268
#define INTERACTIONS 269
#define OBJECTS 270
#define ORDER 271
#define PARAMETER 272
#define SEC_LEVEL 273
#define SPACE 274
#define SPACES 275
#define TRANSPORT 276
#define TIMESTAMP_TOKEN 277

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 216 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   97

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  23
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  149

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   277

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    83,    83,    89,    83,    93,    93,    98,    98,   102,
     103,   106,   107,   110,   112,   110,   116,   117,   116,   121,
     122,   125,   126,   129,   131,   129,   135,   137,   140,   141,
     144,   145,   148,   148,   153,   154,   153,   158,   159,   162,
     163,   166,   168,   166,   172,   173,   174,   175,   176,   177,
     178,   181,   182,   185,   186,   187,   191,   193,   190,   198,
     197,   203,   202,   208,   207,   213,   215,   212,   219,   220,
     223,   224,   227,   228,   232,   231,   237,   239,   236,   244,
     246,   243,   250,   251,   252,   253,   254,   255,   256,   259,
     260,   264,   263,   270,   269,   275,   275,   279,   279
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENT", "STRING", "L_PAR", "R_PAR",
  "ATTRIBUTE", "CLASS", "DIMENSION", "FED", "FED_VERSION", "FEDERATION",
  "FEDERATE", "INTERACTIONS", "OBJECTS", "ORDER", "PARAMETER", "SEC_LEVEL",
  "SPACE", "SPACES", "TRANSPORT", "TIMESTAMP_TOKEN", "$accept", "fed",
  "$@1", "$@2", "federation", "$@3", "fed_version", "$@4", "federates",
  "federate_list", "federate", "$@5", "$@6", "spaces", "$@7", "$@8",
  "opt_space_list", "space_list", "space", "$@9", "$@10", "opt_space_name",
  "opt_dimension_list", "dimension_list", "dimension", "$@11", "objects",
  "$@12", "$@13", "opt_object_class_list", "object_class_list",
  "object_class", "$@14", "$@15", "object_class_items", "attribute_list",
  "attribute", "attribute_named_ts", "$@16", "$@17", "attribute_prefix",
  "$@18", "attribute_ts", "$@19", "attribute_ro", "$@20", "interactions",
  "$@21", "$@22", "opt_interaction_class_list", "interaction_class_list",
  "interaction_class", "interaction_class_prefix", "$@23",
  "interaction_class_ts", "$@24", "$@25", "interaction_class_ro", "$@26",
  "$@27", "interaction_class_items", "parameter_list", "parameter", "$@28",
  "$@29", "interaction_security_level", "$@30", "object_security_level",
  "$@31", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277
};
# endif

#define YYPACT_NINF -111

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-111)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      17,  -111,    29,    21,  -111,    30,    25,  -111,    33,    26,
      32,  -111,    36,    22,    26,  -111,  -111,    35,  -111,  -111,
      31,  -111,  -111,    40,    28,  -111,    34,  -111,    41,  -111,
      28,  -111,    42,  -111,  -111,    43,  -111,    45,  -111,    48,
    -111,    42,  -111,    46,    49,  -111,    47,  -111,  -111,    51,
    -111,    54,  -111,    46,  -111,    -6,  -111,    56,  -111,    47,
    -111,     5,  -111,  -111,    55,  -111,    58,    58,  -111,  -111,
    -111,    59,  -111,     3,    60,    42,  -111,     7,  -111,  -111,
      -5,     7,    53,  -111,  -111,  -111,  -111,    61,  -111,  -111,
    -111,  -111,    62,    42,  -111,    58,    58,  -111,  -111,    42,
       7,  -111,     1,     1,  -111,    63,    64,    66,  -111,  -111,
    -111,    42,     4,    65,    46,  -111,    13,  -111,    13,  -111,
    -111,    50,  -111,    70,    71,  -111,  -111,  -111,    73,    46,
    -111,    46,    13,    75,    58,  -111,  -111,    76,    77,    80,
    -111,    46,  -111,  -111,  -111,  -111,  -111,    81,  -111
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     0,     0,     1,     0,     0,     5,     0,    10,
       0,     7,     0,     0,     9,    11,     6,     0,    13,    16,
       0,    12,     8,     0,    20,    34,     0,    14,     0,    17,
      19,    21,    38,    65,     3,     0,    23,     0,    22,     0,
      35,    37,    39,    69,     0,    15,    29,    18,    41,     0,
      40,     0,    66,    68,    70,     0,     4,     0,    24,    28,
      30,    50,    36,    74,     0,    71,    27,    27,    72,    73,
      32,     0,    31,     0,     0,    46,    42,    44,    51,    53,
       0,     0,     0,    67,    26,    79,    76,     0,    25,    59,
      56,    97,     0,    48,    52,    27,    27,    55,    54,    47,
      45,    75,    88,    88,    33,     0,     0,     0,    43,    63,
      61,    49,     0,     0,    84,    80,    82,    89,     0,    77,
      60,     0,    98,     0,     0,    93,    91,    95,     0,    86,
      90,    85,    83,     0,    27,    64,    62,     0,     0,     0,
      81,    87,    78,    57,    94,    92,    96,     0,    58
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
      74,  -111,  -111,  -111,  -111,  -111,  -111,  -111,    67,  -111,
    -111,   -64,  -111,  -111,    37,  -111,  -111,  -111,  -111,  -111,
     -57,   -40,  -111,  -111,  -111,    10,   -72,  -111,  -111,  -111,
    -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
     -43,   -51,  -111,  -111,  -111,  -111,  -111,  -111,  -111,  -111,
     -11,   -25,  -110,  -111,  -111,  -111,  -111,  -111,  -111
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    44,     6,    10,     9,    17,    13,    14,
      15,    23,    35,    20,    24,    37,    29,    30,    31,    46,
      71,    85,    58,    59,    60,    87,    26,    32,    49,    40,
      41,    42,    61,    92,    76,    77,    78,    79,   106,   147,
      80,   105,    97,   124,    98,   123,    34,    43,    64,    52,
     114,    54,    55,    82,    68,   103,   133,    69,   102,   128,
     115,   116,   117,   138,   137,   118,   139,    81,   107
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      53,    50,    65,    86,    75,    94,   130,    89,   125,    51,
      66,    95,    73,    39,    73,    39,    67,    96,   112,   113,
      93,    51,   130,    74,    99,    90,   126,     1,    94,     4,
     112,   109,   110,     5,     7,    50,     8,    11,    16,    12,
      18,    22,    19,   111,    27,    36,    25,    28,    33,    45,
      39,    47,    48,    50,    51,    56,    57,    62,    63,    50,
      70,    83,    84,    65,    91,    88,   134,   104,   108,   127,
     143,    50,   122,   129,   101,   131,   135,   136,    65,   140,
      65,   142,   144,   145,   120,   121,   146,   148,    21,   141,
      65,   100,   119,   132,     0,     0,    72,    38
};

static const yytype_int16 yycheck[] =
{
      43,    41,    53,    67,    61,    77,   116,     4,     4,     8,
      16,    16,     7,     8,     7,     8,    22,    22,    17,    18,
      77,     8,   132,    18,    81,    22,    22,    10,   100,     0,
      17,    95,    96,    12,     4,    75,    11,     4,     6,    13,
       4,     6,    20,   100,     4,     4,    15,    19,    14,     6,
       8,     6,     4,    93,     8,     6,     9,     6,     4,    99,
       4,     6,     4,   114,     4,     6,    16,     6,     6,     4,
     134,   111,     6,   116,    21,   118,     6,     6,   129,     6,
     131,     6,     6,     6,    21,    21,     6,     6,    14,   132,
     141,    81,   103,   118,    -1,    -1,    59,    30
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    24,    25,     0,    12,    27,     4,    11,    29,
      28,     4,    13,    31,    32,    33,     6,    30,     4,    20,
      36,    33,     6,    34,    37,    15,    49,     4,    19,    39,
      40,    41,    50,    14,    69,    35,     4,    38,    41,     8,
      52,    53,    54,    70,    26,     6,    42,     6,     4,    51,
      54,     8,    72,    73,    74,    75,     6,     9,    45,    46,
      47,    55,     6,     4,    71,    74,    16,    22,    77,    80,
       4,    43,    47,     7,    18,    53,    57,    58,    59,    60,
      63,    90,    76,     6,     4,    44,    44,    48,     6,     4,
      22,     4,    56,    53,    59,    16,    22,    65,    67,    53,
      58,    21,    81,    78,     6,    64,    61,    91,     6,    44,
      44,    53,    17,    18,    73,    83,    84,    85,    88,    83,
      21,    21,     6,    68,    66,     4,    22,     4,    82,    73,
      85,    73,    84,    79,    16,     6,     6,    87,    86,    89,
       6,    73,     6,    44,     6,     6,     6,    62,     6
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    23,    25,    26,    24,    28,    27,    30,    29,    31,
      31,    32,    32,    34,    35,    33,    37,    38,    36,    39,
      39,    40,    40,    42,    43,    41,    44,    44,    45,    45,
      46,    46,    48,    47,    50,    51,    49,    52,    52,    53,
      53,    55,    56,    54,    57,    57,    57,    57,    57,    57,
      57,    58,    58,    59,    59,    59,    61,    62,    60,    64,
      63,    66,    65,    68,    67,    70,    71,    69,    72,    72,
      73,    73,    74,    74,    76,    75,    78,    79,    77,    81,
      82,    80,    83,    83,    83,    83,    83,    83,    83,    84,
      84,    86,    85,    87,    85,    89,    88,    91,    90
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,    10,     0,     4,     0,     4,     1,
       0,     1,     2,     0,     0,     6,     0,     0,     5,     1,
       0,     1,     2,     0,     0,     6,     1,     0,     1,     0,
       1,     2,     0,     4,     0,     0,     5,     1,     0,     1,
       2,     0,     0,     6,     1,     2,     1,     2,     2,     3,
       0,     1,     2,     1,     2,     2,     0,     0,     8,     0,
       4,     0,     4,     0,     4,     0,     0,     5,     1,     0,
       1,     2,     2,     2,     0,     4,     0,     0,     6,     0,
       0,     6,     1,     2,     1,     2,     2,     3,     0,     1,
       2,     0,     4,     0,     4,     0,     4,     0,     4
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
        case 2:
#line 83 "/home/red-sea/COSSIM/hla/certi/libCERTI/syntax.yy" /* yacc.c:1646  */
    { certi::fedparser::startFed(); }
#line 1400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 89 "/home/red-sea/COSSIM/hla/certi/libCERTI/syntax.yy" /* yacc.c:1646  */
    { certi::fedparser::endFed(); }
#line 1406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 93 "/home/red-sea/COSSIM/hla/certi/libCERTI/syntax.yy" /* yacc.c:1646  */
    { certi::fedparser::federationname_arg =  certi::fedparser::arg;
	                    certi::fedparser::addFederation(); }
#line 1413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 98 "/home/red-sea/COSSIM/hla/certi/libCERTI/syntax.yy" /* yacc.c:1646  */
    { certi::fedparser::addFedVersion(); }
#line 1419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 110 "/home/red-sea/COSSIM/hla/certi/libCERTI/syntax.yy" /* yacc.c:1646  */
    { certi::fedparser::federatename_arg =  certi::fedparser::arg;
	                  certi::fedparser::startFederate(); }
#line 1426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 112 "/home/red-sea/COSSIM/hla/certi/libCERTI/syntax.yy" /* yacc.c:1646  */
    { certi::fedparser::endFederate(); }
#line 1432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 116 "/home/red-sea/COSSIM/hla/certi/libCERTI/syntax.yy" /* yacc.c:1646  */
    { certi::fedparser::startSpaces(); }
#line 1438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 117 "/home/red-sea/COSSIM/hla/certi/libCERTI/syntax.yy" /* yacc.c:1646  */
    { certi::fedparser::end(); }
#line 1444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 129 "/home/red-sea/COSSIM/hla/certi/libCERTI/syntax.yy" /* yacc.c:1646  */
    { certi::fedparser::spacename_arg =  certi::fedparser::arg;
	               certi::fedparser::startSpace(); }
#line 1451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 131 "/home/red-sea/COSSIM/hla/certi/libCERTI/syntax.yy" /* yacc.c:1646  */
    { certi::fedparser::endSpace(); }
#line 1457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 135 "/home/red-sea/COSSIM/hla/certi/libCERTI/syntax.yy" /* yacc.c:1646  */
    { certi::fedparser::spacename_arg =  certi::fedparser::arg;
	         certi::fedparser::checkSpaceName(); }
#line 1464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 148 "/home/red-sea/COSSIM/hla/certi/libCERTI/syntax.yy" /* yacc.c:1646  */
    { certi::fedparser::dimensionname_arg =  certi::fedparser::arg;
	                   certi::fedparser::addDimension(); }
#line 1471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 153 "/home/red-sea/COSSIM/hla/certi/libCERTI/syntax.yy" /* yacc.c:1646  */
    { certi::fedparser::startObjects(); }
#line 1477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 154 "/home/red-sea/COSSIM/hla/certi/libCERTI/syntax.yy" /* yacc.c:1646  */
    { certi::fedparser::end(); }
#line 1483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 166 "/home/red-sea/COSSIM/hla/certi/libCERTI/syntax.yy" /* yacc.c:1646  */
    { certi::fedparser::objectclassname_arg =  certi::fedparser::arg;
	               certi::fedparser::startObject(); }
#line 1490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 168 "/home/red-sea/COSSIM/hla/certi/libCERTI/syntax.yy" /* yacc.c:1646  */
    { certi::fedparser::endObject(); }
#line 1496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 191 "/home/red-sea/COSSIM/hla/certi/libCERTI/syntax.yy" /* yacc.c:1646  */
    { certi::fedparser::attributename_arg = certi::fedparser::timestamp_arg;}
#line 1502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 193 "/home/red-sea/COSSIM/hla/certi/libCERTI/syntax.yy" /* yacc.c:1646  */
    { certi::fedparser::addAttribute(); }
#line 1508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 198 "/home/red-sea/COSSIM/hla/certi/libCERTI/syntax.yy" /* yacc.c:1646  */
    { certi::fedparser::attributename_arg = certi::fedparser::arg;}
#line 1514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 203 "/home/red-sea/COSSIM/hla/certi/libCERTI/syntax.yy" /* yacc.c:1646  */
    { certi::fedparser::addAttribute(); }
#line 1520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 208 "/home/red-sea/COSSIM/hla/certi/libCERTI/syntax.yy" /* yacc.c:1646  */
    { certi::fedparser::addAttribute(); }
#line 1526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 213 "/home/red-sea/COSSIM/hla/certi/libCERTI/syntax.yy" /* yacc.c:1646  */
    { certi::fedparser::startInteractions(); }
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 215 "/home/red-sea/COSSIM/hla/certi/libCERTI/syntax.yy" /* yacc.c:1646  */
    { certi::fedparser::end(); }
#line 1538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 232 "/home/red-sea/COSSIM/hla/certi/libCERTI/syntax.yy" /* yacc.c:1646  */
    { certi::fedparser::interactionclassname_arg = certi::fedparser::arg;}
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 237 "/home/red-sea/COSSIM/hla/certi/libCERTI/syntax.yy" /* yacc.c:1646  */
    { certi::fedparser::startInteraction(); }
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 239 "/home/red-sea/COSSIM/hla/certi/libCERTI/syntax.yy" /* yacc.c:1646  */
    { certi::fedparser::endInteraction(); }
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 244 "/home/red-sea/COSSIM/hla/certi/libCERTI/syntax.yy" /* yacc.c:1646  */
    { certi::fedparser::startInteraction(); }
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 246 "/home/red-sea/COSSIM/hla/certi/libCERTI/syntax.yy" /* yacc.c:1646  */
    { certi::fedparser::endInteraction(); }
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 264 "/home/red-sea/COSSIM/hla/certi/libCERTI/syntax.yy" /* yacc.c:1646  */
    {certi::fedparser::parametername_arg = certi::fedparser::timestamp_arg; 
	 certi::fedparser::addParameter(); }
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 270 "/home/red-sea/COSSIM/hla/certi/libCERTI/syntax.yy" /* yacc.c:1646  */
    { certi::fedparser::parametername_arg = certi::fedparser::arg;
	  certi::fedparser::addParameter(); }
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 275 "/home/red-sea/COSSIM/hla/certi/libCERTI/syntax.yy" /* yacc.c:1646  */
    { certi::fedparser::addInteractionSecurityLevel(); }
#line 1588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 279 "/home/red-sea/COSSIM/hla/certi/libCERTI/syntax.yy" /* yacc.c:1646  */
    { certi::fedparser::addObjectSecurityLevel(); }
#line 1594 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1598 "y.tab.c" /* yacc.c:1646  */
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
#line 282 "/home/red-sea/COSSIM/hla/certi/libCERTI/syntax.yy" /* yacc.c:1906  */


int yyerror(const char *s) {
    cerr << endl << certi::fedparser::fed_filename << ":" 
         << certi::fedparser::line_number << ": " << s << endl ;
    return 0 ;
}
