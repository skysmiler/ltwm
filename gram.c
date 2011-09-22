
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 67 "gram.y"

#include <stdio.h>
#include <ctype.h>
#include "twm.h"
#include "menus.h"
#include "list.h"
#include "util.h"
#include "screen.h"
#include "parse.h"
#include "add_window.h"
#include "icons.h"
#include <X11/Xos.h>
#include <X11/Xmu/CharSet.h>

static char *Action = "";
static char *Name = "";
static MenuRoot	*root, *pull = NULL;

static MenuRoot *GetRoot ( char *name, char *fore, char *back );
static void GotButton ( int butt, int func );
static void GotKey ( char *key, int func );
static void GotTitleButton ( char *bitmapname, int func, Bool rightside );
static Bool CheckWarpScreenArg ( char *s );
static Bool CheckWarpRingArg ( char *s );
static Bool CheckColormapArg ( char *s );

static void SetCustomFunction( int func);

static char *ptr;
static name_list **list;
static int cont = 0;
static int color;
int mods = 0;
unsigned int mods_used = (ShiftMask | ControlMask | Mod1Mask);

extern int yylineno;


/* Line 189 of yacc.c  */
#line 112 "gram.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     LB = 258,
     RB = 259,
     LP = 260,
     RP = 261,
     MENUS = 262,
     MENU = 263,
     BUTTON = 264,
     DEFAULT_FUNCTION = 265,
     PLUS = 266,
     MINUS = 267,
     ALL = 268,
     OR = 269,
     CURSORS = 270,
     PIXMAPS = 271,
     ICONS = 272,
     COLOR = 273,
     SAVECOLOR = 274,
     MONOCHROME = 275,
     FUNCTION = 276,
     ICONMGR_SHOW = 277,
     ICONMGR = 278,
     WINDOW_FUNCTION = 279,
     ZOOM = 280,
     ICONMGRS = 281,
     ICONMGR_GEOMETRY = 282,
     ICONMGR_NOSHOW = 283,
     MAKE_TITLE = 284,
     GRAYSCALE = 285,
     ICONIFY_BY_UNMAPPING = 286,
     DONT_ICONIFY_BY_UNMAPPING = 287,
     NO_TITLE = 288,
     AUTO_RAISE = 289,
     NO_HILITE = 290,
     ICON_REGION = 291,
     META = 292,
     SHIFT = 293,
     LOCK = 294,
     CONTROL = 295,
     WINDOW = 296,
     TITLE = 297,
     ICON = 298,
     ROOT = 299,
     FRAME = 300,
     COLON = 301,
     EQUALS = 302,
     SQUEEZE_TITLE = 303,
     DONT_SQUEEZE_TITLE = 304,
     START_ICONIFIED = 305,
     NO_TITLE_HILITE = 306,
     TITLE_HILITE = 307,
     MOVE = 308,
     RESIZE = 309,
     WAIT = 310,
     SELECT = 311,
     KILL = 312,
     LEFT_TITLEBUTTON = 313,
     RIGHT_TITLEBUTTON = 314,
     NUMBER = 315,
     KEYWORD = 316,
     NKEYWORD = 317,
     CKEYWORD = 318,
     CLKEYWORD = 319,
     FKEYWORD = 320,
     FSKEYWORD = 321,
     SKEYWORD = 322,
     DKEYWORD = 323,
     JKEYWORD = 324,
     WINDOW_RING = 325,
     WARP_CURSOR = 326,
     ERRORTOKEN = 327,
     NO_STACKMODE = 328,
     STRING = 329,
     INIT_FUNCTION = 330
   };
#endif
/* Tokens.  */
#define LB 258
#define RB 259
#define LP 260
#define RP 261
#define MENUS 262
#define MENU 263
#define BUTTON 264
#define DEFAULT_FUNCTION 265
#define PLUS 266
#define MINUS 267
#define ALL 268
#define OR 269
#define CURSORS 270
#define PIXMAPS 271
#define ICONS 272
#define COLOR 273
#define SAVECOLOR 274
#define MONOCHROME 275
#define FUNCTION 276
#define ICONMGR_SHOW 277
#define ICONMGR 278
#define WINDOW_FUNCTION 279
#define ZOOM 280
#define ICONMGRS 281
#define ICONMGR_GEOMETRY 282
#define ICONMGR_NOSHOW 283
#define MAKE_TITLE 284
#define GRAYSCALE 285
#define ICONIFY_BY_UNMAPPING 286
#define DONT_ICONIFY_BY_UNMAPPING 287
#define NO_TITLE 288
#define AUTO_RAISE 289
#define NO_HILITE 290
#define ICON_REGION 291
#define META 292
#define SHIFT 293
#define LOCK 294
#define CONTROL 295
#define WINDOW 296
#define TITLE 297
#define ICON 298
#define ROOT 299
#define FRAME 300
#define COLON 301
#define EQUALS 302
#define SQUEEZE_TITLE 303
#define DONT_SQUEEZE_TITLE 304
#define START_ICONIFIED 305
#define NO_TITLE_HILITE 306
#define TITLE_HILITE 307
#define MOVE 308
#define RESIZE 309
#define WAIT 310
#define SELECT 311
#define KILL 312
#define LEFT_TITLEBUTTON 313
#define RIGHT_TITLEBUTTON 314
#define NUMBER 315
#define KEYWORD 316
#define NKEYWORD 317
#define CKEYWORD 318
#define CLKEYWORD 319
#define FKEYWORD 320
#define FSKEYWORD 321
#define SKEYWORD 322
#define DKEYWORD 323
#define JKEYWORD 324
#define WINDOW_RING 325
#define WARP_CURSOR 326
#define ERRORTOKEN 327
#define NO_STACKMODE 328
#define STRING 329
#define INIT_FUNCTION 330




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 106 "gram.y"

    int num;
    char *ptr;



