/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 21 "parser.y"


#include <stdio.h>
#include <stdlib.h>

#define NOPE
#include "as31.h"
#undef NOPE

#define YYSTYPE union ystack

static unsigned char bytebuf[1024];		/* used by dumplist() */
static int bytecount;


void yyerror(const char *s);
int makeop(struct opcode * op, struct mode *m, int add);
void inclc(int i);
char *padline(char *line);
void dumplist(char *txt, int show);
void genbyte(int b);
void genstr(const char *s);
void genword(unsigned long w);

/* ------------------------ G R A M M E R ----------------------------- */


#line 99 "parser.c"

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

#include "parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_STRING = 3,                     /* STRING  */
  YYSYMBOL_D_ORG = 4,                      /* D_ORG  */
  YYSYMBOL_D_BYTE = 5,                     /* D_BYTE  */
  YYSYMBOL_D_WORD = 6,                     /* D_WORD  */
  YYSYMBOL_D_SKIP = 7,                     /* D_SKIP  */
  YYSYMBOL_D_EQU = 8,                      /* D_EQU  */
  YYSYMBOL_D_FLAG = 9,                     /* D_FLAG  */
  YYSYMBOL_D_END = 10,                     /* D_END  */
  YYSYMBOL_ACALL = 11,                     /* ACALL  */
  YYSYMBOL_ADD = 12,                       /* ADD  */
  YYSYMBOL_ADDC = 13,                      /* ADDC  */
  YYSYMBOL_AJMP = 14,                      /* AJMP  */
  YYSYMBOL_ANL = 15,                       /* ANL  */
  YYSYMBOL_CJNE = 16,                      /* CJNE  */
  YYSYMBOL_CLR = 17,                       /* CLR  */
  YYSYMBOL_CPL = 18,                       /* CPL  */
  YYSYMBOL_DA = 19,                        /* DA  */
  YYSYMBOL_DEC = 20,                       /* DEC  */
  YYSYMBOL_DIV = 21,                       /* DIV  */
  YYSYMBOL_DJNZ = 22,                      /* DJNZ  */
  YYSYMBOL_INC = 23,                       /* INC  */
  YYSYMBOL_JB = 24,                        /* JB  */
  YYSYMBOL_JBC = 25,                       /* JBC  */
  YYSYMBOL_JC = 26,                        /* JC  */
  YYSYMBOL_JMP = 27,                       /* JMP  */
  YYSYMBOL_JNB = 28,                       /* JNB  */
  YYSYMBOL_JNC = 29,                       /* JNC  */
  YYSYMBOL_JNZ = 30,                       /* JNZ  */
  YYSYMBOL_JZ = 31,                        /* JZ  */
  YYSYMBOL_LCALL = 32,                     /* LCALL  */
  YYSYMBOL_LJMP = 33,                      /* LJMP  */
  YYSYMBOL_MOV = 34,                       /* MOV  */
  YYSYMBOL_MOVC = 35,                      /* MOVC  */
  YYSYMBOL_MOVX = 36,                      /* MOVX  */
  YYSYMBOL_NOP = 37,                       /* NOP  */
  YYSYMBOL_MUL = 38,                       /* MUL  */
  YYSYMBOL_ORL = 39,                       /* ORL  */
  YYSYMBOL_POP = 40,                       /* POP  */
  YYSYMBOL_PUSH = 41,                      /* PUSH  */
  YYSYMBOL_RET = 42,                       /* RET  */
  YYSYMBOL_RETI = 43,                      /* RETI  */
  YYSYMBOL_RL = 44,                        /* RL  */
  YYSYMBOL_RLC = 45,                       /* RLC  */
  YYSYMBOL_RR = 46,                        /* RR  */
  YYSYMBOL_RRC = 47,                       /* RRC  */
  YYSYMBOL_SETB = 48,                      /* SETB  */
  YYSYMBOL_SJMP = 49,                      /* SJMP  */
  YYSYMBOL_SUBB = 50,                      /* SUBB  */
  YYSYMBOL_SWAP = 51,                      /* SWAP  */
  YYSYMBOL_XCH = 52,                       /* XCH  */
  YYSYMBOL_XCHD = 53,                      /* XCHD  */
  YYSYMBOL_XRL = 54,                       /* XRL  */
  YYSYMBOL_AB = 55,                        /* AB  */
  YYSYMBOL_A = 56,                         /* A  */
  YYSYMBOL_C = 57,                         /* C  */
  YYSYMBOL_PC = 58,                        /* PC  */
  YYSYMBOL_DPTR = 59,                      /* DPTR  */
  YYSYMBOL_BITPOS = 60,                    /* BITPOS  */
  YYSYMBOL_R0 = 61,                        /* R0  */
  YYSYMBOL_R1 = 62,                        /* R1  */
  YYSYMBOL_R2 = 63,                        /* R2  */
  YYSYMBOL_R3 = 64,                        /* R3  */
  YYSYMBOL_R4 = 65,                        /* R4  */
  YYSYMBOL_R5 = 66,                        /* R5  */
  YYSYMBOL_R6 = 67,                        /* R6  */
  YYSYMBOL_R7 = 68,                        /* R7  */
  YYSYMBOL_VALUE = 69,                     /* VALUE  */
  YYSYMBOL_SYMBOL = 70,                    /* SYMBOL  */
  YYSYMBOL_71_ = 71,                       /* '+'  */
  YYSYMBOL_72_ = 72,                       /* '-'  */
  YYSYMBOL_73_ = 73,                       /* '*'  */
  YYSYMBOL_74_ = 74,                       /* '/'  */
  YYSYMBOL_75_ = 75,                       /* '%'  */
  YYSYMBOL_76_ = 76,                       /* '|'  */
  YYSYMBOL_77_ = 77,                       /* '&'  */
  YYSYMBOL_78_ = 78,                       /* '>'  */
  YYSYMBOL_79_ = 79,                       /* '<'  */
  YYSYMBOL_80_ = 80,                       /* ':'  */
  YYSYMBOL_81_n_ = 81,                     /* '\n'  */
  YYSYMBOL_82_ = 82,                       /* '.'  */
  YYSYMBOL_83_ = 83,                       /* ','  */
  YYSYMBOL_84_ = 84,                       /* '('  */
  YYSYMBOL_85_ = 85,                       /* ')'  */
  YYSYMBOL_86_ = 86,                       /* '@'  */
  YYSYMBOL_87_ = 87,                       /* '#'  */
  YYSYMBOL_88_ = 88,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 89,                  /* $accept  */
  YYSYMBOL_program = 90,                   /* program  */
  YYSYMBOL_linelist = 91,                  /* linelist  */
  YYSYMBOL_line = 92,                      /* line  */
  YYSYMBOL_linerest = 93,                  /* linerest  */
  YYSYMBOL_94_1 = 94,                      /* $@1  */
  YYSYMBOL_directive = 95,                 /* directive  */
  YYSYMBOL_defexpr = 96,                   /* defexpr  */
  YYSYMBOL_flag = 97,                      /* flag  */
  YYSYMBOL_flagv = 98,                     /* flagv  */
  YYSYMBOL_undefsym = 99,                  /* undefsym  */
  YYSYMBOL_blist = 100,                    /* blist  */
  YYSYMBOL_wlist = 101,                    /* wlist  */
  YYSYMBOL_expr = 102,                     /* expr  */
  YYSYMBOL_instr = 103,                    /* instr  */
  YYSYMBOL_two_op1 = 104,                  /* two_op1  */
  YYSYMBOL_two_op2 = 105,                  /* two_op2  */
  YYSYMBOL_two_op3 = 106,                  /* two_op3  */
  YYSYMBOL_two_op4 = 107,                  /* two_op4  */
  YYSYMBOL_two_op5 = 108,                  /* two_op5  */
  YYSYMBOL_two_op6 = 109,                  /* two_op6  */
  YYSYMBOL_single_op1 = 110,               /* single_op1  */
  YYSYMBOL_single_op2 = 111,               /* single_op2  */
  YYSYMBOL_three_op1 = 112,                /* three_op1  */
  YYSYMBOL_rel = 113,                      /* rel  */
  YYSYMBOL_rel2 = 114,                     /* rel2  */
  YYSYMBOL_bit = 115,                      /* bit  */
  YYSYMBOL_bitv = 116,                     /* bitv  */
  YYSYMBOL_reg = 117,                      /* reg  */
  YYSYMBOL_regi = 118,                     /* regi  */
  YYSYMBOL_data8 = 119,                    /* data8  */
  YYSYMBOL_data16 = 120,                   /* data16  */
  YYSYMBOL_addr11 = 121,                   /* addr11  */
  YYSYMBOL_addr16 = 122,                   /* addr16  */
  YYSYMBOL_relative = 123                  /* relative  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_int16 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  155
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   599

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  165
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  316

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   325


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      81,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    88,     2,    87,     2,    75,    77,     2,
      84,    85,    73,    71,    83,    72,    82,    74,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    80,     2,
      79,     2,    78,     2,    86,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    76,     2,     2,     2,     2,     2,
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
      65,    66,    67,    68,    69,    70
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   126,   126,   131,   132,   135,   145,   148,   153,   159,
     164,   164,   183,   190,   191,   192,   195,   204,   210,   213,
     223,   236,   242,   246,   254,   259,   270,   275,   287,   292,
     306,   309,   312,   315,   318,   321,   324,   327,   330,   333,
     336,   339,   341,   354,   366,   368,   370,   372,   374,   376,
     378,   380,   382,   384,   386,   388,   390,   392,   394,   399,
     401,   403,   405,   407,   409,   411,   413,   415,   417,   419,
     421,   423,   425,   427,   429,   433,   435,   437,   441,   450,
     459,   461,   463,   465,   467,   469,   471,   473,   475,   477,
     479,   481,   483,   485,   487,   491,   493,   495,   497,   500,
     502,   504,   506,   518,   524,   531,   537,   546,   553,   563,
     570,   577,   586,   596,   603,   613,   619,   626,   633,   640,
     648,   655,   661,   668,   675,   683,   699,   706,   725,   732,
     738,   745,   753,   759,   765,   774,   782,   790,   798,   808,
     825,   838,   851,   861,   867,   870,   871,   872,   873,   874,
     875,   876,   877,   880,   881,   882,   885,   888,   891,   894,
     897,   902,   912,   922,   937,   951
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "STRING", "D_ORG",
  "D_BYTE", "D_WORD", "D_SKIP", "D_EQU", "D_FLAG", "D_END", "ACALL", "ADD",
  "ADDC", "AJMP", "ANL", "CJNE", "CLR", "CPL", "DA", "DEC", "DIV", "DJNZ",
  "INC", "JB", "JBC", "JC", "JMP", "JNB", "JNC", "JNZ", "JZ", "LCALL",
  "LJMP", "MOV", "MOVC", "MOVX", "NOP", "MUL", "ORL", "POP", "PUSH", "RET",
  "RETI", "RL", "RLC", "RR", "RRC", "SETB", "SJMP", "SUBB", "SWAP", "XCH",
  "XCHD", "XRL", "AB", "A", "C", "PC", "DPTR", "BITPOS", "R0", "R1", "R2",
  "R3", "R4", "R5", "R6", "R7", "VALUE", "SYMBOL", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'|'", "'&'", "'>'", "'<'", "':'", "'\\n'", "'.'", "','",
  "'('", "')'", "'@'", "'#'", "'!'", "$accept", "program", "linelist",
  "line", "linerest", "$@1", "directive", "defexpr", "flag", "flagv",
  "undefsym", "blist", "wlist", "expr", "instr", "two_op1", "two_op2",
  "two_op3", "two_op4", "two_op5", "two_op6", "single_op1", "single_op2",
  "three_op1", "rel", "rel2", "bit", "bitv", "reg", "regi", "data8",
  "data16", "addr11", "addr16", "relative", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-239)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-3)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     370,  -239,   139,   -24,   -24,   139,   120,    70,    15,    15,
     -19,   470,   -12,   292,   441,    23,    23,   139,   -45,    23,
     139,   139,   139,   139,   139,   222,    -9,   -26,  -239,    14,
     120,   139,   139,  -239,  -239,    19,    25,    31,    49,    15,
     139,   -24,    54,   -24,   -24,    85,  -239,  -239,   440,    89,
     298,  -239,  -239,   -27,    37,    38,    41,  -239,  -239,   139,
    -239,   139,   513,  -239,    64,  -239,  -239,  -239,    67,   513,
    -239,  -239,  -239,    68,    77,  -239,  -239,  -239,  -239,  -239,
    -239,  -239,  -239,   454,  -239,    87,  -239,  -239,  -239,  -239,
    -239,  -239,    83,  -239,  -239,  -239,   454,  -239,  -239,  -239,
    -239,  -239,    90,    91,  -239,  -239,  -239,   101,  -239,   513,
    -239,   -30,  -239,  -239,  -239,  -239,   513,  -239,  -239,   102,
     108,   454,  -239,  -239,  -239,   111,   -50,   115,   124,   485,
    -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,
    -239,  -239,  -239,  -239,  -239,  -239,  -239,  -239,   139,     4,
     139,   139,   140,   143,  -239,  -239,  -239,  -239,   442,  -239,
    -239,   104,   354,   139,   139,   139,   139,   139,   139,   139,
      75,   145,   496,   126,   -47,   133,  -239,  -239,  -239,  -239,
    -239,  -239,  -239,  -239,   135,   132,  -239,  -239,   139,   139,
     139,   154,   155,    23,   141,   144,   -17,   147,    34,   146,
     148,   150,   152,  -239,   513,  -239,   156,  -239,   158,   513,
    -239,  -239,   159,   160,  -239,  -239,   520,   520,   104,   104,
     104,    30,    30,   139,   139,   454,   139,  -239,  -239,    23,
      23,  -239,  -239,   139,   139,   162,   151,   139,   513,  -239,
     513,  -239,  -239,   172,   190,  -239,   139,    55,  -239,   139,
    -239,   191,  -239,   454,  -239,  -239,    56,   511,   193,   195,
      10,   139,   139,    60,  -239,  -239,  -239,  -239,  -239,  -239,
    -239,   164,   139,   139,   170,  -239,  -239,  -239,  -239,   139,
    -239,  -239,  -239,  -239,   183,   184,   185,  -239,  -239,  -239,
    -239,  -239,  -239,  -239,   513,  -239,  -239,  -239,   197,   139,
    -239,   175,   139,  -239,    86,   205,   206,  -239,  -239,   139,
    -239,  -239,  -239,  -239,  -239,  -239
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    44,     0,
       0,     0,     0,    67,    68,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    23,     9,     0,     0,
       0,     4,     6,     0,     0,     0,     0,    43,    42,     0,
      30,     0,   163,    45,     0,    47,    48,    46,     0,   161,
      52,    53,    54,     0,     0,   145,   146,   147,   148,   149,
     150,   151,   152,     0,    87,     0,   132,   133,   144,   143,
      75,   134,   142,    76,    62,   128,     0,    61,   129,   130,
      63,    91,     0,     0,    60,    59,    88,     0,    90,   165,
      82,     0,    89,    83,    84,    85,   164,    81,    80,     0,
       0,     0,    92,    93,    94,     0,     0,     0,     0,     0,
      66,    55,    56,    57,    79,    78,    69,    70,    71,    72,
      77,    86,    49,    73,    58,    74,    50,    51,     0,     0,
       0,     0,     0,     0,    18,     1,     3,     7,     0,     8,
      11,    32,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   153,   154,   155,   156,
     157,   158,   159,   160,     0,     0,   141,   131,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    19,    27,    13,    26,    14,   162,
      29,    15,     0,     0,     5,    31,    39,    38,    35,    36,
      37,    33,    34,     0,     0,     0,     0,   103,   104,     0,
       0,   109,   107,     0,     0,     0,     0,     0,   140,   113,
     139,   114,   112,     0,     0,   125,     0,     0,   115,     0,
     116,     0,   126,     0,   118,   119,     0,     0,     0,     0,
       0,     0,     0,     0,    40,    41,   105,   106,   110,   111,
     108,     0,     0,     0,     0,    64,    65,   124,   121,     0,
     122,   117,   127,   120,     0,     0,     0,   100,    99,   102,
     101,    25,    24,    28,    16,    22,    21,    17,     0,     0,
     135,     0,     0,   123,     0,     0,     0,    20,   136,     0,
     137,    97,    95,    98,    96,   138
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -239,  -239,  -239,   214,   107,  -239,  -239,   116,  -239,  -239,
     114,  -239,  -239,    -2,  -239,    21,    33,   238,    26,  -239,
    -239,   255,    22,  -239,  -186,  -239,   -14,  -239,    -1,   -85,
       3,  -238,   266,   248,    28
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    49,    50,    51,    52,    56,    53,   203,   297,   298,
      54,   206,   208,    69,    55,    65,    71,    72,   106,   101,
     124,    97,    90,    84,   241,   239,    91,    92,    98,   184,
      73,   210,    63,   117,   110
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      62,   107,   107,    62,   242,   107,    85,   205,   277,   232,
     197,   187,   102,   291,    99,   109,   103,    99,   109,   109,
     109,   116,   116,   293,   125,    66,   191,    70,   126,   192,
     128,    93,    64,   198,   134,   135,   195,    94,   109,   248,
     233,   111,   108,   100,   202,   112,   122,   127,   113,   114,
     115,   131,    57,    58,   157,    59,    60,   161,   123,   162,
     129,   140,   142,   132,   144,   145,   146,    61,   141,   130,
     249,    86,    87,    57,    58,   136,    59,    60,   147,    57,
      58,   137,    59,    60,    88,    89,   300,   138,    61,   155,
     232,   252,    88,    89,    61,    75,    76,    77,    78,    79,
      80,    81,    82,    57,    58,   139,    59,    60,   170,   171,
     143,   278,   284,   308,   285,   286,   310,   158,    61,   159,
     253,   233,   160,   315,    57,    58,    74,    59,    60,   295,
     296,    75,    76,    77,    78,    79,    80,    81,    82,    61,
     266,    64,   279,   186,   311,   312,   204,   172,   209,   204,
     173,   174,   207,   223,    57,    58,    83,    59,    60,   231,
     175,   216,   217,   218,   219,   220,   221,   222,   283,    61,
     185,   227,   288,   188,   189,   228,    64,    68,   235,   245,
     168,   169,   170,   171,   190,   193,   238,   240,   240,    57,
      58,   194,    59,    60,   196,    88,    89,   254,   199,   250,
     229,   255,    57,    58,    61,    59,    60,   200,    57,    58,
      46,    59,    60,   213,   230,   268,   269,    61,   236,   237,
     234,   264,   265,    61,   224,   243,   244,   247,   246,   267,
     251,   275,   256,   258,   257,   259,   270,   271,   273,   260,
     274,   261,   262,   263,   209,   272,   276,   299,   282,   289,
     280,   290,   281,   302,   304,   305,   306,   307,   309,   209,
     294,   313,   314,   292,   156,   214,   212,   211,   133,   105,
     240,    67,   118,     0,     0,     0,   301,     0,    64,   119,
       0,   120,   303,    75,    76,    77,    78,    79,    80,    81,
      82,    57,    58,     0,    59,    60,     0,   240,    -2,     1,
     240,     0,     0,     0,     0,     0,    61,   240,   121,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    75,    76,    77,    78,    79,    80,    81,
      82,    57,    58,     0,    59,    60,     0,     0,    46,     0,
       0,     1,     0,     0,     0,     0,    61,     0,     0,    47,
      48,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,   163,   164,   165,   166,   167,
     168,   169,   170,   171,     0,     0,     0,     0,     0,   215,
      46,     0,     0,     1,   148,   149,   150,   151,   152,   153,
     154,    47,    48,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    95,     0,     0,
     104,     0,    75,    76,    77,    78,    79,    80,    81,    82,
      57,    58,     0,    59,    60,   176,   177,   178,   179,   180,
     181,   182,   183,    47,    48,    61,    95,    96,     0,     0,
       0,    75,    76,    77,    78,    79,    80,    81,    82,    57,
      58,     0,    59,    60,   201,     0,   176,   177,   178,   179,
     180,   181,   182,   183,    61,     0,    96,    75,    76,    77,
      78,    79,    80,    81,    82,    57,    58,     0,    59,    60,
     287,     0,   176,   177,   178,   179,   180,   181,   182,   183,
      61,     0,   225,   226,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   165,   166,   167,   168,   169,   170,   171
};

static const yytype_int16 yycheck[] =
{
       2,    15,    16,     5,   190,    19,     7,     3,   246,    56,
      60,    96,    13,     3,    11,    17,    13,    14,    20,    21,
      22,    23,    24,   261,    25,     4,    56,     6,    25,    59,
      56,     9,    56,    83,    31,    32,   121,    56,    40,    56,
      87,    86,    16,    55,   129,    19,    25,    56,    20,    21,
      22,    30,    69,    70,    81,    72,    73,    59,    25,    61,
      86,    39,    41,    30,    43,    44,    45,    84,    40,    55,
      87,    56,    57,    69,    70,    56,    72,    73,    45,    69,
      70,    56,    72,    73,    69,    70,   272,    56,    84,     0,
      56,    57,    69,    70,    84,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    56,    72,    73,    78,    79,
      56,    56,    56,   299,    58,    59,   302,    80,    84,    81,
      86,    87,    81,   309,    69,    70,    56,    72,    73,    69,
      70,    61,    62,    63,    64,    65,    66,    67,    68,    84,
     225,    56,    87,    60,    58,    59,   148,    83,   150,   151,
      83,    83,   149,    78,    69,    70,    86,    72,    73,   173,
      83,   163,   164,   165,   166,   167,   168,   169,   253,    84,
      83,   172,   257,    83,    83,   172,    56,    57,   175,   193,
      76,    77,    78,    79,    83,    83,   188,   189,   190,    69,
      70,    83,    72,    73,    83,    69,    70,   198,    83,   196,
      74,   198,    69,    70,    84,    72,    73,    83,    69,    70,
      70,    72,    73,    70,    88,   229,   230,    84,    83,    87,
      87,   223,   224,    84,    79,    71,    71,    83,    87,   226,
      83,    59,    86,    83,    86,    83,   233,   234,    87,    83,
     237,    83,    83,    83,   246,    83,    56,    83,    57,    56,
     247,    56,   249,    83,    71,    71,    71,    60,    83,   261,
     262,    56,    56,   260,    50,   158,   152,   151,    30,    14,
     272,     5,    24,    -1,    -1,    -1,   273,    -1,    56,    57,
      -1,    59,   279,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    -1,    72,    73,    -1,   299,     0,     1,
     302,    -1,    -1,    -1,    -1,    -1,    84,   309,    86,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    -1,    72,    73,    -1,    -1,    70,    -1,
      -1,     1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    81,
      82,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    -1,    -1,    -1,    -1,    -1,    85,
      70,    -1,    -1,     1,     4,     5,     6,     7,     8,     9,
      10,    81,    82,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    56,    -1,    -1,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    -1,    72,    73,    61,    62,    63,    64,    65,
      66,    67,    68,    81,    82,    84,    56,    86,    -1,    -1,
      -1,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    -1,    72,    73,    59,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,    84,    -1,    86,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,    72,    73,
      59,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      84,    -1,    86,    87,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    73,    74,    75,    76,    77,    78,    79
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    70,    81,    82,    90,
      91,    92,    93,    95,    99,   103,    94,    69,    70,    72,
      73,    84,   102,   121,    56,   104,   104,   121,    57,   102,
     104,   105,   106,   119,    56,    61,    62,    63,    64,    65,
      66,    67,    68,    86,   112,   117,    56,    57,    69,    70,
     111,   115,   116,   111,    56,    56,    86,   110,   117,   119,
      55,   108,   117,   119,    59,   110,   107,   115,   107,   102,
     123,    86,   107,   123,   123,   123,   102,   122,   122,    57,
      59,    86,   104,   105,   109,   117,   119,    56,    56,    86,
      55,   104,   105,   106,   119,   119,    56,    56,    56,    56,
     111,   123,   104,    56,   104,   104,   104,   105,     4,     5,
       6,     7,     8,     9,    10,     0,    92,    81,    80,    81,
      81,   102,   102,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    83,    83,    83,    83,    61,    62,    63,    64,
      65,    66,    67,    68,   118,    83,    60,   118,    83,    83,
      83,    56,    59,    83,    83,   118,    83,    60,    83,    83,
      83,    59,   118,    96,   102,     3,   100,   119,   101,   102,
     120,    96,    99,    70,    93,    85,   102,   102,   102,   102,
     102,   102,   102,    78,    79,    86,    87,   117,   119,    74,
      88,   115,    56,    87,    87,   119,    83,    87,   102,   114,
     102,   113,   113,    71,    71,   115,    87,    83,    56,    87,
     119,    83,    57,    86,   117,   119,    86,    86,    83,    83,
      83,    83,    83,    83,   102,   102,   118,   119,   115,   115,
     119,   119,    83,    87,   119,    59,    56,   120,    56,    87,
     119,   119,    57,   118,    56,    58,    59,    59,   118,    56,
      56,     3,   119,   120,   102,    69,    70,    97,    98,    83,
     113,   119,    83,   119,    71,    71,    71,    60,   113,    83,
     113,    58,    59,    56,    56,   113
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    89,    90,    91,    91,    92,    92,    93,    93,    93,
      94,    93,    95,    95,    95,    95,    95,    95,    95,    96,
      97,    98,    98,    99,   100,   100,   100,   100,   101,   101,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   104,   104,   104,   104,   105,   105,   106,
     106,   106,   107,   108,   108,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   110,   110,
     110,   110,   111,   111,   111,   112,   112,   112,   112,   113,
     114,   115,   115,   116,   116,   117,   117,   117,   117,   117,
     117,   117,   117,   118,   118,   118,   118,   118,   118,   118,
     118,   119,   120,   121,   122,   123
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     3,     1,     2,     2,     1,
       0,     3,     3,     3,     3,     3,     5,     5,     2,     1,
       2,     1,     1,     1,     3,     3,     1,     1,     3,     1,
       1,     3,     2,     3,     3,     3,     3,     3,     3,     3,
       4,     4,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     5,     5,     2,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     7,     7,     7,     7,     5,
       5,     5,     5,     3,     3,     4,     4,     3,     4,     3,
       4,     4,     3,     3,     3,     3,     3,     4,     3,     3,
       4,     4,     4,     5,     4,     3,     3,     4,     1,     1,
       1,     2,     1,     1,     1,     5,     6,     6,     7,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* program: linelist  */
