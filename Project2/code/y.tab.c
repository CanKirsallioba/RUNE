/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "rune.y"

    #include <stdio.h>
    #include <stdlib.h>
    int yylex(void);
    extern int yylineno;
    void yyerror(char* s);

#line 78 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
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
    INT_TYPE = 258,
    FLOAT_TYPE = 259,
    CHAR_TYPE = 260,
    BOOLEAN_TYPE = 261,
    VOID_TYPE = 262,
    RETURN = 263,
    INT = 264,
    SIGNED_INT = 265,
    FLOAT = 266,
    SIGNED_FLOAT = 267,
    CHAR = 268,
    BOOLEAN = 269,
    IF = 270,
    ELSE = 271,
    WHILE = 272,
    FOR = 273,
    SCAN = 274,
    PRINT = 275,
    READ_INCLINATION = 276,
    READ_ALTITUDE = 277,
    READ_TEMPERATURE = 278,
    READ_ACCELERATION = 279,
    SET_CAMERA_STATE = 280,
    TAKE_PICTURE = 281,
    READ_TIMESTAMP = 282,
    CONNECT_TO_COMPUTER = 283,
    IDENTIFIER = 284,
    COMMENT = 285,
    ASSIGNMENT_OPERATOR = 286,
    LP = 287,
    RP = 288,
    LCB = 289,
    RCB = 290,
    GREATER_THAN = 291,
    SMALLER_THAN = 292,
    GREATER_OR_EQUAL = 293,
    SMALLER_OR_EQUAL = 294,
    PLUS = 295,
    MINUS = 296,
    MULTIPLICATION = 297,
    DIVISION = 298,
    REMAINDER = 299,
    EXPONENTIATION = 300,
    AND = 301,
    OR = 302,
    EQUAL = 303,
    NOT_EQUAL = 304,
    SEMICOLON = 305,
    COMMA = 306,
    QUOTATION_MARK = 307,
    EXCLAMATION_MARK = 308,
    DOT = 309,
    APOSTROPHE = 310,
    EMPTY = 311
  };
#endif
/* Tokens.  */
#define INT_TYPE 258
#define FLOAT_TYPE 259
#define CHAR_TYPE 260
#define BOOLEAN_TYPE 261
#define VOID_TYPE 262
#define RETURN 263
#define INT 264
#define SIGNED_INT 265
#define FLOAT 266
#define SIGNED_FLOAT 267
#define CHAR 268
#define BOOLEAN 269
#define IF 270
#define ELSE 271
#define WHILE 272
#define FOR 273
#define SCAN 274
#define PRINT 275
#define READ_INCLINATION 276
#define READ_ALTITUDE 277
#define READ_TEMPERATURE 278
#define READ_ACCELERATION 279
#define SET_CAMERA_STATE 280
#define TAKE_PICTURE 281
#define READ_TIMESTAMP 282
#define CONNECT_TO_COMPUTER 283
#define IDENTIFIER 284
#define COMMENT 285
#define ASSIGNMENT_OPERATOR 286
#define LP 287
#define RP 288
#define LCB 289
#define RCB 290
#define GREATER_THAN 291
#define SMALLER_THAN 292
#define GREATER_OR_EQUAL 293
#define SMALLER_OR_EQUAL 294
#define PLUS 295
#define MINUS 296
#define MULTIPLICATION 297
#define DIVISION 298
#define REMAINDER 299
#define EXPONENTIATION 300
#define AND 301
#define OR 302
#define EQUAL 303
#define NOT_EQUAL 304
#define SEMICOLON 305
#define COMMA 306
#define QUOTATION_MARK 307
#define EXCLAMATION_MARK 308
#define DOT 309
#define APOSTROPHE 310
#define EMPTY 311

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);





#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  84
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   631

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  48
/* YYNRULES -- Number of rules.  */
#define YYNRULES  128
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  245