/* Line 214 of yacc.c  */
#line 305 "gram.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 317 "gram.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   364

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  194
/* YYNRULES -- Number of states.  */
#define YYNSTATES  289

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   330

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     9,    11,    13,    15,    17,
      19,    26,    30,    33,    36,    38,    41,    44,    45,    49,
      51,    56,    61,    66,    69,    72,    75,    78,    79,    83,
      84,    88,    90,    91,    95,    96,   100,   101,   105,   107,
     108,   112,   114,   115,   119,   121,   122,   126,   128,   129,
     133,   134,   138,   139,   143,   144,   154,   155,   160,   161,
     166,   167,   171,   172,   176,   177,   181,   184,   185,   189,
     192,   195,   196,   200,   202,   203,   207,   209,   212,   215,
     222,   229,   230,   233,   235,   237,   239,   241,   244,   246,
     247,   250,   252,   254,   256,   258,   260,   262,   264,   266,
     268,   269,   272,   274,   276,   278,   280,   282,   284,   286,
     288,   290,   292,   296,   297,   300,   303,   307,   308,   311,
     315,   318,   322,   325,   329,   332,   336,   339,   343,   346,
     350,   353,   357,   360,   364,   367,   371,   374,   378,   381,
     385,   388,   392,   393,   396,   399,   400,   405,   408,   412,
     413,   416,   418,   420,   424,   425,   428,   431,   433,   434,
     440,   442,   443,   447,   448,   454,   458,   459,   462,   466,
     471,   475,   476,   479,   481,   485,   486,   489,   492,   496,
     497,   500,   502,   506,   507,   510,   513,   521,   523,   526,
     528,   531,   534,   537,   539
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      77,     0,    -1,    78,    -1,    -1,    78,    79,    -1,     1,
      -1,   101,    -1,   102,    -1,   103,    -1,   128,    -1,    36,
     150,    68,    68,   151,   151,    -1,    27,   150,   151,    -1,
      27,   150,    -1,    25,   151,    -1,    25,    -1,    16,   112,
      -1,    15,   115,    -1,    -1,    31,    80,   135,    -1,    31,
      -1,    58,   150,    47,   147,    -1,    59,   150,    47,   147,
      -1,    75,   150,    47,   147,    -1,   149,   150,    -1,   149,
     147,    -1,   150,   105,    -1,   149,   104,    -1,    -1,    32,
      81,   135,    -1,    -1,    28,    82,   135,    -1,    28,    -1,
      -1,    26,    83,   132,    -1,    -1,    22,    84,   135,    -1,
      -1,    51,    85,   135,    -1,    51,    -1,    -1,    35,    86,
     135,    -1,    35,    -1,    -1,    73,    87,   135,    -1,    73,
      -1,    -1,    33,    88,   135,    -1,    33,    -1,    -1,    29,
      89,   135,    -1,    -1,    50,    90,   135,    -1,    -1,    34,
      91,   135,    -1,    -1,     8,   150,     5,   150,    46,   150,
       6,    92,   144,    -1,    -1,     8,   150,    93,   144,    -1,
      -1,    21,   150,    94,   141,    -1,    -1,    17,    95,   138,
      -1,    -1,    18,    96,   118,    -1,    -1,    30,    97,   118,
      -1,    19,   122,    -1,    -1,    20,    98,   118,    -1,    10,
     147,    -1,    24,   147,    -1,    -1,    71,    99,   135,    -1,
      71,    -1,    -1,    70,   100,   135,    -1,    61,    -1,    67,
     150,    -1,    62,   151,    -1,    47,   106,    46,   108,    46,
     147,    -1,    47,   106,    46,   110,    46,   147,    -1,    -1,
     106,   107,    -1,    37,    -1,    38,    -1,    39,    -1,    40,
      -1,    37,   151,    -1,    14,    -1,    -1,   108,   109,    -1,
      41,    -1,    42,    -1,    43,    -1,    44,    -1,    45,    -1,
      23,    -1,    37,    -1,    13,    -1,    14,    -1,    -1,   110,
     111,    -1,    41,    -1,    42,    -1,    43,    -1,    44,    -1,
      45,    -1,    23,    -1,    37,    -1,    13,    -1,    14,    -1,
     150,    -1,     3,   113,     4,    -1,    -1,   113,   114,    -1,
      52,   150,    -1,     3,   116,     4,    -1,    -1,   116,   117,
      -1,    45,   150,   150,    -1,    45,   150,    -1,    42,   150,
     150,    -1,    42,   150,    -1,    43,   150,   150,    -1,    43,
     150,    -1,    23,   150,   150,    -1,    23,   150,    -1,     9,
     150,   150,    -1,     9,   150,    -1,    53,   150,   150,    -1,
      53,   150,    -1,    54,   150,   150,    -1,    54,   150,    -1,
      55,   150,   150,    -1,    55,   150,    -1,     8,   150,   150,
      -1,     8,   150,    -1,    56,   150,   150,    -1,    56,   150,
      -1,    57,   150,   150,    -1,    57,   150,    -1,     3,   119,
       4,    -1,    -1,   119,   120,    -1,    64,   150,    -1,    -1,
      64,   150,   121,   125,    -1,    63,   150,    -1,     3,   123,
       4,    -1,    -1,   123,   124,    -1,   150,    -1,    64,    -1,
       3,   126,     4,    -1,    -1,   126,   127,    -1,   150,   150,
      -1,    48,    -1,    -1,    48,   129,     3,   131,     4,    -1,
      49,    -1,    -1,    49,   130,   135,    -1,    -1,   131,   150,
      69,   148,   151,    -1,     3,   133,     4,    -1,    -1,   133,
     134,    -1,   150,   150,   151,    -1,   150,   150,   150,   151,
      -1,     3,   136,     4,    -1,    -1,   136,   137,    -1,   150,
      -1,     3,   139,     4,    -1,    -1,   139,   140,    -1,   150,
     150,    -1,     3,   142,     4,    -1,    -1,   142,   143,    -1,
     147,    -1,     3,   145,     4,    -1,    -1,   145,   146,    -1,
     150,   147,    -1,   150,     5,   150,    46,   150,     6,   147,
      -1,    65,    -1,    66,   150,    -1,   151,    -1,    11,   151,
      -1,    12,   151,    -1,     9,   151,    -1,    74,    -1,    60,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   136,   136,   139,   140,   143,   144,   145,   146,   147,
     148,   150,   156,   159,   165,   167,   168,   169,   169,   171,
     173,   176,   179,   183,   187,   203,   204,   205,   205,   207,
     207,   209,   210,   210,   212,   212,   214,   214,   216,   218,
     218,   220,   222,   222,   224,   226,   226,   228,   230,   230,
     232,   232,   234,   234,   236,   236,   239,   239,   241,   241,
     243,   243,   245,   245,   247,   247,   249,   251,   251,   253,
     269,   277,   277,   279,   281,   281,   286,   296,   306,   318,
     321,   324,   325,   328,   329,   330,   331,   332,   342,   345,
     346,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     360,   361,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   377,   380,   381,   384,   388,   391,   392,   395,
     397,   399,   401,   403,   405,   407,   409,   411,   413,   415,
     417,   419,   421,   423,   425,   427,   429,   431,   433,   435,
     437,   441,   445,   446,   449,   458,   458,   469,   480,   483,
     484,   487,   488,   491,   494,   495,   498,   503,   506,   506,
     511,   512,   512,   516,   517,   525,   528,   529,   532,   537,
     545,   548,   549,   552,   557,   560,   561,   564,   567,   570,
     571,   574,   580,   583,   584,   587,   592,   600,   601,   642,
     643,   644,   647,   659,   665
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LB", "RB", "LP", "RP", "MENUS", "MENU",
  "BUTTON", "DEFAULT_FUNCTION", "PLUS", "MINUS", "ALL", "OR", "CURSORS",
  "PIXMAPS", "ICONS", "COLOR", "SAVECOLOR", "MONOCHROME", "FUNCTION",
  "ICONMGR_SHOW", "ICONMGR", "WINDOW_FUNCTION", "ZOOM", "ICONMGRS",
  "ICONMGR_GEOMETRY", "ICONMGR_NOSHOW", "MAKE_TITLE", "GRAYSCALE",
  "ICONIFY_BY_UNMAPPING", "DONT_ICONIFY_BY_UNMAPPING", "NO_TITLE",
  "AUTO_RAISE", "NO_HILITE", "ICON_REGION", "META", "SHIFT", "LOCK",
  "CONTROL", "WINDOW", "TITLE", "ICON", "ROOT", "FRAME", "COLON", "EQUALS",
  "SQUEEZE_TITLE", "DONT_SQUEEZE_TITLE", "START_ICONIFIED",
  "NO_TITLE_HILITE", "TITLE_HILITE", "MOVE", "RESIZE", "WAIT", "SELECT",
  "KILL", "LEFT_TITLEBUTTON", "RIGHT_TITLEBUTTON", "NUMBER", "KEYWORD",
  "NKEYWORD", "CKEYWORD", "CLKEYWORD", "FKEYWORD", "FSKEYWORD", "SKEYWORD",
  "DKEYWORD", "JKEYWORD", "WINDOW_RING", "WARP_CURSOR", "ERRORTOKEN",
  "NO_STACKMODE", "STRING", "INIT_FUNCTION", "$accept", "twmrc", "stmts",
  "stmt", "$@1", "$@2", "$@3", "$@4", "$@5", "$@6", "$@7", "$@8", "$@9",
  "$@10", "$@11", "$@12", "$@13", "$@14", "$@15", "$@16", "$@17", "$@18",
  "$@19", "$@20", "$@21", "noarg", "sarg", "narg", "full", "fullkey",
  "keys", "key", "contexts", "context", "contextkeys", "contextkey",
  "pixmap_list", "pixmap_entries", "pixmap_entry", "cursor_list",
  "cursor_entries", "cursor_entry", "color_list", "color_entries",
  "color_entry", "$@22", "save_color_list", "s_color_entries",
  "s_color_entry", "win_color_list", "win_color_entries",
  "win_color_entry", "squeeze", "$@23", "$@24", "win_sqz_entries",
  "iconm_list", "iconm_entries", "iconm_entry", "win_list", "win_entries",
  "win_entry", "icon_list", "icon_entries", "icon_entry", "function",
  "function_entries", "function_entry", "menu", "menu_entries",
  "menu_entry", "action", "signed_number", "button", "string", "number", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    76,    77,    78,    78,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    80,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    81,    79,    82,
      79,    79,    83,    79,    84,    79,    85,    79,    79,    86,
      79,    79,    87,    79,    79,    88,    79,    79,    89,    79,
      90,    79,    91,    79,    92,    79,    93,    79,    94,    79,
      95,    79,    96,    79,    97,    79,    79,    98,    79,    79,
      79,    99,    79,    79,   100,    79,   101,   102,   103,   104,
     105,   106,   106,   107,   107,   107,   107,   107,   107,   108,
     108,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     110,   110,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   112,   113,   113,   114,   115,   116,   116,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   118,   119,   119,   120,   121,   120,   120,   122,   123,
     123,   124,   124,   125,   126,   126,   127,   128,   129,   128,
     128,   130,   128,   131,   131,   132,   133,   133,   134,   134,
     135,   136,   136,   137,   138,   139,   139,   140,   141,   142,
     142,   143,   144,   145,   145,   146,   146,   147,   147,   148,
     148,   148,   149,   150,   151
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     1,     1,
       6,     3,     2,     2,     1,     2,     2,     0,     3,     1,
       4,     4,     4,     2,     2,     2,     2,     0,     3,     0,
       3,     1,     0,     3,     0,     3,     0,     3,     1,     0,
       3,     1,     0,     3,     1,     0,     3,     1,     0,     3,
       0,     3,     0,     3,     0,     9,     0,     4,     0,     4,
       0,     3,     0,     3,     0,     3,     2,     0,     3,     2,
       2,     0,     3,     1,     0,     3,     1,     2,     2,     6,
       6,     0,     2,     1,     1,     1,     1,     2,     1,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     0,     2,     2,     3,     0,     2,     3,
       2,     3,     2,     3,     2,     3,     2,     3,     2,     3,
       2,     3,     2,     3,     2,     3,     2,     3,     2,     3,
       2,     3,     0,     2,     2,     0,     4,     2,     3,     0,
       2,     1,     1,     3,     0,     2,     2,     1,     0,     5,
       1,     0,     3,     0,     5,     3,     0,     2,     3,     4,
       3,     0,     2,     1,     3,     0,     2,     2,     3,     0,
       2,     1,     3,     0,     2,     2,     7,     1,     2,     1,
       2,     2,     2,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     1,     5,     0,     0,     0,     0,     0,
      60,    62,     0,    67,     0,    34,     0,    14,    32,     0,
      31,    48,    64,    19,    27,    47,    52,    41,     0,   157,
     160,    50,    38,     0,     0,    76,     0,     0,    74,    73,
      44,   193,     0,     4,     6,     7,     8,     9,     0,     0,
      56,   194,   192,   187,     0,    69,   117,    16,   113,    15,
       0,     0,   149,    66,     0,    58,     0,    70,    13,     0,
      12,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,    77,     0,     0,
       0,     0,    81,    26,    24,    23,    81,    25,     0,     0,
     188,     0,     0,   175,    61,   142,    63,     0,    68,     0,
     171,    35,   166,    33,    11,    30,    49,    65,    18,    28,
      46,    53,    40,     0,   163,   162,    51,    37,     0,     0,
      75,    72,    43,     0,     0,     0,     0,   183,    57,   116,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   118,   112,     0,   114,     0,     0,   148,   152,   150,
     151,   179,    59,     0,     0,     0,     0,    20,    21,    22,
      88,    83,    84,    85,    86,    89,    82,   100,     0,     0,
     136,   128,   126,   122,   124,   120,   130,   132,   134,   138,
     140,   115,   174,   176,     0,   141,     0,     0,   143,     0,
     170,   172,   173,   165,   167,     0,     0,   159,     0,    87,
       0,     0,     0,   182,   184,     0,   135,   127,   125,   121,
     123,   119,   129,   131,   133,   137,   139,   177,   147,   144,
     178,   180,   181,     0,    10,     0,    98,    99,    96,    97,
      91,    92,    93,    94,    95,     0,    90,   109,   110,   107,
     108,   102,   103,   104,   105,   106,     0,   101,   111,    54,
       0,   185,     0,     0,   168,     0,     0,     0,   189,    79,
      80,     0,     0,   154,   146,   169,   190,   191,   164,    55,
       0,     0,     0,   153,   155,     0,     0,   156,   186
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    43,    74,    75,    71,    69,    66,    83,
      78,    90,    76,    72,    82,    77,   271,    99,   109,    60,
      61,    73,    64,    89,    88,    44,    45,    46,    93,    97,
     134,   176,   210,   246,   211,   257,    59,   102,   154,    57,
     101,   151,   106,   156,   198,   262,    63,   107,   159,   274,
     281,   284,    47,    80,    81,   166,   113,   164,   204,   111,
     163,   201,   104,   155,   193,   162,   199,   231,   138,   179,
     214,    55,   267,    48,    49,    52
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -150
static const yytype_int16 yypact[] =
{
    -150,    19,   269,  -150,  -150,   -52,   -30,   -49,    33,    35,
    -150,  -150,    36,  -150,   -52,  -150,   -49,   -30,  -150,   -52,
      37,  -150,  -150,    38,  -150,    41,  -150,    42,   -52,    43,
      45,  -150,    47,   -52,   -52,  -150,   -30,   -52,  -150,    48,
      49,  -150,   -52,  -150,  -150,  -150,  -150,  -150,   -32,     8,
      51,  -150,  -150,  -150,   -52,  -150,  -150,  -150,  -150,  -150,
      50,    60,  -150,  -150,    60,  -150,    63,  -150,  -150,    65,
     -30,    63,    63,    60,    63,    63,    63,    63,    63,   -21,
      66,    63,    63,    63,    12,    53,  -150,  -150,    63,    63,
      63,    57,  -150,  -150,  -150,  -150,  -150,  -150,   -52,    81,
    -150,    56,     9,  -150,  -150,  -150,  -150,    -2,  -150,    91,
    -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
    -150,  -150,  -150,    29,  -150,  -150,  -150,  -150,   -49,   -49,
    -150,  -150,  -150,   -49,   157,   174,    61,  -150,  -150,  -150,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,  -150,  -150,   -52,  -150,     0,     7,  -150,  -150,  -150,
    -150,  -150,  -150,     1,     2,   -30,     3,  -150,  -150,  -150,
    -150,   -30,  -150,  -150,  -150,  -150,  -150,  -150,   -52,     4,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,  -150,  -150,  -150,   -52,  -150,   -52,   -52,  -150,    17,
    -150,  -150,  -150,  -150,  -150,   -52,   -30,  -150,    34,  -150,
      82,    44,   100,  -150,  -150,    26,  -150,  -150,  -150,  -150,
    -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,   105,
    -150,  -150,  -150,   -48,  -150,    13,  -150,  -150,  -150,  -150,
    -150,  -150,  -150,  -150,  -150,   -49,  -150,  -150,  -150,  -150,
    -150,  -150,  -150,  -150,  -150,  -150,   -49,  -150,  -150,  -150,
     -52,  -150,   111,   -30,  -150,   -30,   -30,   -30,  -150,  -150,
    -150,    81,    71,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
     -52,     6,   115,  -150,  -150,   -52,   -49,  -150,  -150
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
    -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
    -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
      55,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
    -150,  -150,   -46,  -150,  -150,  -150,  -150,  -150,  -150,  -150,
    -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,   274,
    -150,  -150,  -150,  -150,  -150,  -150,  -150,  -150,  -149,  -150,
    -150,   -13,  -150,  -150,    -5,   -16
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -162
static const yytype_int16 yytable[] =
{
      50,    68,   157,    67,   192,   200,   203,   207,   213,    65,
     283,   195,    51,   152,    70,    92,    53,    54,   108,     3,
      86,   230,    41,    79,   265,   266,    41,   117,    84,    85,
      51,   260,    87,    53,    54,    94,    56,    91,    58,    62,
     -29,   -17,    41,    95,   -45,   -39,  -158,   123,  -161,   100,
     -36,   -71,   -42,   103,   114,    96,    98,   247,   248,   128,
     139,   153,   158,   105,   140,   141,   110,   249,   112,   124,
     196,   197,    41,    51,    41,    41,    41,    41,    41,   142,
      41,   250,    53,    54,   137,   251,   252,   253,   254,   255,
     256,    53,    54,   136,   161,   236,   237,   165,   143,   144,
     129,   145,   160,   235,   133,   238,   259,   178,  -145,   146,
     147,   148,   149,   150,   273,   167,   168,   280,    41,   239,
     169,   286,   279,   240,   241,   242,   243,   244,   245,     0,
       0,     0,     0,     0,     0,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,     0,     0,   191,   206,
     194,   135,     0,     0,     0,   209,     0,     0,   202,   205,
       0,   208,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   170,     0,   212,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   232,     0,   170,   227,
     234,   228,   229,     0,   171,   172,   173,   174,     0,     0,
     233,     0,   261,   175,     0,     0,   258,     0,     0,     0,
       0,   171,   172,   173,   174,     0,     0,   264,     0,   268,
     177,     0,     0,     0,     0,     0,     0,     0,   263,     0,
       0,     0,   269,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   270,     0,     0,     0,   275,     0,   276,
     277,   278,     0,     0,     0,   272,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    -2,
       4,     0,     0,   288,     0,   282,   285,     5,     6,     7,
     287,     0,     0,     0,     8,     9,    10,    11,    12,    13,
      14,    15,     0,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,    30,    31,
      32,     0,     0,     0,     0,     0,     0,    33,    34,     0,
      35,    36,     0,     0,     0,     0,    37,     0,     0,    38,
      39,     0,    40,    41,    42,   115,   116,     0,   118,   119,
     120,   121,   122,     0,     0,   125,   126,   127,     0,     0,
       0,     0,   130,   131,   132
};

static const yytype_int16 yycheck[] =
{
       5,    17,     4,    16,     4,     4,     4,     4,     4,    14,
       4,     4,    60,     4,    19,    47,    65,    66,    64,     0,
      36,     4,    74,    28,    11,    12,    74,    73,    33,    34,
      60,     5,    37,    65,    66,    48,     3,    42,     3,     3,
       3,     3,    74,    48,     3,     3,     3,    68,     3,    54,
       3,     3,     3,     3,    70,    47,     5,    13,    14,    47,
       4,    52,    64,     3,     8,     9,     3,    23,     3,     3,
      63,    64,    74,    60,    74,    74,    74,    74,    74,    23,
      74,    37,    65,    66,     3,    41,    42,    43,    44,    45,
      46,    65,    66,    98,     3,    13,    14,    68,    42,    43,
      47,    45,   107,    69,    47,    23,     6,    46,     3,    53,
      54,    55,    56,    57,     3,   128,   129,    46,    74,    37,
     133,     6,   271,    41,    42,    43,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,    -1,    -1,   153,   165,
     155,    96,    -1,    -1,    -1,   171,    -1,    -1,   163,   164,
      -1,   166,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    14,    -1,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   199,    -1,    14,   194,
     206,   196,   197,    -1,    37,    38,    39,    40,    -1,    -1,
     205,    -1,   215,    46,    -1,    -1,   211,    -1,    -1,    -1,
      -1,    37,    38,    39,    40,    -1,    -1,   233,    -1,   235,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,    -1,
      -1,    -1,   245,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   256,    -1,    -1,    -1,   263,    -1,   265,
     266,   267,    -1,    -1,    -1,   260,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,
       1,    -1,    -1,   286,    -1,   280,   281,     8,     9,    10,
     285,    -1,    -1,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    58,    59,    -1,
      61,    62,    -1,    -1,    -1,    -1,    67,    -1,    -1,    70,
      71,    -1,    73,    74,    75,    71,    72,    -1,    74,    75,
      76,    77,    78,    -1,    -1,    81,    82,    83,    -1,    -1,
      -1,    -1,    88,    89,    90
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    77,    78,     0,     1,     8,     9,    10,    15,    16,
      17,    18,    19,    20,    21,    22,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    48,
      49,    50,    51,    58,    59,    61,    62,    67,    70,    71,
      73,    74,    75,    79,   101,   102,   103,   128,   149,   150,
     150,    60,   151,    65,    66,   147,     3,   115,     3,   112,
      95,    96,     3,   122,    98,   150,    84,   147,   151,    83,
     150,    82,    89,    97,    80,    81,    88,    91,    86,   150,
     129,   130,    90,    85,   150,   150,   151,   150,   100,    99,
      87,   150,    47,   104,   147,   150,    47,   105,     5,    93,
     150,   116,   113,     3,   138,     3,   118,   123,   118,    94,
       3,   135,     3,   132,   151,   135,   135,   118,   135,   135,
     135,   135,   135,    68,     3,   135,   135,   135,    47,    47,
     135,   135,   135,    47,   106,   106,   150,     3,   144,     4,
       8,     9,    23,    42,    43,    45,    53,    54,    55,    56,
      57,   117,     4,    52,   114,   139,   119,     4,    64,   124,
     150,     3,   141,   136,   133,    68,   131,   147,   147,   147,
      14,    37,    38,    39,    40,    46,   107,    46,    46,   145,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   150,     4,   140,   150,     4,    63,    64,   120,   142,
       4,   137,   150,     4,   134,   150,   151,     4,   150,   151,
     108,   110,   150,     4,   146,   150,   150,   150,   150,   150,
     150,   150,   150,   150,   150,   150,   150,   150,   150,   150,
       4,   143,   147,   150,   151,    69,    13,    14,    23,    37,
      41,    42,    43,    44,    45,    46,   109,    13,    14,    23,
      37,    41,    42,    43,    44,    45,    46,   111,   150,     6,
       5,   147,   121,   150,   151,    11,    12,   148,   151,   147,
     147,    92,   150,     3,   125,   151,   151,   151,   151,   144,
      46,   126,   150,     4,   127,   150,     6,   150,   147
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 10:

/* Line 1455 of yacc.c  */
#line 149 "gram.y"
    { AddIconRegion((yyvsp[(2) - (6)].ptr), (yyvsp[(3) - (6)].num), (yyvsp[(4) - (6)].num), (yyvsp[(5) - (6)].num), (yyvsp[(6) - (6)].num)); }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 150 "gram.y"
    { if (Scr->FirstTime)
						  {
						    Scr->iconmgr.geometry=(yyvsp[(2) - (3)].ptr);
						    Scr->iconmgr.columns=(yyvsp[(3) - (3)].num);
						  }
						}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 156 "gram.y"
    { if (Scr->FirstTime)
						    Scr->iconmgr.geometry = (yyvsp[(2) - (2)].ptr);
						}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 159 "gram.y"
    { if (Scr->FirstTime)
					  {
						Scr->DoZoom = TRUE;
						Scr->ZoomCount = (yyvsp[(2) - (2)].num);
					  }
					}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 165 "gram.y"
    { if (Scr->FirstTime) 
						Scr->DoZoom = TRUE; }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 167 "gram.y"
    {}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 168 "gram.y"
    {}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 169 "gram.y"
    { list = &Scr->IconifyByUn; }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 171 "gram.y"
    { if (Scr->FirstTime) 
		    Scr->IconifyByUnmapping = TRUE; }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 173 "gram.y"
    { 
					  GotTitleButton ((yyvsp[(2) - (4)].ptr), (yyvsp[(4) - (4)].num), False);
					}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 176 "gram.y"
    { 
					  GotTitleButton ((yyvsp[(2) - (4)].ptr), (yyvsp[(4) - (4)].num), True);
					}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 179 "gram.y"
    { 
					  fprintf(stderr,"get init_function:%s\n");
					  SetCustomFunction((yyvsp[(4) - (4)].num));
					}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 183 "gram.y"
    { root = GetRoot((yyvsp[(2) - (2)].ptr), NULLSTR, NULLSTR);
					  Scr->Mouse[(yyvsp[(1) - (2)].num)][C_ROOT][0].func = F_MENU;
					  Scr->Mouse[(yyvsp[(1) - (2)].num)][C_ROOT][0].menu = root;
					}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 187 "gram.y"
    { Scr->Mouse[(yyvsp[(1) - (2)].num)][C_ROOT][0].func = (yyvsp[(2) - (2)].num);
					  if ((yyvsp[(2) - (2)].num) == F_MENU)
					  {
					    pull->prev = NULL;
					    Scr->Mouse[(yyvsp[(1) - (2)].num)][C_ROOT][0].menu = pull;
					  }
					  else
					  {
					    root = GetRoot(TWM_ROOT,NULLSTR,NULLSTR);
					    Scr->Mouse[(yyvsp[(1) - (2)].num)][C_ROOT][0].item = 
						AddToMenu(root,"x",Action,
							  NULL,(yyvsp[(2) - (2)].num),NULLSTR,NULLSTR);
					  }
					  Action = "";
					  pull = NULL;
					}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 203 "gram.y"
    { GotKey((yyvsp[(1) - (2)].ptr), (yyvsp[(2) - (2)].num)); }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 204 "gram.y"
    { GotButton((yyvsp[(1) - (2)].num), (yyvsp[(2) - (2)].num)); }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 205 "gram.y"
    { list = &Scr->DontIconify; }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 207 "gram.y"
    { list = &Scr->IconMgrNoShow; }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 209 "gram.y"
    { Scr->IconManagerDontShow = TRUE; }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 210 "gram.y"
    { list = &Scr->IconMgrs; }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 212 "gram.y"
    { list = &Scr->IconMgrShow; }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 214 "gram.y"
    { list = &Scr->NoTitleHighlight; }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 216 "gram.y"
    { if (Scr->FirstTime)
						Scr->TitleHighlight = FALSE; }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 218 "gram.y"
    { list = &Scr->NoHighlight; }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 220 "gram.y"
    { if (Scr->FirstTime)
						Scr->Highlight = FALSE; }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 222 "gram.y"
    { list = &Scr->NoStackModeL; }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 224 "gram.y"
    { if (Scr->FirstTime)
						Scr->StackMode = FALSE; }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 226 "gram.y"
    { list = &Scr->NoTitle; }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 228 "gram.y"
    { if (Scr->FirstTime)
						Scr->NoTitlebar = TRUE; }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 230 "gram.y"
    { list = &Scr->MakeTitle; }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 232 "gram.y"
    { list = &Scr->StartIconified; }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 234 "gram.y"
    { list = &Scr->AutoRaise; }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 236 "gram.y"
    {
					root = GetRoot((yyvsp[(2) - (7)].ptr), (yyvsp[(4) - (7)].ptr), (yyvsp[(6) - (7)].ptr)); }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 238 "gram.y"
    { root->real_menu = TRUE;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 239 "gram.y"
    { root = GetRoot((yyvsp[(2) - (2)].ptr), NULLSTR, NULLSTR); }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 240 "gram.y"
    { root->real_menu = TRUE; }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 241 "gram.y"
    { root = GetRoot((yyvsp[(2) - (2)].ptr), NULLSTR, NULLSTR); }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 243 "gram.y"
    { list = &Scr->IconNames; }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 245 "gram.y"
    { color = COLOR; }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 247 "gram.y"
    { color = GRAYSCALE; }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 251 "gram.y"
    { color = MONOCHROME; }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 253 "gram.y"
    { Scr->DefaultFunction.func = (yyvsp[(2) - (2)].num);
					  if ((yyvsp[(2) - (2)].num) == F_MENU)
					  {
					    pull->prev = NULL;
					    Scr->DefaultFunction.menu = pull;
					  }
					  else
					  {
					    root = GetRoot(TWM_ROOT,NULLSTR,NULLSTR);
					    Scr->DefaultFunction.item = 
						AddToMenu(root,"x",Action,
							  NULL,(yyvsp[(2) - (2)].num), NULLSTR, NULLSTR);
					  }
					  Action = "";
					  pull = NULL;
					}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 269 "gram.y"
    { Scr->WindowFunction.func = (yyvsp[(2) - (2)].num);
					   root = GetRoot(TWM_ROOT,NULLSTR,NULLSTR);
					   Scr->WindowFunction.item = 
						AddToMenu(root,"x",Action,
							  NULL,(yyvsp[(2) - (2)].num), NULLSTR, NULLSTR);
					   Action = "";
					   pull = NULL;
					}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 277 "gram.y"
    { list = &Scr->WarpCursorL; }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 279 "gram.y"
    { if (Scr->FirstTime) 
					    Scr->WarpCursor = TRUE; }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 281 "gram.y"
    { list = &Scr->WindowRingL; }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 286 "gram.y"
    { if (!do_single_keyword ((yyvsp[(1) - (1)].num))) {
					    twmrc_error_prefix();
					    fprintf (stderr,
					"unknown singleton keyword %d\n",
						     (yyvsp[(1) - (1)].num));
					    ParseError = 1;
					  }
					}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 296 "gram.y"
    { if (!do_string_keyword ((yyvsp[(1) - (2)].num), (yyvsp[(2) - (2)].ptr))) {
					    twmrc_error_prefix();
					    fprintf (stderr,
				"unknown string keyword %d (value \"%s\")\n",
						     (yyvsp[(1) - (2)].num), (yyvsp[(2) - (2)].ptr));
					    ParseError = 1;
					  }
					}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 306 "gram.y"
    { if (!do_number_keyword ((yyvsp[(1) - (2)].num), (yyvsp[(2) - (2)].num))) {
					    twmrc_error_prefix();
					    fprintf (stderr,
				"unknown numeric keyword %d (value %d)\n",
						     (yyvsp[(1) - (2)].num), (yyvsp[(2) - (2)].num));
					    ParseError = 1;
					  }
					}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 318 "gram.y"
    { (yyval.num) = (yyvsp[(6) - (6)].num); }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 321 "gram.y"
    { (yyval.num) = (yyvsp[(6) - (6)].num); }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 328 "gram.y"
    { mods |= Mod1Mask; }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 329 "gram.y"
    { mods |= ShiftMask; }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 330 "gram.y"
    { mods |= LockMask; }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 331 "gram.y"
    { mods |= ControlMask; }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 332 "gram.y"
    { if ((yyvsp[(2) - (2)].num) < 1 || (yyvsp[(2) - (2)].num) > 5) {
					     twmrc_error_prefix();
					     fprintf (stderr, 
				"bad modifier number (%d), must be 1-5\n",
						      (yyvsp[(2) - (2)].num));
					     ParseError = 1;
					  } else {
					     mods |= (Mod1Mask << ((yyvsp[(2) - (2)].num) - 1));
					  }
					}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 342 "gram.y"
    { }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 349 "gram.y"
    { cont |= C_WINDOW_BIT; }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 350 "gram.y"
    { cont |= C_TITLE_BIT; }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 351 "gram.y"
    { cont |= C_ICON_BIT; }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 352 "gram.y"
    { cont |= C_ROOT_BIT; }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 353 "gram.y"
    { cont |= C_FRAME_BIT; }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 354 "gram.y"
    { cont |= C_ICONMGR_BIT; }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 355 "gram.y"
    { cont |= C_ICONMGR_BIT; }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 356 "gram.y"
    { cont |= C_ALL_BITS; }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 357 "gram.y"
    {  }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 364 "gram.y"
    { cont |= C_WINDOW_BIT; }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 365 "gram.y"
    { cont |= C_TITLE_BIT; }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 366 "gram.y"
    { cont |= C_ICON_BIT; }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 367 "gram.y"
    { cont |= C_ROOT_BIT; }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 368 "gram.y"
    { cont |= C_FRAME_BIT; }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 369 "gram.y"
    { cont |= C_ICONMGR_BIT; }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 370 "gram.y"
    { cont |= C_ICONMGR_BIT; }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 371 "gram.y"
    { cont |= C_ALL_BITS; }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 372 "gram.y"
    { }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 373 "gram.y"
    { Name = (yyvsp[(1) - (1)].ptr); cont |= C_NAME_BIT; }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 384 "gram.y"
    { SetHighlightPixmap ((yyvsp[(2) - (2)].ptr)); }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 395 "gram.y"
    {
			NewBitmapCursor(&Scr->FrameCursor, (yyvsp[(2) - (3)].ptr), (yyvsp[(3) - (3)].ptr)); }
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 397 "gram.y"
    {
			NewFontCursor(&Scr->FrameCursor, (yyvsp[(2) - (2)].ptr)); }
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 399 "gram.y"
    {
			NewBitmapCursor(&Scr->TitleCursor, (yyvsp[(2) - (3)].ptr), (yyvsp[(3) - (3)].ptr)); }
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 401 "gram.y"
    {
			NewFontCursor(&Scr->TitleCursor, (yyvsp[(2) - (2)].ptr)); }
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 403 "gram.y"
    {
			NewBitmapCursor(&Scr->IconCursor, (yyvsp[(2) - (3)].ptr), (yyvsp[(3) - (3)].ptr)); }
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 405 "gram.y"
    {
			NewFontCursor(&Scr->IconCursor, (yyvsp[(2) - (2)].ptr)); }
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 407 "gram.y"
    {
			NewBitmapCursor(&Scr->IconMgrCursor, (yyvsp[(2) - (3)].ptr), (yyvsp[(3) - (3)].ptr)); }
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 409 "gram.y"
    {
			NewFontCursor(&Scr->IconMgrCursor, (yyvsp[(2) - (2)].ptr)); }
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 411 "gram.y"
    {
			NewBitmapCursor(&Scr->ButtonCursor, (yyvsp[(2) - (3)].ptr), (yyvsp[(3) - (3)].ptr)); }
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 413 "gram.y"
    {
			NewFontCursor(&Scr->ButtonCursor, (yyvsp[(2) - (2)].ptr)); }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 415 "gram.y"
    {
			NewBitmapCursor(&Scr->MoveCursor, (yyvsp[(2) - (3)].ptr), (yyvsp[(3) - (3)].ptr)); }
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 417 "gram.y"
    {
			NewFontCursor(&Scr->MoveCursor, (yyvsp[(2) - (2)].ptr)); }
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 419 "gram.y"
    {
			NewBitmapCursor(&Scr->ResizeCursor, (yyvsp[(2) - (3)].ptr), (yyvsp[(3) - (3)].ptr)); }
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 421 "gram.y"
    {
			NewFontCursor(&Scr->ResizeCursor, (yyvsp[(2) - (2)].ptr)); }
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 423 "gram.y"
    {
			NewBitmapCursor(&Scr->WaitCursor, (yyvsp[(2) - (3)].ptr), (yyvsp[(3) - (3)].ptr)); }
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 425 "gram.y"
    {
			NewFontCursor(&Scr->WaitCursor, (yyvsp[(2) - (2)].ptr)); }
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 427 "gram.y"
    {
			NewBitmapCursor(&Scr->MenuCursor, (yyvsp[(2) - (3)].ptr), (yyvsp[(3) - (3)].ptr)); }
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 429 "gram.y"
    {
			NewFontCursor(&Scr->MenuCursor, (yyvsp[(2) - (2)].ptr)); }
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 431 "gram.y"
    {
			NewBitmapCursor(&Scr->SelectCursor, (yyvsp[(2) - (3)].ptr), (yyvsp[(3) - (3)].ptr)); }
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 433 "gram.y"
    {
			NewFontCursor(&Scr->SelectCursor, (yyvsp[(2) - (2)].ptr)); }
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 435 "gram.y"
    {
			NewBitmapCursor(&Scr->DestroyCursor, (yyvsp[(2) - (3)].ptr), (yyvsp[(3) - (3)].ptr)); }
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 437 "gram.y"
    {
			NewFontCursor(&Scr->DestroyCursor, (yyvsp[(2) - (2)].ptr)); }
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 449 "gram.y"
    { if (!do_colorlist_keyword ((yyvsp[(1) - (2)].num), color,
								     (yyvsp[(2) - (2)].ptr))) {
					    twmrc_error_prefix();
					    fprintf (stderr,
			"unhandled list color keyword %d (string \"%s\")\n",
						     (yyvsp[(1) - (2)].num), (yyvsp[(2) - (2)].ptr));
					    ParseError = 1;
					  }
					}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 458 "gram.y"
    { list = do_colorlist_keyword((yyvsp[(1) - (2)].num),color,
								      (yyvsp[(2) - (2)].ptr));
					  if (!list) {
					    twmrc_error_prefix();
					    fprintf (stderr,
			"unhandled color list keyword %d (string \"%s\")\n",
						     (yyvsp[(1) - (2)].num), (yyvsp[(2) - (2)].ptr));
					    ParseError = 1;
					  }
					}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 468 "gram.y"
    { /* No action */; }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 469 "gram.y"
    { if (!do_color_keyword ((yyvsp[(1) - (2)].num), color,
								 (yyvsp[(2) - (2)].ptr))) {
					    twmrc_error_prefix();
					    fprintf (stderr,
			"unhandled color keyword %d (string \"%s\")\n",
						     (yyvsp[(1) - (2)].num), (yyvsp[(2) - (2)].ptr));
					    ParseError = 1;
					  }
					}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 487 "gram.y"
    { do_string_savecolor(color, (yyvsp[(1) - (1)].ptr)); }
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 488 "gram.y"
    { do_var_savecolor((yyvsp[(1) - (1)].num)); }
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 498 "gram.y"
    { if (Scr->FirstTime &&
					      color == Scr->Monochrome)
					    AddToList(list, (yyvsp[(1) - (2)].ptr), (yyvsp[(2) - (2)].ptr)); }
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 503 "gram.y"
    { 
				    if (HasShape) Scr->SqueezeTitle = TRUE;
				}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 506 "gram.y"
    { list = &Scr->SqueezeTitleL; 
				  if (HasShape && Scr->SqueezeTitle == -1)
				    Scr->SqueezeTitle = TRUE;
				}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 511 "gram.y"
    { Scr->SqueezeTitle = FALSE; }
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 512 "gram.y"
    { list = &Scr->DontSqueezeTitleL; }
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 517 "gram.y"
    {
				if (Scr->FirstTime) {
				   do_squeeze_entry (list, (yyvsp[(2) - (5)].ptr), (yyvsp[(3) - (5)].num), (yyvsp[(4) - (5)].num), (yyvsp[(5) - (5)].num));
				}
			}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 532 "gram.y"
    { if (Scr->FirstTime)
					    AddToList(list, (yyvsp[(1) - (3)].ptr), (char *)
						AllocateIconManager((yyvsp[(1) - (3)].ptr), NULLSTR,
							(yyvsp[(2) - (3)].ptr),(yyvsp[(3) - (3)].num)));
					}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 538 "gram.y"
    { if (Scr->FirstTime)
					    AddToList(list, (yyvsp[(1) - (4)].ptr), (char *)
						AllocateIconManager((yyvsp[(1) - (4)].ptr),(yyvsp[(2) - (4)].ptr),
						(yyvsp[(3) - (4)].ptr), (yyvsp[(4) - (4)].num)));
					}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 552 "gram.y"
    { if (Scr->FirstTime)
					    AddToList(list, (yyvsp[(1) - (1)].ptr), 0);
					}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 564 "gram.y"
    { if (Scr->FirstTime) AddToList(list, (yyvsp[(1) - (2)].ptr), (yyvsp[(2) - (2)].ptr)); }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 574 "gram.y"
    { AddToMenu(root, "", Action, NULL, (yyvsp[(1) - (1)].num),
						NULLSTR, NULLSTR);
					  Action = "";
					}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 587 "gram.y"
    { AddToMenu(root, (yyvsp[(1) - (2)].ptr), Action, pull, (yyvsp[(2) - (2)].num),
						NULLSTR, NULLSTR);
					  Action = "";
					  pull = NULL;
					}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 592 "gram.y"
    {
					  AddToMenu(root, (yyvsp[(1) - (7)].ptr), Action, pull, (yyvsp[(7) - (7)].num),
						(yyvsp[(3) - (7)].ptr), (yyvsp[(5) - (7)].ptr));
					  Action = "";
					  pull = NULL;
					}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 600 "gram.y"
    { (yyval.num) = (yyvsp[(1) - (1)].num); }
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 601 "gram.y"
    {
				(yyval.num) = (yyvsp[(1) - (2)].num);
				Action = (yyvsp[(2) - (2)].ptr);
				switch ((yyvsp[(1) - (2)].num)) {
				  case F_MENU:
				    pull = GetRoot ((yyvsp[(2) - (2)].ptr), NULLSTR,NULLSTR);
				    pull->prev = root;
				    break;
				  case F_WARPRING:
				    if (!CheckWarpRingArg (Action)) {
					twmrc_error_prefix();
					fprintf (stderr,
			"ignoring invalid f.warptoring argument \"%s\"\n",
						 Action);
					(yyval.num) = F_NOP;
				    }
				  case F_WARPTOSCREEN:
				    if (!CheckWarpScreenArg (Action)) {
					twmrc_error_prefix();
					fprintf (stderr, 
			"ignoring invalid f.warptoscreen argument \"%s\"\n", 
					         Action);
					(yyval.num) = F_NOP;
				    }
				    break;
				  case F_COLORMAP:
				    if (CheckColormapArg (Action)) {
					(yyval.num) = F_COLORMAP;
				    } else {
					twmrc_error_prefix();
					fprintf (stderr,
			"ignoring invalid f.colormap argument \"%s\"\n", 
						 Action);
					(yyval.num) = F_NOP;
				    }
				    break;
				} /* end switch */
				   }
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 642 "gram.y"
    { (yyval.num) = (yyvsp[(1) - (1)].num); }
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 643 "gram.y"
    { (yyval.num) = (yyvsp[(2) - (2)].num); }
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 644 "gram.y"
    { (yyval.num) = -((yyvsp[(2) - (2)].num)); }
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 647 "gram.y"
    { (yyval.num) = (yyvsp[(2) - (2)].num);
					  if ((yyvsp[(2) - (2)].num) == 0)
						yyerror("bad button 0");

					  if ((yyvsp[(2) - (2)].num) > MAX_BUTTONS)
					  {
						(yyval.num) = 0;
						yyerror("button number too large");
					  }
					}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 659 "gram.y"
    { ptr = (char *)malloc(strlen((yyvsp[(1) - (1)].ptr))+1);
					  strcpy(ptr, (yyvsp[(1) - (1)].ptr));
					  RemoveDQuote(ptr);
					  (yyval.ptr) = ptr;
					}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 665 "gram.y"
    { (yyval.num) = (yyvsp[(1) - (1)].num); }
    break;



/* Line 1455 of yacc.c  */
#line 2943 "gram.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 668 "gram.y"

void
yyerror(char *s)
{
    twmrc_error_prefix();
    fprintf (stderr, "error in input file:  %s\n", s ? s : "");
    ParseError = 1;
}

void
RemoveDQuote(char *str)
{
    register char *i, *o;
    register int n;
    register int count;

    for (i=str+1, o=str; *i && *i != '\"'; o++)
    {
	if (*i == '\\')
	{
	    switch (*++i)
	    {
	    case 'n':
		*o = '\n';
		i++;
		break;
	    case 'b':
		*o = '\b';
		i++;
		break;
	    case 'r':
		*o = '\r';
		i++;
		break;
	    case 't':
		*o = '\t';
		i++;
		break;
	    case 'f':
		*o = '\f';
		i++;
		break;
	    case '0':
		if (*++i == 'x')
		    goto hex;
		else
		    --i;
	    case '1': case '2': case '3':
	    case '4': case '5': case '6': case '7':
		n = 0;
		count = 0;
		while (*i >= '0' && *i <= '7' && count < 3)
		{
		    n = (n<<3) + (*i++ - '0');
		    count++;
		}
		*o = n;
		break;
	    hex:
	    case 'x':
		n = 0;
		count = 0;
		while (i++, count++ < 2)
		{
		    if (*i >= '0' && *i <= '9')
			n = (n<<4) + (*i - '0');
		    else if (*i >= 'a' && *i <= 'f')
			n = (n<<4) + (*i - 'a') + 10;
		    else if (*i >= 'A' && *i <= 'F')
			n = (n<<4) + (*i - 'A') + 10;
		    else
			break;
		}
		*o = n;
		break;
	    case '\n':
		i++;	/* punt */
		o--;	/* to account for o++ at end of loop */
		break;
	    case '\"':
	    case '\'':
	    case '\\':
	    default:
		*o = *i++;
		break;
	    }
	}
	else
	    *o = *i++;
    }
    *o = '\0';
}

static MenuRoot *GetRoot(char *name, char* fore, char *back)
{
    MenuRoot *tmp;

    tmp = FindMenuRoot(name);
    if (tmp == NULL)
	tmp = NewMenuRoot(name);

    if (fore)
    {
	int save;

	save = Scr->FirstTime;
	Scr->FirstTime = TRUE;
	GetColor(COLOR, &tmp->hi_fore, fore);
	GetColor(COLOR, &tmp->hi_back, back);
	Scr->FirstTime = save;
    }

    return tmp;
}

static void GotButton(int butt, int func)
{
    int i;

    for (i = 0; i < NUM_CONTEXTS; i++)
    {
	if ((cont & (1 << i)) == 0)
	    continue;

	Scr->Mouse[butt][i][mods].func = func;
	if (func == F_MENU)
	{
	    pull->prev = NULL;
	    Scr->Mouse[butt][i][mods].menu = pull;
	}
	else
	{
	    root = GetRoot(TWM_ROOT, NULLSTR, NULLSTR);
	    Scr->Mouse[butt][i][mods].item = AddToMenu(root,"x",Action,
		    NULL, func, NULLSTR, NULLSTR);
	}
    }
    Action = "";
    pull = NULL;
    cont = 0;
    mods_used |= mods;
    mods = 0;
}

static void GotKey(char *key, int func)
{
    int i;

    for (i = 0; i < NUM_CONTEXTS; i++)
    {
	if ((cont & (1 << i)) == 0) 
	  continue;
	if (!AddFuncKey(key, i, mods, func, Name, Action)) 
	  break;
    }

    Action = "";
    pull = NULL;
    cont = 0;
    mods_used |= mods;
    mods = 0;
}


static void GotTitleButton (char *bitmapname, int func, Bool rightside)
{
    if (!CreateTitleButton (bitmapname, func, Action, pull, rightside, True)) {
	twmrc_error_prefix();
	fprintf (stderr, 
		 "unable to create %s titlebutton \"%s\"\n",
		 rightside ? "right" : "left", bitmapname);
    }
    Action = "";
    pull = NULL;
}

static Bool CheckWarpScreenArg (char *s)
{
    XmuCopyISOLatin1Lowered (s, s);

    if (strcmp (s,  WARPSCREEN_NEXT) == 0 ||
	strcmp (s,  WARPSCREEN_PREV) == 0 ||
	strcmp (s,  WARPSCREEN_BACK) == 0)
      return True;

    for (; *s && isascii(*s) && isdigit(*s); s++) ; /* SUPPRESS 530 */
    return (*s ? False : True);
}


static Bool CheckWarpRingArg (char *s)
{
    XmuCopyISOLatin1Lowered (s, s);

    if (strcmp (s,  WARPSCREEN_NEXT) == 0 ||
	strcmp (s,  WARPSCREEN_PREV) == 0)
      return True;

    return False;
}


static Bool CheckColormapArg (char *s)
{
    XmuCopyISOLatin1Lowered (s, s);

    if (strcmp (s, COLORMAP_NEXT) == 0 ||
	strcmp (s, COLORMAP_PREV) == 0 ||
	strcmp (s, COLORMAP_DEFAULT) == 0)
      return True;

    return False;
}


void
twmrc_error_prefix ()
{
    fprintf (stderr, "%s:  line %d:  ", ProgramName, yylineno);
}
static void
SetCustomFunction(int func){
	ScreenInfo *tmpsrc = Scr;
	tmpsrc->EventHooks.InitWindow= func;
}