#line 127 "parser.y"
{
}
#line 1481 "parser.c"
    break;

  case 5: /* line: undefsym ':' linerest  */
#line 136 "parser.y"
{
	if (abort_asap) {YYABORT;}
	if( pass1 ) {
		yyvsp[-2].sym->type = LABEL;
		yyvsp[-2].sym->value = lc;
	}
	inclc(yyvsp[0].value);
	bytecount = 0;
}
#line 1495 "parser.c"
    break;

  case 6: /* line: linerest  */
#line 145 "parser.y"
                                        { inclc(yyvsp[0].value); bytecount = 0; }
#line 1501 "parser.c"
    break;

  case 7: /* linerest: directive '\n'  */
#line 148 "parser.y"
                                        {
						yyval.value = yyvsp[-1].value;
						if( dashl && pass2 )
							dumplist(yyvsp[0].str,1);
					}
#line 1511 "parser.c"
    break;

  case 8: /* linerest: instr '\n'  */
#line 153 "parser.y"
                                        {
						yyval.value = yyvsp[-1].value;
						if( dashl && pass2 )
							dumplist(yyvsp[0].str,1);

					}
#line 1522 "parser.c"
    break;

  case 9: /* linerest: '\n'  */
#line 159 "parser.y"
                                        {
						yyval.value = 0;
						if( dashl && pass2 )
							dumplist(yyvsp[0].str,0);
					}