#define YYUNDEFTOK  2
#define YYMAXUTOK   311


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      55,    56
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    18,    18,    20,    21,    22,    24,    25,    26,    27,
      28,    29,    31,    32,    33,    34,    36,    37,    40,    42,
      44,    46,    47,    49,    51,    52,    53,    55,    56,    57,
      58,    60,    61,    63,    64,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    77,    78,    79,    80,    81,    83,
      84,    85,    86,    88,    89,    91,    93,    94,    95,    96,
      97,    98,    99,   100,   102,   103,   106,   108,   109,   110,
     111,   112,   113,   115,   116,   117,   118,   120,   121,   123,
     124,   125,   126,   128,   129,   131,   132,   134,   135,   137,
     138,   140,   142,   144,   145,   146,   148,   149,   150,   151,
     153,   154,   155,   157,   158,   159,   160,   161,   162,   163,
     164,   166,   167,   169,   170,   171,   172,   173,   174,   175,
     176,   178,   179,   180,   181,   182,   183,   184,   185
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT_TYPE", "FLOAT_TYPE", "CHAR_TYPE",
  "BOOLEAN_TYPE", "VOID_TYPE", "RETURN", "INT", "SIGNED_INT", "FLOAT",
  "SIGNED_FLOAT", "CHAR", "BOOLEAN", "IF", "ELSE", "WHILE", "FOR", "SCAN",
  "PRINT", "READ_INCLINATION", "READ_ALTITUDE", "READ_TEMPERATURE",
  "READ_ACCELERATION", "SET_CAMERA_STATE", "TAKE_PICTURE",
  "READ_TIMESTAMP", "CONNECT_TO_COMPUTER", "IDENTIFIER", "COMMENT",
  "ASSIGNMENT_OPERATOR", "LP", "RP", "LCB", "RCB", "GREATER_THAN",
  "SMALLER_THAN", "GREATER_OR_EQUAL", "SMALLER_OR_EQUAL", "PLUS", "MINUS",
  "MULTIPLICATION", "DIVISION", "REMAINDER", "EXPONENTIATION", "AND", "OR",
  "EQUAL", "NOT_EQUAL", "SEMICOLON", "COMMA", "QUOTATION_MARK",
  "EXCLAMATION_MARK", "DOT", "APOSTROPHE", "EMPTY", "$accept", "start",
  "statement_list", "statement", "data_type", "loop", "while_loop",
  "for_loop", "for_loop_expression", "if", "else", "expression",
  "expression2", "expression3", "expression4", "expr", "function_call",
  "logical_expression", "logical_expression2", "basic_equality",
  "equality_element", "equality_operator", "comparison",
  "comparison_element", "comparison_operator", "assignment",
  "function_definition", "void_with_return", "void_without_return",
  "non_void_func_def", "only_return_func_def", "void_return_statement",
  "return_statement", "function_definition_argument_list",
  "function_definition_argument", "function_call_argument_list",
  "function_call_argument", "input_statement", "output_statement",
  "primitive_function_call", "read_inclination_function",
  "read_altitude_function", "read_temperature_function",
  "read_acceleration_function", "set_camera_state_function",
  "take_picture_function", "read_timestamp_function",
  "connect_to_computer_function", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311
};
# endif

