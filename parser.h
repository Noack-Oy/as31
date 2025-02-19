/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    STRING = 258,                  /* STRING  */
    D_ORG = 259,                   /* D_ORG  */
    D_BYTE = 260,                  /* D_BYTE  */
    D_WORD = 261,                  /* D_WORD  */
    D_SKIP = 262,                  /* D_SKIP  */
    D_EQU = 263,                   /* D_EQU  */
    D_FLAG = 264,                  /* D_FLAG  */
    D_END = 265,                   /* D_END  */
    ACALL = 266,                   /* ACALL  */
    ADD = 267,                     /* ADD  */
    ADDC = 268,                    /* ADDC  */
    AJMP = 269,                    /* AJMP  */
    ANL = 270,                     /* ANL  */
    CJNE = 271,                    /* CJNE  */
    CLR = 272,                     /* CLR  */
    CPL = 273,                     /* CPL  */
    DA = 274,                      /* DA  */
    DEC = 275,                     /* DEC  */
    DIV = 276,                     /* DIV  */
    DJNZ = 277,                    /* DJNZ  */
    INC = 278,                     /* INC  */
    JB = 279,                      /* JB  */
    JBC = 280,                     /* JBC  */
    JC = 281,                      /* JC  */
    JMP = 282,                     /* JMP  */
    JNB = 283,                     /* JNB  */
    JNC = 284,                     /* JNC  */
    JNZ = 285,                     /* JNZ  */
    JZ = 286,                      /* JZ  */
    LCALL = 287,                   /* LCALL  */
    LJMP = 288,                    /* LJMP  */
    MOV = 289,                     /* MOV  */
    MOVC = 290,                    /* MOVC  */
    MOVX = 291,                    /* MOVX  */
    NOP = 292,                     /* NOP  */
    MUL = 293,                     /* MUL  */
    ORL = 294,                     /* ORL  */
    POP = 295,                     /* POP  */
    PUSH = 296,                    /* PUSH  */
    RET = 297,                     /* RET  */
    RETI = 298,                    /* RETI  */
    RL = 299,                      /* RL  */
    RLC = 300,                     /* RLC  */
    RR = 301,                      /* RR  */
    RRC = 302,                     /* RRC  */
    SETB = 303,                    /* SETB  */
    SJMP = 304,                    /* SJMP  */
    SUBB = 305,                    /* SUBB  */
    SWAP = 306,                    /* SWAP  */
    XCH = 307,                     /* XCH  */
    XCHD = 308,                    /* XCHD  */
    XRL = 309,                     /* XRL  */
    AB = 310,                      /* AB  */
    A = 311,                       /* A  */
    C = 312,                       /* C  */
    PC = 313,                      /* PC  */
    DPTR = 314,                    /* DPTR  */
    BITPOS = 315,                  /* BITPOS  */
    R0 = 316,                      /* R0  */
    R1 = 317,                      /* R1  */
    R2 = 318,                      /* R2  */
    R3 = 319,                      /* R3  */
    R4 = 320,                      /* R4  */
    R5 = 321,                      /* R5  */
    R6 = 322,                      /* R6  */
    R7 = 323,                      /* R7  */
    VALUE = 324,                   /* VALUE  */
    SYMBOL = 325                   /* SYMBOL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_H_INCLUDED  */