#line 1532 "parser.c"
    break;

  case 10: /* $@1: %empty  */
#line 164 "parser.y"
                                        {
						seek_eol();
					}
#line 1540 "parser.c"
    break;

  case 11: /* linerest: error $@1 '\n'  */
#line 167 "parser.y"
                                        {
						yyval.value = 0;
						if( dashl && pass2 )
							dumplist(yyvsp[-2].str,0);
					}
#line 1550 "parser.c"
    break;

  case 12: /* directive: '.' D_ORG defexpr  */
#line 184 "parser.y"
{
	lc = yyvsp[0].val.v;
	if( pass2 ) emitaddr(lc);
	bytecount = 0;
	yyval.value = 0;
}
#line 1561 "parser.c"
    break;

  case 13: /* directive: '.' D_BYTE blist  */
#line 190 "parser.y"
                                        { yyval.value = yyvsp[0].value; }
#line 1567 "parser.c"
    break;

  case 14: /* directive: '.' D_WORD wlist  */
#line 191 "parser.y"
                                        { yyval.value = yyvsp[0].value; }
#line 1573 "parser.c"
    break;

  case 15: /* directive: '.' D_SKIP defexpr  */
#line 192 "parser.y"
                                        { yyval.value = yyvsp[0].val.v;
					  if( pass2 )
						emitaddr(lc+yyval.value); }