#define YYPACT_NINF (-176)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-73)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     145,  -176,  -176,  -176,  -176,   -14,    92,   560,   564,   568,
     -42,     0,   -15,     6,    12,    75,    84,    95,   100,   105,
     115,   121,   129,   146,   206,   -12,  -176,   500,  -176,    94,
     476,  -176,    96,  -176,  -176,  -176,  -176,   -27,    57,  -176,
      59,  -176,   582,    88,   204,  -176,    72,  -176,   187,   141,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,   247,   524,   524,     5,
     249,   500,   264,   279,   282,   289,   267,   297,   312,   315,
     500,   183,    74,    93,  -176,  -176,   -10,   500,   500,  -176,
     500,   500,   500,   500,   300,   333,  -176,  -176,   545,  -176,
    -176,  -176,  -176,   566,  -176,    82,   134,   137,   140,   151,
    -176,   166,   -20,   196,    62,    70,   324,   334,   345,   330,
     331,   103,  -176,  -176,  -176,  -176,   355,  -176,  -176,  -176,
      10,  -176,  -176,  -176,  -176,  -176,  -176,   364,  -176,  -176,
    -176,   378,   362,  -176,   500,    86,    57,    57,  -176,  -176,
    -176,  -176,  -176,   204,  -176,  -176,  -176,  -176,  -176,  -176,
     364,  -176,  -176,  -176,  -176,  -176,  -176,   364,  -176,  -176,
     385,   392,   400,   415,   412,  -176,   414,   411,   443,   450,
     461,   473,   501,  -176,   466,  -176,  -176,   208,    10,   483,
     485,  -176,  -176,  -176,  -176,   145,   496,    27,   145,   145,
     145,   481,  -176,  -176,    52,   505,   248,   145,  -176,   314,
     347,   380,     5,   500,   446,   506,    52,   490,  -176,   507,
     281,   544,  -176,  -176,  -176,     2,   526,  -176,   446,   527,
    -176,  -176,  -176,   528,   546,  -176,  -176,  -176,   547,  -176,
    -176,   145,  -176,   413,  -176
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    12,    13,    14,    15,     0,    35,    36,    37,    38,
      40,    39,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    43,     6,     0,     5,     0,
       2,     3,     0,     8,    16,    17,     9,     0,    26,    30,
      32,    34,    41,    42,    52,    50,     0,    49,     0,     0,
      10,    79,    80,    81,    82,    47,    48,    46,   113,   114,
     115,   116,   117,   118,   119,   120,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    43,     0,     1,     4,     0,     0,     0,     7,
       0,     0,     0,     0,     0,     0,    64,    65,     0,    73,
      74,    75,    76,     0,    11,     0,    67,    68,    69,    70,
      61,    54,    71,    72,     0,     0,     0,     0,     0,     0,
       0,     0,   121,   122,   123,   124,     0,   126,   127,   128,
      77,   103,   104,   105,   106,   107,   108,   109,    45,   102,
     110,     0,   101,    33,     0,     0,    24,    25,    27,    28,
      29,    31,    54,    51,    53,    56,    57,    58,    59,    60,
      62,    63,    55,    67,    68,    69,    70,    71,    72,    66,
       0,     0,     0,     0,     0,    95,     0,    94,     0,     0,
       0,     0,     0,   111,     0,   125,    44,     0,    78,     0,
       0,    96,    97,    98,    99,     0,     0,     0,     0,     0,
       0,     0,   112,   100,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    86,     0,
       0,    22,    18,    19,    20,     0,     0,    90,     0,     0,
      91,    84,    85,     0,     0,    21,    92,    88,     0,    89,
      83,     0,    87,     0,    23
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -176,  -176,  -102,   -30,   -67,  -176,  -176,  -176,  -176,  -176,
    -176,   -26,   159,   150,  -176,  -176,   -63,   181,   487,  -176,
     486,  -176,  -176,   480,  -176,   -66,  -176,  -176,  -176,  -176,
    -176,   359,  -175,  -129,  -176,   423,  -176,  -176,  -176,  -176,
    -176,  -176,  -176,  -176,  -176,  -176,  -176,  -176
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    29,    30,    31,    32,    33,    34,    35,   118,    36,
     235,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    98,    47,    48,   103,    49,    50,    51,    52,    53,
      54,   219,   215,   176,   177,   141,   142,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      85,    83,   117,   119,   113,   113,   -61,   -61,     1,     2,
       3,     4,    81,    87,    88,    66,   190,    67,   140,    80,
      81,   144,   145,    89,   -71,   -71,   -71,   -71,   -62,   -62,
     170,   171,   172,   173,   116,   161,   -62,   -62,    68,   226,
     168,   229,    87,    88,    69,   121,   -54,   -54,   -60,   -60,
      87,    88,   236,   238,   130,     1,     2,     3,     4,     5,
     213,     6,     7,     8,     9,    10,    11,    12,   208,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,   175,    27,   170,   171,   172,   173,   170,
     171,   172,   173,   206,    84,   178,   209,   210,   211,    90,
      91,    92,   214,   179,    93,   220,    81,    70,    28,    94,
     -71,   -71,   -71,   -71,   228,   174,    71,    94,   188,   189,
      96,    97,   -62,   -62,   140,    86,   143,    72,   -67,   -67,
     -67,   -67,    73,    87,    88,    94,   184,    74,   175,   243,
     -56,   -56,   175,    87,    88,   117,   224,    75,     1,     2,
       3,     4,     5,    76,     6,     7,     8,     9,    10,    11,
      12,    77,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    85,    27,    78,    85,
      85,    85,   -56,   -56,    85,   -57,   -57,   225,   -58,   -58,
      85,   104,   131,   132,   133,   134,   135,   136,    85,   -59,
     -59,    28,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   137,    85,   -60,   -60,   138,   131,   132,   133,
     134,   135,   136,    99,   100,   101,   102,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,   137,    79,   139,
     148,   149,   150,   151,   -63,   -63,   146,   147,   114,   115,
      95,     1,     2,     3,     4,     5,   217,     6,     7,     8,
       9,    10,    11,    12,   139,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,   105,
      27,   126,   120,   218,     1,     2,     3,     4,     5,   217,
       6,     7,     8,     9,    10,    11,    12,   122,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,   123,    27,   152,   124,   232,     1,     2,     3,
       4,     5,   125,     6,     7,     8,     9,    10,    11,    12,
     127,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,   128,    27,   154,   129,   221,
       1,     2,     3,     4,     5,    80,     6,     7,     8,     9,
      10,    11,    12,   180,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,   181,    27,
     182,   183,   222,     1,     2,     3,     4,     5,   185,     6,
       7,     8,     9,    10,    11,    12,    81,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,   186,    27,   187,   191,   223,     1,     2,     3,     4,
       5,   192,     6,     7,     8,     9,    10,    11,    12,   193,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   194,    27,   195,   196,   244,     1,
       2,     3,     4,     5,   213,     6,     7,     8,     9,    10,
      11,    12,   197,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,   198,    27,     1,
       2,     3,     4,     5,   199,     6,     7,     8,     9,    10,
      11,    12,   144,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,   200,    27,     6,
       7,     8,     9,    10,    11,   201,   202,   204,   205,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    82,
     207,   212,    27,   106,   107,   108,   109,   110,   111,   216,
     230,   227,   231,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,   112,   155,   156,   157,   158,   110,   159,
     234,   237,   239,   240,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,   160,   163,   164,   165,   166,   233,
     241,   153,   242,   169,   162,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   167,   -68,   -68,   -68,   -68,
     -69,   -69,   -69,   -69,   -70,   -70,   -70,   -70,   -57,   -57,
     203,     0,   -58,   -58,     0,     0,   -59,   -59,   -72,   -72,
     -72,   -72,     0,     0,     0,     0,     0,     0,     0,     0,
     -63,   -63
};