#line 1581 "parser.c"
    break;

  case 16: /* directive: '.' D_EQU undefsym ',' expr  */
#line 196 "parser.y"
{
	if( yyvsp[0].val.d == 0 )
		warn("Expression is undefined in pass 1");
	yyvsp[-2].sym->type = LABEL;
	yyvsp[-2].sym->value = yyvsp[0].val.v;
	yyval.value = 0;
}
#line 1593 "parser.c"
    break;

  case 17: /* directive: '.' D_FLAG SYMBOL ',' flag  */
#line 205 "parser.y"
{
	yyvsp[-2].sym->type = LABEL;
	yyvsp[-2].sym->value = yyvsp[0].value;
	yyval.value = 0;
}
#line 1603 "parser.c"
    break;

  case 18: /* directive: '.' D_END  */
#line 210 "parser.y"
                                                { yyval.value = 0; }
#line 1609 "parser.c"
    break;

  case 19: /* defexpr: expr  */
#line 214 "parser.y"
{
		if( yyvsp[0].val.d == 0 )
			warn("Expression is undefined in pass 1");
		if( !(isbit16(yyvsp[0].val.v)) )
			warn("Value greater than 16-bits");
		yyval.value = yyvsp[0].val.v;
}
#line 1621 "parser.c"
    break;

  case 20: /* flag: flagv BITPOS  */
#line 224 "parser.y"
{
	if( !isbit8(yyvsp[-1].value) )
		warn("Bit address exceeds 8-bits");
	if( isbmram(yyvsp[-1].value) )
		yyval.value = (yyvsp[-1].value-0x20)*8+ yyvsp[0].value;
	else if( isbmsfr(yyvsp[-1].value) )
		yyval.value = yyvsp[-1].value + yyvsp[0].value;
	else
		warn("Invalid bit addressable RAM location");
}
#line 1636 "parser.c"
    break;

  case 21: /* flagv: SYMBOL  */
#line 237 "parser.y"
{
	if( yyvsp[0].sym->type == UNDEF )
		warn("Symbol %s must be defined in pass 1",yyvsp[0].sym->name);
	yyval.value = yyvsp[0].sym->value;
}
#line 1646 "parser.c"
    break;

  case 22: /* flagv: VALUE  */
#line 242 "parser.y"
                                        { yyval.value = yyvsp[0].value; }
#line 1652 "parser.c"
    break;

  case 23: /* undefsym: SYMBOL  */
#line 247 "parser.y"
{
	if( yyvsp[0].sym->type != UNDEF && pass1)
		warn("Attempt to redefine symbol: %s",yyvsp[0].sym->name);
	yyval.sym = yyvsp[0].sym;
}
#line 1662 "parser.c"
    break;

  case 24: /* blist: blist ',' data8  */
#line 255 "parser.y"
{
	if( pass2 ) genbyte(yyvsp[0].value);
	yyval.value = yyvsp[-2].value + 1;
}
#line 1671 "parser.c"
    break;

  case 25: /* blist: blist ',' STRING  */
#line 260 "parser.y"
{
	if( pass1 )
		yyval.value = yyvsp[-2].value + yyvsp[0].value;
	else {
		yyval.value = yyvsp[-2].value + strlen(yyvsp[0].str);
		genstr(yyvsp[0].str);
		
		free(yyvsp[0].str);
	}
}
#line 1686 "parser.c"
    break;

  case 26: /* blist: data8  */
#line 271 "parser.y"
{
	if( pass2 ) genbyte(yyvsp[0].value);
	yyval.value = 1;
}
#line 1695 "parser.c"
    break;

  case 27: /* blist: STRING  */
#line 276 "parser.y"
{
	if( pass1 )
		yyval.value = yyvsp[0].value;
	else {
		yyval.value = strlen(yyvsp[0].str);
		genstr(yyvsp[0].str);
		free(yyvsp[0].str);
	}
}
#line 1709 "parser.c"
    break;

  case 28: /* wlist: wlist ',' data16  */
#line 288 "parser.y"
{
	if( pass2 ) genword(yyvsp[0].value);
	yyval.value = yyvsp[-2].value + 2;
}
#line 1718 "parser.c"
    break;

  case 29: /* wlist: data16  */
#line 293 "parser.y"
{
	if( pass2 ) genword(yyvsp[0].value);
	yyval.value = 2;
}
#line 1727 "parser.c"
    break;

  case 30: /* expr: '*'  */
#line 306 "parser.y"
                                        { yyval.val.v = lc;
					  yyval.val.d = 1; }
#line 1734 "parser.c"
    break;

  case 31: /* expr: '(' expr ')'  */
#line 309 "parser.y"
                                        { yyval.val.v = yyvsp[-1].val.v;
					  yyval.val.d = yyvsp[-1].val.d; }
#line 1741 "parser.c"
    break;

  case 32: /* expr: '-' expr  */
#line 312 "parser.y"
                                        { yyval.val.v = -yyvsp[0].val.v;
					  yyval.val.d = yyvsp[0].val.d;  }
#line 1748 "parser.c"
    break;

  case 33: /* expr: expr '|' expr  */
#line 315 "parser.y"
                                        { yyval.val.v = yyvsp[-2].val.v | yyvsp[0].val.v;
					  yyval.val.d = yyvsp[-2].val.d && yyvsp[0].val.d; }
#line 1755 "parser.c"
    break;

  case 34: /* expr: expr '&' expr  */
#line 318 "parser.y"
                                        { yyval.val.v = yyvsp[-2].val.v & yyvsp[0].val.v;
					  yyval.val.d = yyvsp[-2].val.d && yyvsp[0].val.d; }
#line 1762 "parser.c"
    break;

  case 35: /* expr: expr '*' expr  */
#line 321 "parser.y"
                                        { yyval.val.v = yyvsp[-2].val.v * yyvsp[0].val.v;
					  yyval.val.d = yyvsp[-2].val.d && yyvsp[0].val.d; }
#line 1769 "parser.c"
    break;

  case 36: /* expr: expr '/' expr  */
#line 324 "parser.y"
                                        { yyval.val.v = yyvsp[-2].val.v / yyvsp[0].val.v;
					  yyval.val.d = yyvsp[-2].val.d && yyvsp[0].val.d; }
#line 1776 "parser.c"
    break;

  case 37: /* expr: expr '%' expr  */
#line 327 "parser.y"
                                        { yyval.val.v = yyvsp[-2].val.v % yyvsp[0].val.v;
					  yyval.val.d = yyvsp[-2].val.d && yyvsp[0].val.d; }
#line 1783 "parser.c"
    break;

  case 38: /* expr: expr '-' expr  */
#line 330 "parser.y"
                                        { yyval.val.v = yyvsp[-2].val.v - yyvsp[0].val.v;
					  yyval.val.d = yyvsp[-2].val.d && yyvsp[0].val.d; }
#line 1790 "parser.c"
    break;

  case 39: /* expr: expr '+' expr  */
#line 333 "parser.y"
                                        { yyval.val.v = yyvsp[-2].val.v + yyvsp[0].val.v;
					  yyval.val.d = yyvsp[-2].val.d && yyvsp[0].val.d; }
#line 1797 "parser.c"
    break;

  case 40: /* expr: expr '>' '>' expr  */
#line 336 "parser.y"
                                        { yyval.val.v = yyvsp[-3].val.v >> yyvsp[0].val.v;
					  yyval.val.d = yyvsp[-3].val.d && yyvsp[0].val.d; }
#line 1804 "parser.c"
    break;

  case 41: /* expr: expr '<' '<' expr  */
#line 339 "parser.y"
                                        { yyval.val.v = yyvsp[-3].val.v << yyvsp[0].val.v;
					  yyval.val.d = yyvsp[-3].val.d && yyvsp[0].val.d; }
#line 1811 "parser.c"
    break;

  case 42: /* expr: SYMBOL  */
#line 342 "parser.y"
{
	if( pass1 ) {
		yyval.val.v = yyvsp[0].sym->value;
		yyval.val.d = (yyvsp[0].sym->type != UNDEF);
	}
	else {
		if( yyvsp[0].sym->type == UNDEF )
			warn("Undefined symbol %s",yyvsp[0].sym->name);
		yyval.val.v = yyvsp[0].sym->value;
		yyval.val.d = 1;
	}
}
#line 1828 "parser.c"
    break;

  case 43: /* expr: VALUE  */
#line 354 "parser.y"
                                { yyval.val.v = yyvsp[0].val.v; yyval.val.d=1; }
#line 1834 "parser.c"
    break;

  case 44: /* instr: NOP  */
#line 367 "parser.y"
                                { yyval.value = makeop(yyvsp[0].op,NULL,0); }
#line 1840 "parser.c"
    break;

  case 45: /* instr: ACALL addr11  */
#line 369 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
#line 1846 "parser.c"
    break;

  case 46: /* instr: AJMP addr11  */
#line 371 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
#line 1852 "parser.c"
    break;

  case 47: /* instr: ADD two_op1  */
#line 373 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
#line 1858 "parser.c"
    break;

  case 48: /* instr: ADDC two_op1  */
#line 375 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
#line 1864 "parser.c"
    break;

  case 49: /* instr: SUBB two_op1  */
#line 377 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
#line 1870 "parser.c"
    break;

  case 50: /* instr: XRL two_op1  */
#line 379 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
#line 1876 "parser.c"
    break;

  case 51: /* instr: XRL two_op2  */
#line 381 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,4); }
#line 1882 "parser.c"
    break;

  case 52: /* instr: ANL two_op1  */
#line 383 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
#line 1888 "parser.c"
    break;

  case 53: /* instr: ANL two_op2  */
#line 385 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,4); }
#line 1894 "parser.c"
    break;

  case 54: /* instr: ANL two_op3  */
#line 387 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,6); }
#line 1900 "parser.c"
    break;

  case 55: /* instr: ORL two_op1  */
#line 389 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
#line 1906 "parser.c"
    break;

  case 56: /* instr: ORL two_op2  */
#line 391 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,4); }
#line 1912 "parser.c"
    break;

  case 57: /* instr: ORL two_op3  */
#line 393 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,6); }
#line 1918 "parser.c"
    break;

  case 58: /* instr: XCH two_op1  */
#line 395 "parser.y"
                                { if( get_md(yyvsp[0].mode) == 3 )
					warn("Immediate mode is illegal");
				  yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0);
				}
#line 1927 "parser.c"
    break;

  case 59: /* instr: INC single_op1  */
#line 400 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
#line 1933 "parser.c"
    break;

  case 60: /* instr: INC DPTR  */
#line 402 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,NULL,4); }
#line 1939 "parser.c"
    break;

  case 61: /* instr: DEC single_op1  */
#line 404 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
#line 1945 "parser.c"
    break;

  case 62: /* instr: DA A  */
#line 406 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,NULL,0); }
#line 1951 "parser.c"
    break;

  case 63: /* instr: DIV AB  */
#line 408 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,NULL,0); }
#line 1957 "parser.c"
    break;

  case 64: /* instr: JMP '@' A '+' DPTR  */
#line 410 "parser.y"
                                { yyval.value = makeop(yyvsp[-4].op,NULL,0); }
#line 1963 "parser.c"
    break;

  case 65: /* instr: JMP '@' DPTR '+' A  */
#line 412 "parser.y"
                                { yyval.value = makeop(yyvsp[-4].op,NULL,0); }
#line 1969 "parser.c"
    break;

  case 66: /* instr: MUL AB  */
#line 414 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,NULL,0); }
#line 1975 "parser.c"
    break;

  case 67: /* instr: RET  */
#line 416 "parser.y"
                                { yyval.value = makeop(yyvsp[0].op,NULL,0); }
#line 1981 "parser.c"
    break;

  case 68: /* instr: RETI  */
#line 418 "parser.y"
                                { yyval.value = makeop(yyvsp[0].op,NULL,0); }
#line 1987 "parser.c"
    break;

  case 69: /* instr: RL A  */
#line 420 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,NULL,0); }
#line 1993 "parser.c"
    break;

  case 70: /* instr: RLC A  */
#line 422 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,NULL,0); }
#line 1999 "parser.c"
    break;

  case 71: /* instr: RR A  */
#line 424 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,NULL,0); }
#line 2005 "parser.c"
    break;

  case 72: /* instr: RRC A  */
#line 426 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,NULL,0); }
#line 2011 "parser.c"
    break;

  case 73: /* instr: SWAP A  */
#line 428 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,NULL,0); }
#line 2017 "parser.c"
    break;

  case 74: /* instr: XCHD two_op1  */
#line 430 "parser.y"
                                { if( get_md(yyvsp[0].mode) != 2 )
					warn("Invalid addressing mode");
				  yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,-2); }
#line 2025 "parser.c"
    break;

  case 75: /* instr: CLR single_op2  */
#line 434 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
#line 2031 "parser.c"
    break;

  case 76: /* instr: CPL single_op2  */
#line 436 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
#line 2037 "parser.c"
    break;

  case 77: /* instr: SETB single_op2  */
#line 438 "parser.y"
                                { if( get_md(yyvsp[0].mode) == 0 )
					warn("Invalid addressing mode");
				  yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,-1); }
#line 2045 "parser.c"
    break;

  case 78: /* instr: PUSH data8  */
#line 442 "parser.y"
                                {
				   struct mode tmp;
					set_md(tmp,0);
					set_ov(tmp,0);
					set_sz(tmp,1);
					set_b1(tmp,yyvsp[0].value);
					yyval.value = makeop(yyvsp[-1].op,&tmp,0);
				}
#line 2058 "parser.c"
    break;

  case 79: /* instr: POP data8  */
#line 451 "parser.y"
                                {
				   struct mode tmp;
					set_md(tmp,0);
					set_ov(tmp,0);
					set_sz(tmp,1);
					set_b1(tmp,yyvsp[0].value);
					yyval.value = makeop(yyvsp[-1].op,&tmp,0);
				}
#line 2071 "parser.c"
    break;

  case 80: /* instr: LJMP addr16  */
#line 460 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
#line 2077 "parser.c"
    break;

  case 81: /* instr: LCALL addr16  */
#line 462 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
#line 2083 "parser.c"
    break;

  case 82: /* instr: JC relative  */
#line 464 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
#line 2089 "parser.c"
    break;

  case 83: /* instr: JNC relative  */
#line 466 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
#line 2095 "parser.c"
    break;

  case 84: /* instr: JNZ relative  */
#line 468 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
#line 2101 "parser.c"
    break;

  case 85: /* instr: JZ relative  */