static const yytype_int16 yycheck[] =
{
      30,    27,    69,    69,    67,    68,    48,    49,     3,     4,
       5,     6,    32,    40,    41,    29,   145,    32,    81,    31,
      32,    31,    32,    50,    36,    37,    38,    39,    48,    49,
       3,     4,     5,     6,    29,    98,    48,    49,    32,   214,
     103,   216,    40,    41,    32,    71,    46,    47,    48,    49,
      40,    41,    50,   228,    80,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,   197,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    56,    32,     3,     4,     5,     6,     3,
       4,     5,     6,   195,     0,    33,   198,   199,   200,    42,
      43,    44,   204,    33,    45,   207,    32,    32,    56,    47,
      36,    37,    38,    39,   216,    33,    32,    47,   144,    33,
      48,    49,    48,    49,   187,    29,    33,    32,    36,    37,
      38,    39,    32,    40,    41,    47,    33,    32,    56,   241,
      48,    49,    56,    40,    41,   212,   212,    32,     3,     4,
       5,     6,     7,    32,     9,    10,    11,    12,    13,    14,
      15,    32,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,   206,    32,    32,   209,
     210,   211,    48,    49,   214,    48,    49,   213,    48,    49,
     220,    50,     9,    10,    11,    12,    13,    14,   228,    48,
      49,    56,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,   243,    48,    49,    33,     9,    10,    11,
      12,    13,    14,    36,    37,    38,    39,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    32,    56,
      90,    91,    92,    93,    48,    49,    87,    88,    67,    68,
      46,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    56,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    32,
      32,    14,    33,    35,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    33,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    33,    32,    14,    33,    35,     3,     4,     5,
       6,     7,    33,     9,    10,    11,    12,    13,    14,    15,
      33,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    33,    32,    14,    33,    35,
       3,     4,     5,     6,     7,    31,     9,    10,    11,    12,
      13,    14,    15,    29,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    33,    32,
      50,    50,    35,     3,     4,     5,     6,     7,    33,     9,
      10,    11,    12,    13,    14,    15,    32,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    33,    32,    51,    29,    35,     3,     4,     5,     6,
       7,    29,     9,    10,    11,    12,    13,    14,    15,    29,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    29,    32,    34,    33,    35,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    51,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    34,    32,     3,
       4,     5,     6,     7,    34,     9,    10,    11,    12,    13,
      14,    15,    31,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    34,    32,     9,
      10,    11,    12,    13,    14,    14,    50,    34,    33,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      34,    50,    32,     9,    10,    11,    12,    13,    14,    34,
      50,    35,    35,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,     9,    10,    11,    12,    13,    14,
      16,    35,    35,    35,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     9,    10,    11,    12,   220,
      34,    94,    35,   103,    98,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    36,    37,    38,    39,
      36,    37,    38,    39,    36,    37,    38,    39,    48,    49,
     187,    -1,    48,    49,    -1,    -1,    48,    49,    36,    37,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     9,    10,    11,    12,
      13,    14,    15,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    32,    56,    58,
      59,    60,    61,    62,    63,    64,    66,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    79,    80,    82,
      83,    84,    85,    86,    87,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,    29,    32,    32,    32,
      32,    32,    32,    32,    32,    32,    32,    32,    32,    32,
      31,    32,    29,    68,     0,    60,    29,    40,    41,    50,
      42,    43,    44,    45,    47,    46,    48,    49,    78,    36,
      37,    38,    39,    81,    50,    32,     9,    10,    11,    12,
      13,    14,    29,    73,    74,    74,    29,    61,    65,    82,
      33,    68,    33,    33,    33,    33,    14,    33,    33,    33,
      68,     9,    10,    11,    12,    13,    14,    29,    33,    56,
      73,    92,    93,    33,    31,    32,    69,    69,    70,    70,
      70,    70,    14,    75,    14,     9,    10,    11,    12,    14,
      29,    73,    77,     9,    10,    11,    12,    29,    73,    80,
       3,     4,     5,     6,    33,    56,    90,    91,    33,    33,
      29,    33,    50,    50,    33,    33,    33,    51,    68,    33,
      90,    29,    29,    29,    29,    34,    33,    51,    34,    34,
      34,    14,    50,    92,    34,    33,    59,    34,    90,    59,
      59,    59,    50,     8,    59,    89,    34,     8,    35,    88,
      59,    35,    35,    35,    82,    68,    89,    35,    59,    89,
      50,    35,    35,    88,    16,    67,    50,    35,    89,    35,
      35,    34,    35,    59,    35
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    57,    58,    59,    59,    59,    60,    60,    60,    60,
      60,    60,    61,    61,    61,    61,    62,    62,    63,    64,
      65,    66,    66,    67,    68,    68,    68,    69,    69,    69,
      69,    70,    70,    71,    71,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    73,    73,    73,    73,    73,    74,
      74,    74,    74,    75,    75,    76,    77,    77,    77,    77,
      77,    77,    77,    77,    78,    78,    79,    80,    80,    80,
      80,    80,    80,    81,    81,    81,    81,    82,    82,    83,
      83,    83,    83,    84,    84,    85,    85,    86,    86,    87,
      87,    88,    89,    90,    90,    90,    91,    91,    91,    91,
      92,    92,    92,    93,    93,    93,    93,    93,    93,    93,
      93,    94,    95,    96,    96,    96,    96,    96,    96,    96,
      96,    97,    98,    99,   100,   101,   102,   103,   104
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     2,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     7,     7,
       5,     8,     7,     4,     3,     3,     1,     3,     3,     3,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     3,     1,     1,     1,     1,
       1,     3,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     4,     1,
       1,     1,     1,     9,     8,     8,     7,     9,     8,     8,
       7,     2,     3,     3,     1,     1,     2,     2,     2,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     5,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     4,     3,     3,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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

#line 1672 "y.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 188 "rune.y"

#include "lex.yy.c"

void yyerror(char* s) {
    fprintf(stdout, "Syntax error on line %d: %s !\n", yylineno,s);
}


int main() {
    yyparse();
    if (yynerrs == 0) {
	    printf("Input program is valid\n");
	}
    return 0;
}