#line 470 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
#line 2107 "parser.c"
    break;

  case 86: /* instr: SJMP relative  */
#line 472 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
#line 2113 "parser.c"
    break;

  case 87: /* instr: CJNE three_op1  */
#line 474 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
#line 2119 "parser.c"
    break;

  case 88: /* instr: JB two_op4  */
#line 476 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
#line 2125 "parser.c"
    break;

  case 89: /* instr: JNB two_op4  */
#line 478 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
#line 2131 "parser.c"
    break;

  case 90: /* instr: JBC two_op4  */
#line 480 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
#line 2137 "parser.c"
    break;

  case 91: /* instr: DJNZ two_op5  */
#line 482 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
#line 2143 "parser.c"
    break;

  case 92: /* instr: MOV two_op1  */
#line 484 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,0); }
#line 2149 "parser.c"
    break;

  case 93: /* instr: MOV two_op2  */
#line 486 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,4); }
#line 2155 "parser.c"
    break;

  case 94: /* instr: MOV two_op6  */
#line 488 "parser.y"
                                { yyval.value = makeop(yyvsp[-1].op,&yyvsp[0].mode,6); }
#line 2161 "parser.c"
    break;

  case 95: /* instr: MOVC A ',' '@' A '+' DPTR  */
#line 492 "parser.y"
                                { yyval.value = makeop(yyvsp[-6].op,NULL,0); }
#line 2167 "parser.c"
    break;

  case 96: /* instr: MOVC A ',' '@' DPTR '+' A  */
#line 494 "parser.y"
                                { yyval.value = makeop(yyvsp[-6].op,NULL,0); }
#line 2173 "parser.c"
    break;

  case 97: /* instr: MOVC A ',' '@' A '+' PC  */
#line 496 "parser.y"
                                { yyval.value = makeop(yyvsp[-6].op,NULL,1); }
#line 2179 "parser.c"
    break;

  case 98: /* instr: MOVC A ',' '@' PC '+' A  */
#line 498 "parser.y"
                                { yyval.value = makeop(yyvsp[-6].op,NULL,1); }
#line 2185 "parser.c"
    break;

  case 99: /* instr: MOVX A ',' '@' regi  */
#line 501 "parser.y"
                                { yyval.value = makeop(yyvsp[-4].op,NULL,yyvsp[0].value); }
#line 2191 "parser.c"
    break;

  case 100: /* instr: MOVX A ',' '@' DPTR  */
#line 503 "parser.y"
                                { yyval.value = makeop(yyvsp[-4].op,NULL,2); }
#line 2197 "parser.c"
    break;

  case 101: /* instr: MOVX '@' regi ',' A  */
#line 505 "parser.y"
                                { yyval.value = makeop(yyvsp[-4].op,NULL,yyvsp[-2].value+3); }
#line 2203 "parser.c"
    break;

  case 102: /* instr: MOVX '@' DPTR ',' A  */
#line 507 "parser.y"
                                { yyval.value = makeop(yyvsp[-4].op,NULL,5); }
#line 2209 "parser.c"
    break;

  case 103: /* two_op1: A ',' reg  */
#line 519 "parser.y"
                                {
					set_md(yyval.mode,0);
					set_ov(yyval.mode, yyvsp[0].value);
					set_sz(yyval.mode, 0);
				}
#line 2219 "parser.c"
    break;

  case 104: /* two_op1: A ',' data8  */
#line 525 "parser.y"
                                {
					set_md(yyval.mode,1);
					set_ov(yyval.mode,0);
					set_sz(yyval.mode,1);
					set_b1(yyval.mode,yyvsp[0].value);
				}
#line 2230 "parser.c"
    break;

  case 105: /* two_op1: A ',' '@' regi  */
#line 532 "parser.y"
                                {
					set_md(yyval.mode,2);
					set_ov(yyval.mode,yyvsp[0].value);
					set_sz(yyval.mode,0);
				}
#line 2240 "parser.c"
    break;

  case 106: /* two_op1: A ',' '#' data8  */
#line 538 "parser.y"
                                {
					set_md(yyval.mode,3);
					set_ov(yyval.mode,0);
					set_sz(yyval.mode,1);
					set_b1(yyval.mode,yyvsp[0].value);
				}
#line 2251 "parser.c"
    break;

  case 107: /* two_op2: data8 ',' A  */
#line 547 "parser.y"
                                {
					set_md(yyval.mode,0);
					set_ov(yyval.mode,0);
					set_sz(yyval.mode,1);
					set_b1(yyval.mode,yyvsp[-2].value);
				}
#line 2262 "parser.c"
    break;

  case 108: /* two_op2: data8 ',' '#' data8  */
#line 554 "parser.y"
                                {
					set_md(yyval.mode,1);
					set_ov(yyval.mode,0);
					set_sz(yyval.mode,2);
					set_b1(yyval.mode,yyvsp[-3].value);
					set_b2(yyval.mode,yyvsp[0].value);
				}
#line 2274 "parser.c"
    break;

  case 109: /* two_op3: C ',' bit  */
#line 564 "parser.y"
                                {
					set_md(yyval.mode,0);
					set_ov(yyval.mode,0);
					set_sz(yyval.mode,1);
					set_b1(yyval.mode,yyvsp[0].value);
				}
#line 2285 "parser.c"
    break;

  case 110: /* two_op3: C ',' '/' bit  */
#line 571 "parser.y"
                                {
					set_md(yyval.mode,1);
					set_ov(yyval.mode,0);
					set_sz(yyval.mode,1);
					set_b1(yyval.mode,yyvsp[0].value);
				}
#line 2296 "parser.c"
    break;

  case 111: /* two_op3: C ',' '!' bit  */
#line 578 "parser.y"
                                {
					set_md(yyval.mode,1);
					set_ov(yyval.mode,0);
					set_sz(yyval.mode,1);
					set_b1(yyval.mode,yyvsp[0].value);
				}
#line 2307 "parser.c"
    break;

  case 112: /* two_op4: bit ',' rel  */
#line 587 "parser.y"
                                {
					set_md(yyval.mode,0);
					set_ov(yyval.mode,0);
					set_sz(yyval.mode,2);
					set_b1(yyval.mode,yyvsp[-2].value);
					set_b2(yyval.mode,yyvsp[0].value);
				}
#line 2319 "parser.c"
    break;

  case 113: /* two_op5: reg ',' rel2  */
#line 597 "parser.y"
                                {
					set_md(yyval.mode,0);
					set_ov(yyval.mode,yyvsp[-2].value);
					set_sz(yyval.mode,1);
					set_b1(yyval.mode,yyvsp[0].value);
				}
#line 2330 "parser.c"
    break;

  case 114: /* two_op5: data8 ',' rel  */
#line 604 "parser.y"
                                {
					set_md(yyval.mode,1);
					set_ov(yyval.mode,0);
					set_sz(yyval.mode,2);
					set_b1(yyval.mode,yyvsp[-2].value);
					set_b2(yyval.mode,yyvsp[0].value);
				}
#line 2342 "parser.c"
    break;

  case 115: /* two_op6: reg ',' A  */
#line 614 "parser.y"
                                {
					set_md(yyval.mode,0);
					set_ov(yyval.mode,yyvsp[-2].value);
					set_sz(yyval.mode,0);
				}
#line 2352 "parser.c"
    break;

  case 116: /* two_op6: reg ',' data8  */
#line 620 "parser.y"
                                {
					set_md(yyval.mode,1);
					set_ov(yyval.mode,yyvsp[-2].value);
					set_sz(yyval.mode,1);
					set_b1(yyval.mode,yyvsp[0].value);
				}
#line 2363 "parser.c"
    break;

  case 117: /* two_op6: reg ',' '#' data8  */
#line 627 "parser.y"
                                {
					set_md(yyval.mode,2);
					set_ov(yyval.mode,yyvsp[-3].value);
					set_sz(yyval.mode,1);
					set_b1(yyval.mode,yyvsp[0].value);
				}
#line 2374 "parser.c"
    break;

  case 118: /* two_op6: data8 ',' reg  */
#line 634 "parser.y"
                                {
					set_md(yyval.mode,3);
					set_ov(yyval.mode,yyvsp[0].value);
					set_sz(yyval.mode,1);
					set_b1(yyval.mode,yyvsp[-2].value);
				}
#line 2385 "parser.c"
    break;

  case 119: /* two_op6: data8 ',' data8  */
#line 641 "parser.y"
                                {
					set_md(yyval.mode,4);
					set_ov(yyval.mode,0);
					set_sz(yyval.mode,2);
					set_b1(yyval.mode,yyvsp[0].value);
					set_b2(yyval.mode,yyvsp[-2].value);
				}
#line 2397 "parser.c"
    break;

  case 120: /* two_op6: data8 ',' '@' regi  */
#line 649 "parser.y"
                                {
					set_md(yyval.mode,5);
					set_ov(yyval.mode,yyvsp[0].value);
					set_sz(yyval.mode,1);
					set_b1(yyval.mode,yyvsp[-3].value);
				}
#line 2408 "parser.c"
    break;

  case 121: /* two_op6: '@' regi ',' A  */
#line 656 "parser.y"
                                {
					set_md(yyval.mode,6);
					set_ov(yyval.mode,yyvsp[-2].value);
					set_sz(yyval.mode,0);
				}
#line 2418 "parser.c"
    break;

  case 122: /* two_op6: '@' regi ',' data8  */
#line 662 "parser.y"
                                {
					set_md(yyval.mode,7);
					set_ov(yyval.mode,yyvsp[-2].value);
					set_sz(yyval.mode,1);
					set_b1(yyval.mode,yyvsp[0].value);
				}
#line 2429 "parser.c"
    break;

  case 123: /* two_op6: '@' regi ',' '#' data8  */
#line 669 "parser.y"
                                {
					set_md(yyval.mode,8);
					set_ov(yyval.mode,yyvsp[-3].value);
					set_sz(yyval.mode,1);
					set_b1(yyval.mode,yyvsp[0].value);
				}
#line 2440 "parser.c"
    break;

  case 124: /* two_op6: DPTR ',' '#' data16  */
#line 676 "parser.y"
                        {
				set_md(yyval.mode,9);
				set_ov(yyval.mode,0);
				set_sz(yyval.mode,2);
				set_b1(yyval.mode, (yyvsp[0].value & 0xff00) >> 8 );
				set_b2(yyval.mode, (yyvsp[0].value & 0x00ff) );
			}
#line 2452 "parser.c"
    break;

  case 125: /* two_op6: C ',' bit  */
#line 684 "parser.y"
                                {
					set_md(yyval.mode,10);
					set_ov(yyval.mode,0);
					set_sz(yyval.mode,1);
					set_b1(yyval.mode,yyvsp[0].value);
				}
#line 2463 "parser.c"
    break;

  case 126: /* two_op6: data8 ',' C  */
#line 700 "parser.y"
                                {
					set_md(yyval.mode,11);
					set_ov(yyval.mode,0);
					set_sz(yyval.mode,1);
					set_b1(yyval.mode,yyvsp[-2].value);
				}
#line 2474 "parser.c"
    break;

  case 127: /* two_op6: data8 BITPOS ',' C  */
#line 707 "parser.y"
{
	if( pass2 ) {
		if( !isbit8(yyvsp[-3].value) )
			warn("Bit address exceeds 8-bits");
		if( isbmram(yyvsp[-3].value) )
			set_b1(yyval.mode, (yyvsp[-3].value-0x20)*8+ yyvsp[-2].value );
		else if( isbmsfr(yyvsp[-3].value) )
			set_b1(yyval.mode, yyvsp[-3].value + yyvsp[-2].value );
		else
			warn("Invalid bit addressable RAM location");
	}
	set_md(yyval.mode,11);
	set_ov(yyval.mode,0);
	set_sz(yyval.mode,1);
}
#line 2494 "parser.c"
    break;

  case 128: /* single_op1: A  */
#line 726 "parser.y"
                                {
					set_md(yyval.mode,0);
					set_ov(yyval.mode,0);
					set_sz(yyval.mode,0);
				}
#line 2504 "parser.c"
    break;

  case 129: /* single_op1: reg  */
#line 733 "parser.y"
                                {
					set_md(yyval.mode,1);
					set_ov(yyval.mode,yyvsp[0].value);
					set_sz(yyval.mode,0);
				}
#line 2514 "parser.c"
    break;

  case 130: /* single_op1: data8  */
#line 739 "parser.y"
                                {
					set_md(yyval.mode,2);
					set_ov(yyval.mode,0);
					set_sz(yyval.mode,1);
					set_b1(yyval.mode,yyvsp[0].value);
				}
#line 2525 "parser.c"
    break;

  case 131: /* single_op1: '@' regi  */
#line 746 "parser.y"
                                {
					set_md(yyval.mode,3);
					set_ov(yyval.mode,yyvsp[0].value);
					set_sz(yyval.mode,0);
				}
#line 2535 "parser.c"
    break;

  case 132: /* single_op2: A  */
#line 754 "parser.y"
                                {
					set_md(yyval.mode,0);
					set_ov(yyval.mode,0);
					set_sz(yyval.mode,0);
				}
#line 2545 "parser.c"
    break;

  case 133: /* single_op2: C  */
#line 760 "parser.y"
                                {
					set_md(yyval.mode,1);
					set_ov(yyval.mode,0);
					set_sz(yyval.mode,0);
				}
#line 2555 "parser.c"
    break;

  case 134: /* single_op2: bit  */
#line 766 "parser.y"
                                {
					set_md(yyval.mode,2);
					set_ov(yyval.mode,0);
					set_sz(yyval.mode,1);
					set_b1(yyval.mode,yyvsp[0].value);
				}
#line 2566 "parser.c"
    break;

  case 135: /* three_op1: A ',' data8 ',' rel  */
#line 775 "parser.y"
                                {
					set_md(yyval.mode,0);
					set_ov(yyval.mode,0);
					set_sz(yyval.mode,2);
					set_b1(yyval.mode,yyvsp[-2].value);
					set_b2(yyval.mode,yyvsp[0].value);
				}
#line 2578 "parser.c"
    break;

  case 136: /* three_op1: A ',' '#' data8 ',' rel  */
#line 783 "parser.y"
                                {
					set_md(yyval.mode,1);
					set_ov(yyval.mode,0);
					set_sz(yyval.mode,2);
					set_b1(yyval.mode,yyvsp[-2].value);
					set_b2(yyval.mode,yyvsp[0].value);
				}
#line 2590 "parser.c"
    break;

  case 137: /* three_op1: reg ',' '#' data8 ',' rel  */
#line 791 "parser.y"
                                {
					set_md(yyval.mode,2);
					set_ov(yyval.mode,yyvsp[-5].value);
					set_sz(yyval.mode,2);
					set_b1(yyval.mode,yyvsp[-2].value);
					set_b2(yyval.mode,yyvsp[0].value);
				}
#line 2602 "parser.c"
    break;

  case 138: /* three_op1: '@' regi ',' '#' data8 ',' rel  */
#line 799 "parser.y"
                                {
					set_md(yyval.mode,3);
					set_ov(yyval.mode,yyvsp[-5].value);
					set_sz(yyval.mode,2);
					set_b1(yyval.mode,yyvsp[-2].value);
					set_b2(yyval.mode,yyvsp[0].value);
				}
#line 2614 "parser.c"
    break;

  case 139: /* rel: expr  */
#line 809 "parser.y"
{
		long offset;
		if( pass2 ) {
			offset = yyvsp[0].val.v - (lc+3);
			if( offset > 127 || offset < -128 )
			   warn("Relative offset exceeds -128 / +127");
			yyval.value = offset;
		}
}
#line 2628 "parser.c"
    break;

  case 140: /* rel2: expr  */
#line 826 "parser.y"
{
		long offset;
		if( pass2 ) {
			offset = yyvsp[0].val.v - (lc+2); /* different! */
			if( offset > 127 || offset < -128 )
			   warn("Relative offset exceeds -128 / +127");
			yyval.value = offset;
		}
}
#line 2642 "parser.c"
    break;

  case 141: /* bit: bitv BITPOS  */
#line 839 "parser.y"
{
	if( pass2 ) {
		if( !isbit8(yyvsp[-1].value) )
			warn("Bit address exceeds 8-bits");
		if( isbmram(yyvsp[-1].value) )
			yyval.value = (yyvsp[-1].value-0x20)*8+yyvsp[0].value;
		else if( isbmsfr(yyvsp[-1].value) )
			yyval.value = yyvsp[-1].value + yyvsp[0].value;
		else
			warn("Invalid bit addressable RAM location");
	}
}
#line 2659 "parser.c"
    break;

  case 142: /* bit: bitv  */
#line 852 "parser.y"
{
	if( pass2 ) {
		if( !isbit8(yyvsp[0].value) )
			warn("Bit address exceeds 8-bits");
		yyval.value = yyvsp[0].value;
	}
}
#line 2671 "parser.c"
    break;

  case 143: /* bitv: SYMBOL  */
#line 862 "parser.y"
{
	if( yyvsp[0].sym->type == UNDEF && pass2 )
		warn("Symbol %s undefined",yyvsp[0].sym->name);
	yyval.value = yyvsp[0].sym->value;
}
#line 2681 "parser.c"
    break;

  case 144: /* bitv: VALUE  */
#line 867 "parser.y"
                                { yyval.value = yyvsp[0].value; }
#line 2687 "parser.c"
    break;

  case 145: /* reg: R0  */
#line 870 "parser.y"
                                { yyval.value = 0; }
#line 2693 "parser.c"
    break;

  case 146: /* reg: R1  */
#line 871 "parser.y"
                                { yyval.value = 1; }
#line 2699 "parser.c"
    break;

  case 147: /* reg: R2  */
#line 872 "parser.y"
                                { yyval.value = 2; }
#line 2705 "parser.c"
    break;

  case 148: /* reg: R3  */
#line 873 "parser.y"
                                { yyval.value = 3; }
#line 2711 "parser.c"
    break;

  case 149: /* reg: R4  */
#line 874 "parser.y"
                                { yyval.value = 4; }
#line 2717 "parser.c"
    break;

  case 150: /* reg: R5  */
#line 875 "parser.y"
                                { yyval.value = 5; }
#line 2723 "parser.c"
    break;

  case 151: /* reg: R6  */
#line 876 "parser.y"
                                { yyval.value = 6; }
#line 2729 "parser.c"
    break;

  case 152: /* reg: R7  */
#line 877 "parser.y"
                                { yyval.value = 7; }
#line 2735 "parser.c"
    break;

  case 153: /* regi: R0  */
#line 880 "parser.y"
                                { yyval.value = 0; }
#line 2741 "parser.c"
    break;

  case 154: /* regi: R1  */
#line 881 "parser.y"
                                { yyval.value = 1; }
#line 2747 "parser.c"
    break;

  case 155: /* regi: R2  */
#line 883 "parser.y"
                                { yyval.value = 0;
				  warn("Illegal indirect register: @r2"); }
#line 2754 "parser.c"
    break;

  case 156: /* regi: R3  */
#line 886 "parser.y"
                                { yyval.value = 0;
				  warn("Illegal indirect register: @r3"); }
#line 2761 "parser.c"
    break;

  case 157: /* regi: R4  */
#line 889 "parser.y"
                                { yyval.value = 0;
				  warn("Illegal indirect register: @r4"); }
#line 2768 "parser.c"
    break;

  case 158: /* regi: R5  */
#line 892 "parser.y"
                                { yyval.value = 0;
				  warn("Illegal indirect register: @r5"); }
#line 2775 "parser.c"
    break;

  case 159: /* regi: R6  */
#line 895 "parser.y"
                                { yyval.value = 0;
				  warn("Illegal indirect register: @r6"); }
#line 2782 "parser.c"
    break;

  case 160: /* regi: R7  */
#line 898 "parser.y"
                                { yyval.value = 0;
				  warn("Illegal indirect register: @r7"); }
#line 2789 "parser.c"
    break;

  case 161: /* data8: expr  */
#line 903 "parser.y"
{
	if( pass2 ) {
		if( !isbit8(yyvsp[0].val.v) )
			warn("Expression greater than 8-bits");
	}
	yyval.value = yyvsp[0].val.v;
}
#line 2801 "parser.c"
    break;

  case 162: /* data16: expr  */
#line 913 "parser.y"
{
	if( pass2 ) {
		if( !isbit16(yyvsp[0].val.v) )
			warn("Expression greater than 16-bits");
	}
	yyval.value = yyvsp[0].val.v;
}
#line 2813 "parser.c"
    break;

  case 163: /* addr11: expr  */
#line 923 "parser.y"
{
		if( pass2 ) {
			if( !isbit16(yyvsp[0].val.v)  )
				warn("Address greater than 16-bits");
			if( (yyvsp[0].val.v & size11) != ((lc+2) & size11) )
				warn("Address outside current 2K page");
		}
		set_md(yyval.mode,0);
		set_ov(yyval.mode, (yyvsp[0].val.v&0x0700)>>3 );
		set_sz(yyval.mode,1);
		set_b1(yyval.mode,yyvsp[0].val.v&0x00ff);
}
#line 2830 "parser.c"
    break;

  case 164: /* addr16: expr  */
#line 938 "parser.y"
{
		if( pass2 ) {
			if( !isbit16(yyvsp[0].val.v)  )
				warn("Address greater than 16-bits");
		}
		set_md(yyval.mode,0);
		set_ov(yyval.mode, 0 );
		set_sz(yyval.mode,2);
		set_b1(yyval.mode, (yyvsp[0].val.v & 0xff00 ) >> 8 );
		set_b2(yyval.mode, (yyvsp[0].val.v & 0x00ff ) );
}
#line 2846 "parser.c"
    break;

  case 165: /* relative: expr  */
#line 952 "parser.y"
{
		long offset=0;
		if( pass2 ) {
			offset = yyvsp[0].val.v - (lc+2);
			if( offset>127 || offset<-128 )
			   warn("Relative offset exceeds -128 / +127");
		}
		set_md(yyval.mode,0);
		set_ov(yyval.mode,0);
		set_sz(yyval.mode,1);
		set_b1(yyval.mode,offset);

}
#line 2864 "parser.c"
    break;


#line 2868 "parser.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 967 "parser.y"


/* ---------------------------------------------------------------------- */

void yyerror(const char *s)
{
	warn("%s near \"%s\"", s, get_last_token());
}


/* ----------------------------------------------------------------------
 * makeop:
 *	This function makes an opcode based on the instruction symbol table
 *	entry, and an addressing mode structure.
 *	This function is called from both passes, but
 *	only generates code in pass 2.
 *
 *	Resultant opcode bytes are passed to genbyte().
 *
 *	Returns the nuumber of bytes that the instruction
 *	occupies.
 *
 */

int makeop(struct opcode * op, struct mode *m, int add)
{
	register unsigned int newop;

	if( m == NULL ) {
		if(pass2) genbyte(op->bytes[0+add]);
		return(1);
	}

	if( pass2 ) {
		newop = op->bytes[ get_md(*m)+add ] | get_ov(*m);
		genbyte(newop);
		if( get_sz(*m) > 0 ) genbyte( get_b1(*m) );
		if( get_sz(*m) > 1 ) genbyte( get_b2(*m) );
	}
	return( get_sz(*m)+1 );
}


/* ----------------------------------------------------------------------
 * inclc:
 *	Increments the Location Counter by 'i' amount.
 *	Check to see if 'i' overflows 64K.
 *	Checks to see if assembler is overlapping previous sections
 *	of code. (using a large bit field).
 *
 */

#define indx(a) ( (a)/(32) )
#define bit(a)	( 1 << ((a)%(32)) )

#define getloc(a) (regions[indx(a)] & bit(a))
#define setloc(a) (regions[indx(a)] |= bit(a))

static unsigned long regions[ 0x10000/(32) ];

void inclc(int i)
{

	while (i-- > 0) {
		if( pass2 && getloc(lc) )
			error("Location counter overlaps");
		if( pass2 ) setloc(lc);
		lc += 1;
	}
		
	if( lc > 0xffff )
		error("Location counter has exceeded 16-bits");
}

void clear_location_counter(void)
{
	memset(regions, 0, sizeof(regions));
}


/* ----------------------------------------------------------------------
 * padline:
 *	This routine returns a new string, which is equivilant to
 *	'line' except that all tabs have been expanded to spaces, and
 *	the total length has been truncated to 60 chars.
 */

char *padline(char *line)
{
	static char newline[61];
	char *p1;
	int pos=0,nxtpos;

	for(p1=line; pos<sizeof(newline)-1 && *p1; p1++ ) {
		if( *p1 == '\t' ) {
			nxtpos = pos+8-pos%8;
			while(pos<sizeof(newline)-1 && pos <= nxtpos)
				newline[pos++] = ' ';
		} else if( *p1 != '\n' )
			newline[pos++]= *p1;
	}
	newline[pos] = '\0';
	return(newline);
}


/* ----------------------------------------------------------------------
 * dumplist:
 *	Outputs the current location counter, bytebuf[] array, and
 *	the string 'txt' to the listing file.
 *	This routine is called for every source line encountered in the
 *	source file. (Only in pass 2, and if listing is turned on).
 *
 */

void dumplist(char *txt, int show)
{
	int i,j;

	fprintf(listing,show?"%04lX: ":"      ",lc);

	j=0;
	for(i=0; i<bytecount; i++ ) {
		fprintf(listing,"%02X ",bytebuf[i]);
		if( ++j >= 4 ) {
			j = 0;
			fprintf(listing,"\n      ");
		}
	}
	while(++j <= 4)
		fprintf(listing,"   ");

	fprintf(listing," %s\n",padline(txt));
}

/* ----------------------------------------------------------------------
 * gen* routines:
 *	Place information into the bytebuf[] array, and also
 *	call emitbyte with the byte.
 *
 */

void genbyte(int b)
{
	if( bytecount < sizeof(bytebuf) )
		bytebuf[bytecount++] = b;
	emitbyte(b);
}

void genstr(const char *s)
{
	while( *s )
		genbyte(*s++);
}

void genword(unsigned long w)
{
	genbyte( (w & 0xff00) >> 8 );
	genbyte( (w & 0x00ff) );
}

