// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.

// "%code top" blocks.
#line 31 "yacc.y"

    #include <iostream>

    #include <frontend/parser/parser.h>
    #include <frontend/parser/location.hh>
    #include <frontend/parser/scanner.h>
    #include <frontend/parser/yacc.h>

    using namespace FE;
    using namespace FE::AST;

    static YaccParser::symbol_type yylex(Scanner& scanner, Parser &parser)
    {
        (void)parser;
        return scanner.nextToken(); 
    }

    extern size_t errCnt;

#line 59 "yacc.tab.c"




#include "yacc.tab.h"




#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YY_USE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 4 "yacc.y"
namespace  FE  {
#line 159 "yacc.tab.c"

  /// Build a parser object.
   YaccParser :: YaccParser  (FE::Scanner& scanner_yyarg, FE::Parser& parser_yyarg)
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr),
#else
    :
#endif
      scanner (scanner_yyarg),
      parser (parser_yyarg)
  {}

   YaccParser ::~ YaccParser  ()
  {}

   YaccParser ::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------.
  | symbol.  |
  `---------*/



  // by_state.
   YaccParser ::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

   YaccParser ::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
   YaccParser ::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
   YaccParser ::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

   YaccParser ::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

   YaccParser ::symbol_kind_type
   YaccParser ::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

   YaccParser ::stack_symbol_type::stack_symbol_type ()
  {}

   YaccParser ::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_ASSIGN_EXPR: // ASSIGN_EXPR
      case symbol_kind::S_EXPR: // EXPR
      case symbol_kind::S_NOCOMMA_EXPR: // NOCOMMA_EXPR
      case symbol_kind::S_LOGICAL_OR_EXPR: // LOGICAL_OR_EXPR
      case symbol_kind::S_LOGICAL_AND_EXPR: // LOGICAL_AND_EXPR
      case symbol_kind::S_EQUALITY_EXPR: // EQUALITY_EXPR
      case symbol_kind::S_RELATIONAL_EXPR: // RELATIONAL_EXPR
      case symbol_kind::S_ADDSUB_EXPR: // ADDSUB_EXPR
      case symbol_kind::S_MULDIV_EXPR: // MULDIV_EXPR
      case symbol_kind::S_UNARY_EXPR: // UNARY_EXPR
      case symbol_kind::S_BASIC_EXPR: // BASIC_EXPR
      case symbol_kind::S_FUNC_CALL_EXPR: // FUNC_CALL_EXPR
      case symbol_kind::S_ARRAY_DIMENSION_EXPR: // ARRAY_DIMENSION_EXPR
      case symbol_kind::S_LEFT_VAL_EXPR: // LEFT_VAL_EXPR
      case symbol_kind::S_LITERAL_EXPR: // LITERAL_EXPR
        value.YY_MOVE_OR_COPY< FE::AST::ExprNode* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_INITIALIZER: // INITIALIZER
        value.YY_MOVE_OR_COPY< FE::AST::InitDecl* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_UNARY_OP: // UNARY_OP
        value.YY_MOVE_OR_COPY< FE::AST::Operator > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_PARAM_DECLARATOR: // PARAM_DECLARATOR
        value.YY_MOVE_OR_COPY< FE::AST::ParamDeclarator* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_PROGRAM: // PROGRAM
        value.YY_MOVE_OR_COPY< FE::AST::Root* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_STMT: // STMT
      case symbol_kind::S_BLOCK_STMT: // BLOCK_STMT
      case symbol_kind::S_CONTINUE_STMT: // CONTINUE_STMT
      case symbol_kind::S_EXPR_STMT: // EXPR_STMT
      case symbol_kind::S_VAR_DECL_STMT: // VAR_DECL_STMT
      case symbol_kind::S_FUNC_BODY: // FUNC_BODY
      case symbol_kind::S_FUNC_DECL_STMT: // FUNC_DECL_STMT
      case symbol_kind::S_FOR_STMT: // FOR_STMT
      case symbol_kind::S_IF_STMT: // IF_STMT
      case symbol_kind::S_RETURN_STMT: // RETURN_STMT
      case symbol_kind::S_WHILE_STMT: // WHILE_STMT
      case symbol_kind::S_BREAK_STMT: // BREAK_STMT
        value.YY_MOVE_OR_COPY< FE::AST::StmtNode* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_TYPE: // TYPE
        value.YY_MOVE_OR_COPY< FE::AST::Type* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_VAR_DECLARATION: // VAR_DECLARATION
        value.YY_MOVE_OR_COPY< FE::AST::VarDeclaration* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_VAR_DECLARATOR: // VAR_DECLARATOR
        value.YY_MOVE_OR_COPY< FE::AST::VarDeclarator* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_FLOAT_CONST: // FLOAT_CONST
        value.YY_MOVE_OR_COPY< float > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_INT_CONST: // INT_CONST
        value.YY_MOVE_OR_COPY< int > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_LL_CONST: // LL_CONST
        value.YY_MOVE_OR_COPY< long long > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_STR_CONST: // STR_CONST
      case symbol_kind::S_ERR_TOKEN: // ERR_TOKEN
      case symbol_kind::S_SLASH_COMMENT: // SLASH_COMMENT
      case symbol_kind::S_IDENT: // IDENT
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_PARAM_ARRAY_DIMS: // PARAM_ARRAY_DIMS
      case symbol_kind::S_PARAM_ARRAY_DIMS_TAIL: // PARAM_ARRAY_DIMS_TAIL
      case symbol_kind::S_EXPR_LIST: // EXPR_LIST
      case symbol_kind::S_ARRAY_DIMENSION_EXPR_LIST: // ARRAY_DIMENSION_EXPR_LIST
        value.YY_MOVE_OR_COPY< std::vector<FE::AST::ExprNode*>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_INITIALIZER_LIST: // INITIALIZER_LIST
        value.YY_MOVE_OR_COPY< std::vector<FE::AST::InitDecl*>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_PARAM_DECLARATOR_LIST: // PARAM_DECLARATOR_LIST
        value.YY_MOVE_OR_COPY< std::vector<FE::AST::ParamDeclarator*>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_STMT_LIST: // STMT_LIST
        value.YY_MOVE_OR_COPY< std::vector<FE::AST::StmtNode*>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_VAR_DECLARATOR_LIST: // VAR_DECLARATOR_LIST
        value.YY_MOVE_OR_COPY< std::vector<FE::AST::VarDeclarator*>* > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

   YaccParser ::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_ASSIGN_EXPR: // ASSIGN_EXPR
      case symbol_kind::S_EXPR: // EXPR
      case symbol_kind::S_NOCOMMA_EXPR: // NOCOMMA_EXPR
      case symbol_kind::S_LOGICAL_OR_EXPR: // LOGICAL_OR_EXPR
      case symbol_kind::S_LOGICAL_AND_EXPR: // LOGICAL_AND_EXPR
      case symbol_kind::S_EQUALITY_EXPR: // EQUALITY_EXPR
      case symbol_kind::S_RELATIONAL_EXPR: // RELATIONAL_EXPR
      case symbol_kind::S_ADDSUB_EXPR: // ADDSUB_EXPR
      case symbol_kind::S_MULDIV_EXPR: // MULDIV_EXPR
      case symbol_kind::S_UNARY_EXPR: // UNARY_EXPR
      case symbol_kind::S_BASIC_EXPR: // BASIC_EXPR
      case symbol_kind::S_FUNC_CALL_EXPR: // FUNC_CALL_EXPR
      case symbol_kind::S_ARRAY_DIMENSION_EXPR: // ARRAY_DIMENSION_EXPR
      case symbol_kind::S_LEFT_VAL_EXPR: // LEFT_VAL_EXPR
      case symbol_kind::S_LITERAL_EXPR: // LITERAL_EXPR
        value.move< FE::AST::ExprNode* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_INITIALIZER: // INITIALIZER
        value.move< FE::AST::InitDecl* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_UNARY_OP: // UNARY_OP
        value.move< FE::AST::Operator > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_PARAM_DECLARATOR: // PARAM_DECLARATOR
        value.move< FE::AST::ParamDeclarator* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_PROGRAM: // PROGRAM
        value.move< FE::AST::Root* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_STMT: // STMT
      case symbol_kind::S_BLOCK_STMT: // BLOCK_STMT
      case symbol_kind::S_CONTINUE_STMT: // CONTINUE_STMT
      case symbol_kind::S_EXPR_STMT: // EXPR_STMT
      case symbol_kind::S_VAR_DECL_STMT: // VAR_DECL_STMT
      case symbol_kind::S_FUNC_BODY: // FUNC_BODY
      case symbol_kind::S_FUNC_DECL_STMT: // FUNC_DECL_STMT
      case symbol_kind::S_FOR_STMT: // FOR_STMT
      case symbol_kind::S_IF_STMT: // IF_STMT
      case symbol_kind::S_RETURN_STMT: // RETURN_STMT
      case symbol_kind::S_WHILE_STMT: // WHILE_STMT
      case symbol_kind::S_BREAK_STMT: // BREAK_STMT
        value.move< FE::AST::StmtNode* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_TYPE: // TYPE
        value.move< FE::AST::Type* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_VAR_DECLARATION: // VAR_DECLARATION
        value.move< FE::AST::VarDeclaration* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_VAR_DECLARATOR: // VAR_DECLARATOR
        value.move< FE::AST::VarDeclarator* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_FLOAT_CONST: // FLOAT_CONST
        value.move< float > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_INT_CONST: // INT_CONST
        value.move< int > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_LL_CONST: // LL_CONST
        value.move< long long > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_STR_CONST: // STR_CONST
      case symbol_kind::S_ERR_TOKEN: // ERR_TOKEN
      case symbol_kind::S_SLASH_COMMENT: // SLASH_COMMENT
      case symbol_kind::S_IDENT: // IDENT
        value.move< std::string > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_PARAM_ARRAY_DIMS: // PARAM_ARRAY_DIMS
      case symbol_kind::S_PARAM_ARRAY_DIMS_TAIL: // PARAM_ARRAY_DIMS_TAIL
      case symbol_kind::S_EXPR_LIST: // EXPR_LIST
      case symbol_kind::S_ARRAY_DIMENSION_EXPR_LIST: // ARRAY_DIMENSION_EXPR_LIST
        value.move< std::vector<FE::AST::ExprNode*>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_INITIALIZER_LIST: // INITIALIZER_LIST
        value.move< std::vector<FE::AST::InitDecl*>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_PARAM_DECLARATOR_LIST: // PARAM_DECLARATOR_LIST
        value.move< std::vector<FE::AST::ParamDeclarator*>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_STMT_LIST: // STMT_LIST
        value.move< std::vector<FE::AST::StmtNode*>* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_VAR_DECLARATOR_LIST: // VAR_DECLARATOR_LIST
        value.move< std::vector<FE::AST::VarDeclarator*>* > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
   YaccParser ::stack_symbol_type&
   YaccParser ::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_ASSIGN_EXPR: // ASSIGN_EXPR
      case symbol_kind::S_EXPR: // EXPR
      case symbol_kind::S_NOCOMMA_EXPR: // NOCOMMA_EXPR
      case symbol_kind::S_LOGICAL_OR_EXPR: // LOGICAL_OR_EXPR
      case symbol_kind::S_LOGICAL_AND_EXPR: // LOGICAL_AND_EXPR
      case symbol_kind::S_EQUALITY_EXPR: // EQUALITY_EXPR
      case symbol_kind::S_RELATIONAL_EXPR: // RELATIONAL_EXPR
      case symbol_kind::S_ADDSUB_EXPR: // ADDSUB_EXPR
      case symbol_kind::S_MULDIV_EXPR: // MULDIV_EXPR
      case symbol_kind::S_UNARY_EXPR: // UNARY_EXPR
      case symbol_kind::S_BASIC_EXPR: // BASIC_EXPR
      case symbol_kind::S_FUNC_CALL_EXPR: // FUNC_CALL_EXPR
      case symbol_kind::S_ARRAY_DIMENSION_EXPR: // ARRAY_DIMENSION_EXPR
      case symbol_kind::S_LEFT_VAL_EXPR: // LEFT_VAL_EXPR
      case symbol_kind::S_LITERAL_EXPR: // LITERAL_EXPR
        value.copy< FE::AST::ExprNode* > (that.value);
        break;

      case symbol_kind::S_INITIALIZER: // INITIALIZER
        value.copy< FE::AST::InitDecl* > (that.value);
        break;

      case symbol_kind::S_UNARY_OP: // UNARY_OP
        value.copy< FE::AST::Operator > (that.value);
        break;

      case symbol_kind::S_PARAM_DECLARATOR: // PARAM_DECLARATOR
        value.copy< FE::AST::ParamDeclarator* > (that.value);
        break;

      case symbol_kind::S_PROGRAM: // PROGRAM
        value.copy< FE::AST::Root* > (that.value);
        break;

      case symbol_kind::S_STMT: // STMT
      case symbol_kind::S_BLOCK_STMT: // BLOCK_STMT
      case symbol_kind::S_CONTINUE_STMT: // CONTINUE_STMT
      case symbol_kind::S_EXPR_STMT: // EXPR_STMT
      case symbol_kind::S_VAR_DECL_STMT: // VAR_DECL_STMT
      case symbol_kind::S_FUNC_BODY: // FUNC_BODY
      case symbol_kind::S_FUNC_DECL_STMT: // FUNC_DECL_STMT
      case symbol_kind::S_FOR_STMT: // FOR_STMT
      case symbol_kind::S_IF_STMT: // IF_STMT
      case symbol_kind::S_RETURN_STMT: // RETURN_STMT
      case symbol_kind::S_WHILE_STMT: // WHILE_STMT
      case symbol_kind::S_BREAK_STMT: // BREAK_STMT
        value.copy< FE::AST::StmtNode* > (that.value);
        break;

      case symbol_kind::S_TYPE: // TYPE
        value.copy< FE::AST::Type* > (that.value);
        break;

      case symbol_kind::S_VAR_DECLARATION: // VAR_DECLARATION
        value.copy< FE::AST::VarDeclaration* > (that.value);
        break;

      case symbol_kind::S_VAR_DECLARATOR: // VAR_DECLARATOR
        value.copy< FE::AST::VarDeclarator* > (that.value);
        break;

      case symbol_kind::S_FLOAT_CONST: // FLOAT_CONST
        value.copy< float > (that.value);
        break;

      case symbol_kind::S_INT_CONST: // INT_CONST
        value.copy< int > (that.value);
        break;

      case symbol_kind::S_LL_CONST: // LL_CONST
        value.copy< long long > (that.value);
        break;

      case symbol_kind::S_STR_CONST: // STR_CONST
      case symbol_kind::S_ERR_TOKEN: // ERR_TOKEN
      case symbol_kind::S_SLASH_COMMENT: // SLASH_COMMENT
      case symbol_kind::S_IDENT: // IDENT
        value.copy< std::string > (that.value);
        break;

      case symbol_kind::S_PARAM_ARRAY_DIMS: // PARAM_ARRAY_DIMS
      case symbol_kind::S_PARAM_ARRAY_DIMS_TAIL: // PARAM_ARRAY_DIMS_TAIL
      case symbol_kind::S_EXPR_LIST: // EXPR_LIST
      case symbol_kind::S_ARRAY_DIMENSION_EXPR_LIST: // ARRAY_DIMENSION_EXPR_LIST
        value.copy< std::vector<FE::AST::ExprNode*>* > (that.value);
        break;

      case symbol_kind::S_INITIALIZER_LIST: // INITIALIZER_LIST
        value.copy< std::vector<FE::AST::InitDecl*>* > (that.value);
        break;

      case symbol_kind::S_PARAM_DECLARATOR_LIST: // PARAM_DECLARATOR_LIST
        value.copy< std::vector<FE::AST::ParamDeclarator*>* > (that.value);
        break;

      case symbol_kind::S_STMT_LIST: // STMT_LIST
        value.copy< std::vector<FE::AST::StmtNode*>* > (that.value);
        break;

      case symbol_kind::S_VAR_DECLARATOR_LIST: // VAR_DECLARATOR_LIST
        value.copy< std::vector<FE::AST::VarDeclarator*>* > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }

   YaccParser ::stack_symbol_type&
   YaccParser ::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_ASSIGN_EXPR: // ASSIGN_EXPR
      case symbol_kind::S_EXPR: // EXPR
      case symbol_kind::S_NOCOMMA_EXPR: // NOCOMMA_EXPR
      case symbol_kind::S_LOGICAL_OR_EXPR: // LOGICAL_OR_EXPR
      case symbol_kind::S_LOGICAL_AND_EXPR: // LOGICAL_AND_EXPR
      case symbol_kind::S_EQUALITY_EXPR: // EQUALITY_EXPR
      case symbol_kind::S_RELATIONAL_EXPR: // RELATIONAL_EXPR
      case symbol_kind::S_ADDSUB_EXPR: // ADDSUB_EXPR
      case symbol_kind::S_MULDIV_EXPR: // MULDIV_EXPR
      case symbol_kind::S_UNARY_EXPR: // UNARY_EXPR
      case symbol_kind::S_BASIC_EXPR: // BASIC_EXPR
      case symbol_kind::S_FUNC_CALL_EXPR: // FUNC_CALL_EXPR
      case symbol_kind::S_ARRAY_DIMENSION_EXPR: // ARRAY_DIMENSION_EXPR
      case symbol_kind::S_LEFT_VAL_EXPR: // LEFT_VAL_EXPR
      case symbol_kind::S_LITERAL_EXPR: // LITERAL_EXPR
        value.move< FE::AST::ExprNode* > (that.value);
        break;

      case symbol_kind::S_INITIALIZER: // INITIALIZER
        value.move< FE::AST::InitDecl* > (that.value);
        break;

      case symbol_kind::S_UNARY_OP: // UNARY_OP
        value.move< FE::AST::Operator > (that.value);
        break;

      case symbol_kind::S_PARAM_DECLARATOR: // PARAM_DECLARATOR
        value.move< FE::AST::ParamDeclarator* > (that.value);
        break;

      case symbol_kind::S_PROGRAM: // PROGRAM
        value.move< FE::AST::Root* > (that.value);
        break;

      case symbol_kind::S_STMT: // STMT
      case symbol_kind::S_BLOCK_STMT: // BLOCK_STMT
      case symbol_kind::S_CONTINUE_STMT: // CONTINUE_STMT
      case symbol_kind::S_EXPR_STMT: // EXPR_STMT
      case symbol_kind::S_VAR_DECL_STMT: // VAR_DECL_STMT
      case symbol_kind::S_FUNC_BODY: // FUNC_BODY
      case symbol_kind::S_FUNC_DECL_STMT: // FUNC_DECL_STMT
      case symbol_kind::S_FOR_STMT: // FOR_STMT
      case symbol_kind::S_IF_STMT: // IF_STMT
      case symbol_kind::S_RETURN_STMT: // RETURN_STMT
      case symbol_kind::S_WHILE_STMT: // WHILE_STMT
      case symbol_kind::S_BREAK_STMT: // BREAK_STMT
        value.move< FE::AST::StmtNode* > (that.value);
        break;

      case symbol_kind::S_TYPE: // TYPE
        value.move< FE::AST::Type* > (that.value);
        break;

      case symbol_kind::S_VAR_DECLARATION: // VAR_DECLARATION
        value.move< FE::AST::VarDeclaration* > (that.value);
        break;

      case symbol_kind::S_VAR_DECLARATOR: // VAR_DECLARATOR
        value.move< FE::AST::VarDeclarator* > (that.value);
        break;

      case symbol_kind::S_FLOAT_CONST: // FLOAT_CONST
        value.move< float > (that.value);
        break;

      case symbol_kind::S_INT_CONST: // INT_CONST
        value.move< int > (that.value);
        break;

      case symbol_kind::S_LL_CONST: // LL_CONST
        value.move< long long > (that.value);
        break;

      case symbol_kind::S_STR_CONST: // STR_CONST
      case symbol_kind::S_ERR_TOKEN: // ERR_TOKEN
      case symbol_kind::S_SLASH_COMMENT: // SLASH_COMMENT
      case symbol_kind::S_IDENT: // IDENT
        value.move< std::string > (that.value);
        break;

      case symbol_kind::S_PARAM_ARRAY_DIMS: // PARAM_ARRAY_DIMS
      case symbol_kind::S_PARAM_ARRAY_DIMS_TAIL: // PARAM_ARRAY_DIMS_TAIL
      case symbol_kind::S_EXPR_LIST: // EXPR_LIST
      case symbol_kind::S_ARRAY_DIMENSION_EXPR_LIST: // ARRAY_DIMENSION_EXPR_LIST
        value.move< std::vector<FE::AST::ExprNode*>* > (that.value);
        break;

      case symbol_kind::S_INITIALIZER_LIST: // INITIALIZER_LIST
        value.move< std::vector<FE::AST::InitDecl*>* > (that.value);
        break;

      case symbol_kind::S_PARAM_DECLARATOR_LIST: // PARAM_DECLARATOR_LIST
        value.move< std::vector<FE::AST::ParamDeclarator*>* > (that.value);
        break;

      case symbol_kind::S_STMT_LIST: // STMT_LIST
        value.move< std::vector<FE::AST::StmtNode*>* > (that.value);
        break;

      case symbol_kind::S_VAR_DECLARATOR_LIST: // VAR_DECLARATOR_LIST
        value.move< std::vector<FE::AST::VarDeclarator*>* > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
   YaccParser ::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
   YaccParser ::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YY_USE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " ("
            << yysym.location << ": ";
        YY_USE (yykind);
        yyo << ')';
      }
  }
#endif

  void
   YaccParser ::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
   YaccParser ::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
   YaccParser ::yypop_ (int n) YY_NOEXCEPT
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
   YaccParser ::debug_stream () const
  {
    return *yycdebug_;
  }

  void
   YaccParser ::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


   YaccParser ::debug_level_type
   YaccParser ::debug_level () const
  {
    return yydebug_;
  }

  void
   YaccParser ::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

   YaccParser ::state_type
   YaccParser ::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
   YaccParser ::yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yypact_ninf_;
  }

  bool
   YaccParser ::yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yytable_ninf_;
  }

  int
   YaccParser ::operator() ()
  {
    return parse ();
  }

  int
   YaccParser ::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex (scanner, parser));
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case symbol_kind::S_ASSIGN_EXPR: // ASSIGN_EXPR
      case symbol_kind::S_EXPR: // EXPR
      case symbol_kind::S_NOCOMMA_EXPR: // NOCOMMA_EXPR
      case symbol_kind::S_LOGICAL_OR_EXPR: // LOGICAL_OR_EXPR
      case symbol_kind::S_LOGICAL_AND_EXPR: // LOGICAL_AND_EXPR
      case symbol_kind::S_EQUALITY_EXPR: // EQUALITY_EXPR
      case symbol_kind::S_RELATIONAL_EXPR: // RELATIONAL_EXPR
      case symbol_kind::S_ADDSUB_EXPR: // ADDSUB_EXPR
      case symbol_kind::S_MULDIV_EXPR: // MULDIV_EXPR
      case symbol_kind::S_UNARY_EXPR: // UNARY_EXPR
      case symbol_kind::S_BASIC_EXPR: // BASIC_EXPR
      case symbol_kind::S_FUNC_CALL_EXPR: // FUNC_CALL_EXPR
      case symbol_kind::S_ARRAY_DIMENSION_EXPR: // ARRAY_DIMENSION_EXPR
      case symbol_kind::S_LEFT_VAL_EXPR: // LEFT_VAL_EXPR
      case symbol_kind::S_LITERAL_EXPR: // LITERAL_EXPR
        yylhs.value.emplace< FE::AST::ExprNode* > ();
        break;

      case symbol_kind::S_INITIALIZER: // INITIALIZER
        yylhs.value.emplace< FE::AST::InitDecl* > ();
        break;

      case symbol_kind::S_UNARY_OP: // UNARY_OP
        yylhs.value.emplace< FE::AST::Operator > ();
        break;

      case symbol_kind::S_PARAM_DECLARATOR: // PARAM_DECLARATOR
        yylhs.value.emplace< FE::AST::ParamDeclarator* > ();
        break;

      case symbol_kind::S_PROGRAM: // PROGRAM
        yylhs.value.emplace< FE::AST::Root* > ();
        break;

      case symbol_kind::S_STMT: // STMT
      case symbol_kind::S_BLOCK_STMT: // BLOCK_STMT
      case symbol_kind::S_CONTINUE_STMT: // CONTINUE_STMT
      case symbol_kind::S_EXPR_STMT: // EXPR_STMT
      case symbol_kind::S_VAR_DECL_STMT: // VAR_DECL_STMT
      case symbol_kind::S_FUNC_BODY: // FUNC_BODY
      case symbol_kind::S_FUNC_DECL_STMT: // FUNC_DECL_STMT
      case symbol_kind::S_FOR_STMT: // FOR_STMT
      case symbol_kind::S_IF_STMT: // IF_STMT
      case symbol_kind::S_RETURN_STMT: // RETURN_STMT
      case symbol_kind::S_WHILE_STMT: // WHILE_STMT
      case symbol_kind::S_BREAK_STMT: // BREAK_STMT
        yylhs.value.emplace< FE::AST::StmtNode* > ();
        break;

      case symbol_kind::S_TYPE: // TYPE
        yylhs.value.emplace< FE::AST::Type* > ();
        break;

      case symbol_kind::S_VAR_DECLARATION: // VAR_DECLARATION
        yylhs.value.emplace< FE::AST::VarDeclaration* > ();
        break;

      case symbol_kind::S_VAR_DECLARATOR: // VAR_DECLARATOR
        yylhs.value.emplace< FE::AST::VarDeclarator* > ();
        break;

      case symbol_kind::S_FLOAT_CONST: // FLOAT_CONST
        yylhs.value.emplace< float > ();
        break;

      case symbol_kind::S_INT_CONST: // INT_CONST
        yylhs.value.emplace< int > ();
        break;

      case symbol_kind::S_LL_CONST: // LL_CONST
        yylhs.value.emplace< long long > ();
        break;

      case symbol_kind::S_STR_CONST: // STR_CONST
      case symbol_kind::S_ERR_TOKEN: // ERR_TOKEN
      case symbol_kind::S_SLASH_COMMENT: // SLASH_COMMENT
      case symbol_kind::S_IDENT: // IDENT
        yylhs.value.emplace< std::string > ();
        break;

      case symbol_kind::S_PARAM_ARRAY_DIMS: // PARAM_ARRAY_DIMS
      case symbol_kind::S_PARAM_ARRAY_DIMS_TAIL: // PARAM_ARRAY_DIMS_TAIL
      case symbol_kind::S_EXPR_LIST: // EXPR_LIST
      case symbol_kind::S_ARRAY_DIMENSION_EXPR_LIST: // ARRAY_DIMENSION_EXPR_LIST
        yylhs.value.emplace< std::vector<FE::AST::ExprNode*>* > ();
        break;

      case symbol_kind::S_INITIALIZER_LIST: // INITIALIZER_LIST
        yylhs.value.emplace< std::vector<FE::AST::InitDecl*>* > ();
        break;

      case symbol_kind::S_PARAM_DECLARATOR_LIST: // PARAM_DECLARATOR_LIST
        yylhs.value.emplace< std::vector<FE::AST::ParamDeclarator*>* > ();
        break;

      case symbol_kind::S_STMT_LIST: // STMT_LIST
        yylhs.value.emplace< std::vector<FE::AST::StmtNode*>* > ();
        break;

      case symbol_kind::S_VAR_DECLARATOR_LIST: // VAR_DECLARATOR_LIST
        yylhs.value.emplace< std::vector<FE::AST::VarDeclarator*>* > ();
        break;

      default:
        break;
    }


      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2: // PROGRAM: STMT_LIST
#line 149 "yacc.y"
              {
        yylhs.value.as < FE::AST::Root* > () = new Root(yystack_[0].value.as < std::vector<FE::AST::StmtNode*>* > ());
        parser.ast = yylhs.value.as < FE::AST::Root* > ();
    }
#line 1072 "yacc.tab.c"
    break;

  case 3: // PROGRAM: PROGRAM END
#line 153 "yacc.y"
                  {
        YYACCEPT;
    }
#line 1080 "yacc.tab.c"
    break;

  case 4: // STMT_LIST: STMT
#line 159 "yacc.y"
         {
        yylhs.value.as < std::vector<FE::AST::StmtNode*>* > () = new std::vector<StmtNode*>();
        if (yystack_[0].value.as < FE::AST::StmtNode* > ()) yylhs.value.as < std::vector<FE::AST::StmtNode*>* > ()->push_back(yystack_[0].value.as < FE::AST::StmtNode* > ());
    }
#line 1089 "yacc.tab.c"
    break;

  case 5: // STMT_LIST: STMT_LIST STMT
#line 163 "yacc.y"
                     {
        yylhs.value.as < std::vector<FE::AST::StmtNode*>* > () = yystack_[1].value.as < std::vector<FE::AST::StmtNode*>* > ();
        if (yystack_[0].value.as < FE::AST::StmtNode* > ()) yylhs.value.as < std::vector<FE::AST::StmtNode*>* > ()->push_back(yystack_[0].value.as < FE::AST::StmtNode* > ());
    }
#line 1098 "yacc.tab.c"
    break;

  case 6: // STMT: EXPR_STMT
#line 170 "yacc.y"
              {
        yylhs.value.as < FE::AST::StmtNode* > () = yystack_[0].value.as < FE::AST::StmtNode* > ();
    }
#line 1106 "yacc.tab.c"
    break;

  case 7: // STMT: VAR_DECL_STMT
#line 173 "yacc.y"
                    {
        yylhs.value.as < FE::AST::StmtNode* > () = yystack_[0].value.as < FE::AST::StmtNode* > ();
    }
#line 1114 "yacc.tab.c"
    break;

  case 8: // STMT: FUNC_DECL_STMT
#line 176 "yacc.y"
                     {
        yylhs.value.as < FE::AST::StmtNode* > () = yystack_[0].value.as < FE::AST::StmtNode* > ();
    }
#line 1122 "yacc.tab.c"
    break;

  case 9: // STMT: BLOCK_STMT
#line 179 "yacc.y"
                 {
        yylhs.value.as < FE::AST::StmtNode* > () = yystack_[0].value.as < FE::AST::StmtNode* > ();
    }
#line 1130 "yacc.tab.c"
    break;

  case 10: // STMT: FOR_STMT
#line 182 "yacc.y"
               {
        yylhs.value.as < FE::AST::StmtNode* > () = yystack_[0].value.as < FE::AST::StmtNode* > ();
    }
#line 1138 "yacc.tab.c"
    break;

  case 11: // STMT: IF_STMT
#line 185 "yacc.y"
              {
        yylhs.value.as < FE::AST::StmtNode* > () = yystack_[0].value.as < FE::AST::StmtNode* > ();
    }
#line 1146 "yacc.tab.c"
    break;

  case 12: // STMT: CONTINUE_STMT
#line 189 "yacc.y"
                    {
        yylhs.value.as < FE::AST::StmtNode* > () = yystack_[0].value.as < FE::AST::StmtNode* > ();
    }
#line 1154 "yacc.tab.c"
    break;

  case 13: // STMT: BREAK_STMT
#line 192 "yacc.y"
                 {
        yylhs.value.as < FE::AST::StmtNode* > () = yystack_[0].value.as < FE::AST::StmtNode* > ();
    }
#line 1162 "yacc.tab.c"
    break;

  case 14: // STMT: WHILE_STMT
#line 195 "yacc.y"
                 {
        yylhs.value.as < FE::AST::StmtNode* > () = yystack_[0].value.as < FE::AST::StmtNode* > ();
    }
#line 1170 "yacc.tab.c"
    break;

  case 15: // STMT: RETURN_STMT
#line 198 "yacc.y"
                  {
        yylhs.value.as < FE::AST::StmtNode* > () = yystack_[0].value.as < FE::AST::StmtNode* > ();
    }
#line 1178 "yacc.tab.c"
    break;

  case 16: // STMT: SEMICOLON
#line 201 "yacc.y"
                {
        yylhs.value.as < FE::AST::StmtNode* > () = nullptr;
    }
#line 1186 "yacc.tab.c"
    break;

  case 17: // STMT: SLASH_COMMENT
#line 204 "yacc.y"
                    {
        yylhs.value.as < FE::AST::StmtNode* > () = nullptr;
    }
#line 1194 "yacc.tab.c"
    break;

  case 18: // BLOCK_STMT: LBRACE RBRACE
#line 211 "yacc.y"
                  {
        yylhs.value.as < FE::AST::StmtNode* > () = new BlockStmt(new std::vector<StmtNode*>(), yystack_[1].location.begin.line, yystack_[1].location.begin.column);
    }
#line 1202 "yacc.tab.c"
    break;

  case 19: // BLOCK_STMT: LBRACE STMT_LIST RBRACE
#line 214 "yacc.y"
                              {
        if (!yystack_[1].value.as < std::vector<FE::AST::StmtNode*>* > ()) {
            yylhs.value.as < FE::AST::StmtNode* > () = new BlockStmt(new std::vector<StmtNode*>(), yystack_[2].location.begin.line, yystack_[2].location.begin.column);
        } else {
            yylhs.value.as < FE::AST::StmtNode* > () = new BlockStmt(yystack_[1].value.as < std::vector<FE::AST::StmtNode*>* > (), yystack_[2].location.begin.line, yystack_[2].location.begin.column);
        }
    }
#line 1214 "yacc.tab.c"
    break;

  case 20: // CONTINUE_STMT: CONTINUE SEMICOLON
#line 224 "yacc.y"
                       {
        yylhs.value.as < FE::AST::StmtNode* > () = new ContinueStmt(yystack_[1].location.begin.line, yystack_[1].location.begin.column);
    }
#line 1222 "yacc.tab.c"
    break;

  case 21: // EXPR_STMT: EXPR SEMICOLON
#line 230 "yacc.y"
                   {
        yylhs.value.as < FE::AST::StmtNode* > () = new ExprStmt(yystack_[1].value.as < FE::AST::ExprNode* > (), yystack_[1].location.begin.line, yystack_[1].location.begin.column);
    }
#line 1230 "yacc.tab.c"
    break;

  case 22: // VAR_DECLARATION: TYPE VAR_DECLARATOR_LIST
#line 236 "yacc.y"
                             {
        yylhs.value.as < FE::AST::VarDeclaration* > () = new VarDeclaration(yystack_[1].value.as < FE::AST::Type* > (), yystack_[0].value.as < std::vector<FE::AST::VarDeclarator*>* > (), false, yystack_[1].location.begin.line, yystack_[1].location.begin.column);
    }
#line 1238 "yacc.tab.c"
    break;

  case 23: // VAR_DECLARATION: CONST TYPE VAR_DECLARATOR_LIST
#line 239 "yacc.y"
                                     {
        yylhs.value.as < FE::AST::VarDeclaration* > () = new VarDeclaration(yystack_[1].value.as < FE::AST::Type* > (), yystack_[0].value.as < std::vector<FE::AST::VarDeclarator*>* > (), true, yystack_[2].location.begin.line, yystack_[2].location.begin.column);
    }
#line 1246 "yacc.tab.c"
    break;

  case 24: // VAR_DECL_STMT: VAR_DECLARATION SEMICOLON
#line 245 "yacc.y"
                              {
        yylhs.value.as < FE::AST::StmtNode* > () = new VarDeclStmt(yystack_[1].value.as < FE::AST::VarDeclaration* > (), yystack_[1].location.begin.line, yystack_[1].location.begin.column);
    }
#line 1254 "yacc.tab.c"
    break;

  case 25: // FUNC_BODY: LBRACE RBRACE
#line 251 "yacc.y"
                  {
        yylhs.value.as < FE::AST::StmtNode* > () = nullptr;
    }
#line 1262 "yacc.tab.c"
    break;

  case 26: // FUNC_BODY: LBRACE STMT_LIST RBRACE
#line 254 "yacc.y"
                              {
        if (!yystack_[1].value.as < std::vector<FE::AST::StmtNode*>* > () || yystack_[1].value.as < std::vector<FE::AST::StmtNode*>* > ()->empty())
        {
            yylhs.value.as < FE::AST::StmtNode* > () = nullptr;
            delete yystack_[1].value.as < std::vector<FE::AST::StmtNode*>* > ();
        }
        else if (yystack_[1].value.as < std::vector<FE::AST::StmtNode*>* > ()->size() == 1)
        {
            yylhs.value.as < FE::AST::StmtNode* > () = (*yystack_[1].value.as < std::vector<FE::AST::StmtNode*>* > ())[0];
            delete yystack_[1].value.as < std::vector<FE::AST::StmtNode*>* > ();
        }
        else yylhs.value.as < FE::AST::StmtNode* > () = new BlockStmt(yystack_[1].value.as < std::vector<FE::AST::StmtNode*>* > (), yystack_[2].location.begin.line, yystack_[2].location.begin.column);
    }
#line 1280 "yacc.tab.c"
    break;

  case 27: // FUNC_DECL_STMT: TYPE IDENT LPAREN PARAM_DECLARATOR_LIST RPAREN FUNC_BODY
#line 272 "yacc.y"
                                                             {
        Entry* entry = Entry::getEntry(yystack_[4].value.as < std::string > ());
        yylhs.value.as < FE::AST::StmtNode* > () = new FuncDeclStmt(yystack_[5].value.as < FE::AST::Type* > (), entry, yystack_[2].value.as < std::vector<FE::AST::ParamDeclarator*>* > (), yystack_[0].value.as < FE::AST::StmtNode* > (), yystack_[5].location.begin.line, yystack_[5].location.begin.column);
    }
#line 1289 "yacc.tab.c"
    break;

  case 28: // FOR_STMT: FOR LPAREN VAR_DECLARATION SEMICOLON EXPR SEMICOLON EXPR RPAREN STMT
#line 279 "yacc.y"
                                                                         {
        VarDeclStmt* initStmt = new VarDeclStmt(yystack_[6].value.as < FE::AST::VarDeclaration* > (), yystack_[6].location.begin.line, yystack_[6].location.begin.column);
        yylhs.value.as < FE::AST::StmtNode* > () = new ForStmt(initStmt, yystack_[4].value.as < FE::AST::ExprNode* > (), yystack_[2].value.as < FE::AST::ExprNode* > (), yystack_[0].value.as < FE::AST::StmtNode* > (), yystack_[8].location.begin.line, yystack_[8].location.begin.column);
    }
#line 1298 "yacc.tab.c"
    break;

  case 29: // FOR_STMT: FOR LPAREN EXPR SEMICOLON EXPR SEMICOLON EXPR RPAREN STMT
#line 283 "yacc.y"
                                                                {
        StmtNode* initStmt = new ExprStmt(yystack_[6].value.as < FE::AST::ExprNode* > (), yystack_[6].value.as < FE::AST::ExprNode* > ()->line_num, yystack_[6].value.as < FE::AST::ExprNode* > ()->col_num);
        yylhs.value.as < FE::AST::StmtNode* > () = new ForStmt(initStmt, yystack_[4].value.as < FE::AST::ExprNode* > (), yystack_[2].value.as < FE::AST::ExprNode* > (), yystack_[0].value.as < FE::AST::StmtNode* > (), yystack_[8].location.begin.line, yystack_[8].location.begin.column);
    }
#line 1307 "yacc.tab.c"
    break;

  case 30: // IF_STMT: IF LPAREN EXPR RPAREN STMT
#line 290 "yacc.y"
                                          {
        yylhs.value.as < FE::AST::StmtNode* > () = new IfStmt(yystack_[2].value.as < FE::AST::ExprNode* > (), yystack_[0].value.as < FE::AST::StmtNode* > (), nullptr, yystack_[4].location.begin.line, yystack_[4].location.begin.column);
    }
#line 1315 "yacc.tab.c"
    break;

  case 31: // IF_STMT: IF LPAREN EXPR RPAREN STMT ELSE STMT
#line 294 "yacc.y"
                                           {
        yylhs.value.as < FE::AST::StmtNode* > () = new IfStmt(yystack_[4].value.as < FE::AST::ExprNode* > (), yystack_[2].value.as < FE::AST::StmtNode* > (), yystack_[0].value.as < FE::AST::StmtNode* > (), yystack_[6].location.begin.line, yystack_[6].location.begin.column);
    }
#line 1323 "yacc.tab.c"
    break;

  case 32: // RETURN_STMT: RETURN SEMICOLON
#line 300 "yacc.y"
                     {
        yylhs.value.as < FE::AST::StmtNode* > () = new ReturnStmt(nullptr, yystack_[1].location.begin.line, yystack_[1].location.begin.column);
    }
#line 1331 "yacc.tab.c"
    break;

  case 33: // RETURN_STMT: RETURN EXPR SEMICOLON
#line 303 "yacc.y"
                            {
        yylhs.value.as < FE::AST::StmtNode* > () = new ReturnStmt(yystack_[1].value.as < FE::AST::ExprNode* > (), yystack_[2].location.begin.line, yystack_[2].location.begin.column);
    }
#line 1339 "yacc.tab.c"
    break;

  case 34: // WHILE_STMT: WHILE LPAREN EXPR RPAREN STMT
#line 309 "yacc.y"
                                  {
        yylhs.value.as < FE::AST::StmtNode* > () = new WhileStmt(yystack_[2].value.as < FE::AST::ExprNode* > (), yystack_[0].value.as < FE::AST::StmtNode* > (), yystack_[4].location.begin.line, yystack_[4].location.begin.column);
    }
#line 1347 "yacc.tab.c"
    break;

  case 35: // BREAK_STMT: BREAK SEMICOLON
#line 315 "yacc.y"
                    {
        yylhs.value.as < FE::AST::StmtNode* > () = new BreakStmt(yystack_[1].location.begin.line, yystack_[1].location.begin.column);
    }
#line 1355 "yacc.tab.c"
    break;

  case 36: // PARAM_DECLARATOR: TYPE IDENT
#line 324 "yacc.y"
               {
        Entry* entry = Entry::getEntry(yystack_[0].value.as < std::string > ());
        yylhs.value.as < FE::AST::ParamDeclarator* > () = new ParamDeclarator(yystack_[1].value.as < FE::AST::Type* > (), entry, nullptr, yystack_[1].location.begin.line, yystack_[1].location.begin.column);
    }
#line 1364 "yacc.tab.c"
    break;

  case 37: // PARAM_DECLARATOR: TYPE IDENT PARAM_ARRAY_DIMS
#line 328 "yacc.y"
                                  {
        Entry* entry = Entry::getEntry(yystack_[1].value.as < std::string > ());
        yylhs.value.as < FE::AST::ParamDeclarator* > () = new ParamDeclarator(yystack_[2].value.as < FE::AST::Type* > (), entry, yystack_[0].value.as < std::vector<FE::AST::ExprNode*>* > (), yystack_[2].location.begin.line, yystack_[2].location.begin.column);
    }
#line 1373 "yacc.tab.c"
    break;

  case 38: // PARAM_ARRAY_DIMS: LBRACKET RBRACKET PARAM_ARRAY_DIMS_TAIL
#line 337 "yacc.y"
                                            {
        auto v = new std::vector<ExprNode*>();
        v->emplace_back(new LiteralExpr(-1, yystack_[2].location.begin.line, yystack_[2].location.begin.column));
        if (yystack_[0].value.as < std::vector<FE::AST::ExprNode*>* > () && !yystack_[0].value.as < std::vector<FE::AST::ExprNode*>* > ()->empty()) v->insert(v->end(), yystack_[0].value.as < std::vector<FE::AST::ExprNode*>* > ()->begin(), yystack_[0].value.as < std::vector<FE::AST::ExprNode*>* > ()->end());
        yylhs.value.as < std::vector<FE::AST::ExprNode*>* > () = v;
    }
#line 1384 "yacc.tab.c"
    break;

  case 39: // PARAM_ARRAY_DIMS: LBRACKET NOCOMMA_EXPR RBRACKET PARAM_ARRAY_DIMS_TAIL
#line 343 "yacc.y"
                                                           {
        auto v = new std::vector<ExprNode*>();
        v->push_back(yystack_[2].value.as < FE::AST::ExprNode* > ());
        if (yystack_[0].value.as < std::vector<FE::AST::ExprNode*>* > () && !yystack_[0].value.as < std::vector<FE::AST::ExprNode*>* > ()->empty()) v->insert(v->end(), yystack_[0].value.as < std::vector<FE::AST::ExprNode*>* > ()->begin(), yystack_[0].value.as < std::vector<FE::AST::ExprNode*>* > ()->end());
        yylhs.value.as < std::vector<FE::AST::ExprNode*>* > () = v;
    }
#line 1395 "yacc.tab.c"
    break;

  case 40: // PARAM_ARRAY_DIMS_TAIL: %empty
#line 352 "yacc.y"
                {
        yylhs.value.as < std::vector<FE::AST::ExprNode*>* > () = new std::vector<ExprNode*>();
    }
#line 1403 "yacc.tab.c"
    break;

  case 41: // PARAM_ARRAY_DIMS_TAIL: PARAM_ARRAY_DIMS_TAIL LBRACKET NOCOMMA_EXPR RBRACKET
#line 355 "yacc.y"
                                                           {
        yylhs.value.as < std::vector<FE::AST::ExprNode*>* > () = yystack_[3].value.as < std::vector<FE::AST::ExprNode*>* > ();
        yylhs.value.as < std::vector<FE::AST::ExprNode*>* > ()->push_back(yystack_[1].value.as < FE::AST::ExprNode* > ());
    }
#line 1412 "yacc.tab.c"
    break;

  case 42: // PARAM_DECLARATOR_LIST: %empty
#line 362 "yacc.y"
                {
        yylhs.value.as < std::vector<FE::AST::ParamDeclarator*>* > () = new std::vector<ParamDeclarator*>();
    }
#line 1420 "yacc.tab.c"
    break;

  case 43: // PARAM_DECLARATOR_LIST: PARAM_DECLARATOR
#line 365 "yacc.y"
                       {
        yylhs.value.as < std::vector<FE::AST::ParamDeclarator*>* > () = new std::vector<ParamDeclarator*>();
        yylhs.value.as < std::vector<FE::AST::ParamDeclarator*>* > ()->push_back(yystack_[0].value.as < FE::AST::ParamDeclarator* > ());
    }
#line 1429 "yacc.tab.c"
    break;

  case 44: // PARAM_DECLARATOR_LIST: PARAM_DECLARATOR_LIST COMMA PARAM_DECLARATOR
#line 369 "yacc.y"
                                                   {
        yylhs.value.as < std::vector<FE::AST::ParamDeclarator*>* > () = yystack_[2].value.as < std::vector<FE::AST::ParamDeclarator*>* > ();
        yylhs.value.as < std::vector<FE::AST::ParamDeclarator*>* > ()->push_back(yystack_[0].value.as < FE::AST::ParamDeclarator* > ());
    }
#line 1438 "yacc.tab.c"
    break;

  case 45: // VAR_DECLARATOR: LEFT_VAL_EXPR
#line 376 "yacc.y"
                  {
        yylhs.value.as < FE::AST::VarDeclarator* > () = new VarDeclarator(yystack_[0].value.as < FE::AST::ExprNode* > (), nullptr, yystack_[0].location.begin.line, yystack_[0].location.begin.column);
    }
#line 1446 "yacc.tab.c"
    break;

  case 46: // VAR_DECLARATOR: LEFT_VAL_EXPR ASSIGN INITIALIZER
#line 379 "yacc.y"
                                       {
        yylhs.value.as < FE::AST::VarDeclarator* > () = new VarDeclarator(yystack_[2].value.as < FE::AST::ExprNode* > (), yystack_[0].value.as < FE::AST::InitDecl* > (), yystack_[2].location.begin.line, yystack_[2].location.begin.column);
    }
#line 1454 "yacc.tab.c"
    break;

  case 47: // VAR_DECLARATOR_LIST: VAR_DECLARATOR
#line 385 "yacc.y"
                   {
        yylhs.value.as < std::vector<FE::AST::VarDeclarator*>* > () = new std::vector<VarDeclarator*>();
        yylhs.value.as < std::vector<FE::AST::VarDeclarator*>* > ()->push_back(yystack_[0].value.as < FE::AST::VarDeclarator* > ());
    }
#line 1463 "yacc.tab.c"
    break;

  case 48: // VAR_DECLARATOR_LIST: VAR_DECLARATOR_LIST COMMA VAR_DECLARATOR
#line 389 "yacc.y"
                                               {
        yylhs.value.as < std::vector<FE::AST::VarDeclarator*>* > () = yystack_[2].value.as < std::vector<FE::AST::VarDeclarator*>* > ();
        yylhs.value.as < std::vector<FE::AST::VarDeclarator*>* > ()->push_back(yystack_[0].value.as < FE::AST::VarDeclarator* > ());
    }
#line 1472 "yacc.tab.c"
    break;

  case 49: // INITIALIZER: ASSIGN_EXPR
#line 396 "yacc.y"
                {
        yylhs.value.as < FE::AST::InitDecl* > () = new Initializer(yystack_[0].value.as < FE::AST::ExprNode* > (), yystack_[0].location.begin.line, yystack_[0].location.begin.column);
    }
#line 1480 "yacc.tab.c"
    break;

  case 50: // INITIALIZER: LBRACE RBRACE
#line 399 "yacc.y"
                    {
        yylhs.value.as < FE::AST::InitDecl* > () = new InitializerList(new std::vector<InitDecl*>(), yystack_[1].location.begin.line, yystack_[1].location.begin.column);
    }
#line 1488 "yacc.tab.c"
    break;

  case 51: // INITIALIZER: LBRACE INITIALIZER_LIST RBRACE
#line 402 "yacc.y"
                                     {
        yylhs.value.as < FE::AST::InitDecl* > () = new InitializerList(yystack_[1].value.as < std::vector<FE::AST::InitDecl*>* > (), yystack_[2].location.begin.line, yystack_[2].location.begin.column);
    }
#line 1496 "yacc.tab.c"
    break;

  case 52: // INITIALIZER_LIST: INITIALIZER
#line 408 "yacc.y"
                {
        yylhs.value.as < std::vector<FE::AST::InitDecl*>* > () = new std::vector<InitDecl*>();
        yylhs.value.as < std::vector<FE::AST::InitDecl*>* > ()->push_back(yystack_[0].value.as < FE::AST::InitDecl* > ());
    }
#line 1505 "yacc.tab.c"
    break;

  case 53: // INITIALIZER_LIST: INITIALIZER_LIST COMMA INITIALIZER
#line 412 "yacc.y"
                                         {
        yylhs.value.as < std::vector<FE::AST::InitDecl*>* > () = yystack_[2].value.as < std::vector<FE::AST::InitDecl*>* > ();
        yylhs.value.as < std::vector<FE::AST::InitDecl*>* > ()->push_back(yystack_[0].value.as < FE::AST::InitDecl* > ());
    }
#line 1514 "yacc.tab.c"
    break;

  case 54: // ASSIGN_EXPR: LEFT_VAL_EXPR ASSIGN NOCOMMA_EXPR
#line 419 "yacc.y"
                                      {
        yylhs.value.as < FE::AST::ExprNode* > () = new BinaryExpr(Operator::ASSIGN, yystack_[2].value.as < FE::AST::ExprNode* > (), yystack_[0].value.as < FE::AST::ExprNode* > (), yystack_[1].location.begin.line, yystack_[1].location.begin.column);
    }
#line 1522 "yacc.tab.c"
    break;

  case 55: // EXPR_LIST: NOCOMMA_EXPR
#line 426 "yacc.y"
                 {
        yylhs.value.as < std::vector<FE::AST::ExprNode*>* > () = new std::vector<ExprNode*>();
        yylhs.value.as < std::vector<FE::AST::ExprNode*>* > ()->push_back(yystack_[0].value.as < FE::AST::ExprNode* > ());
    }
#line 1531 "yacc.tab.c"
    break;

  case 56: // EXPR_LIST: EXPR_LIST COMMA NOCOMMA_EXPR
#line 430 "yacc.y"
                                   {
        yylhs.value.as < std::vector<FE::AST::ExprNode*>* > () = yystack_[2].value.as < std::vector<FE::AST::ExprNode*>* > ();
        yylhs.value.as < std::vector<FE::AST::ExprNode*>* > ()->push_back(yystack_[0].value.as < FE::AST::ExprNode* > ());
    }
#line 1540 "yacc.tab.c"
    break;

  case 57: // EXPR: NOCOMMA_EXPR
#line 437 "yacc.y"
                 {
        yylhs.value.as < FE::AST::ExprNode* > () = yystack_[0].value.as < FE::AST::ExprNode* > ();
    }
#line 1548 "yacc.tab.c"
    break;

  case 58: // EXPR: EXPR COMMA NOCOMMA_EXPR
#line 440 "yacc.y"
                              {
        if (yystack_[2].value.as < FE::AST::ExprNode* > ()->isCommaExpr()) {
            CommaExpr* ce = static_cast<CommaExpr*>(yystack_[2].value.as < FE::AST::ExprNode* > ());
            ce->exprs->push_back(yystack_[0].value.as < FE::AST::ExprNode* > ());
            yylhs.value.as < FE::AST::ExprNode* > () = ce;
        } else {
            auto vec = new std::vector<ExprNode*>();
            vec->push_back(yystack_[2].value.as < FE::AST::ExprNode* > ());
            vec->push_back(yystack_[0].value.as < FE::AST::ExprNode* > ());
            yylhs.value.as < FE::AST::ExprNode* > () = new CommaExpr(vec, yystack_[2].value.as < FE::AST::ExprNode* > ()->line_num, yystack_[2].value.as < FE::AST::ExprNode* > ()->col_num);
        }
    }
#line 1565 "yacc.tab.c"
    break;

  case 59: // NOCOMMA_EXPR: LOGICAL_OR_EXPR
#line 455 "yacc.y"
                    {
        yylhs.value.as < FE::AST::ExprNode* > () = yystack_[0].value.as < FE::AST::ExprNode* > ();
    }
#line 1573 "yacc.tab.c"
    break;

  case 60: // NOCOMMA_EXPR: ASSIGN_EXPR
#line 458 "yacc.y"
                  {
        yylhs.value.as < FE::AST::ExprNode* > () = yystack_[0].value.as < FE::AST::ExprNode* > ();
    }
#line 1581 "yacc.tab.c"
    break;

  case 61: // LOGICAL_OR_EXPR: LOGICAL_AND_EXPR
#line 464 "yacc.y"
                     {
        yylhs.value.as < FE::AST::ExprNode* > () = yystack_[0].value.as < FE::AST::ExprNode* > ();
    }
#line 1589 "yacc.tab.c"
    break;

  case 62: // LOGICAL_OR_EXPR: LOGICAL_OR_EXPR OR LOGICAL_AND_EXPR
#line 467 "yacc.y"
                                          {
        yylhs.value.as < FE::AST::ExprNode* > () = new BinaryExpr(Operator::OR, yystack_[2].value.as < FE::AST::ExprNode* > (), yystack_[0].value.as < FE::AST::ExprNode* > (), yystack_[1].location.begin.line, yystack_[1].location.begin.column);
    }
#line 1597 "yacc.tab.c"
    break;

  case 63: // LOGICAL_AND_EXPR: EQUALITY_EXPR
#line 473 "yacc.y"
                  {
        yylhs.value.as < FE::AST::ExprNode* > () = yystack_[0].value.as < FE::AST::ExprNode* > ();
    }
#line 1605 "yacc.tab.c"
    break;

  case 64: // LOGICAL_AND_EXPR: LOGICAL_AND_EXPR AND EQUALITY_EXPR
#line 476 "yacc.y"
                                         {
        yylhs.value.as < FE::AST::ExprNode* > () = new BinaryExpr(Operator::AND, yystack_[2].value.as < FE::AST::ExprNode* > (), yystack_[0].value.as < FE::AST::ExprNode* > (), yystack_[1].location.begin.line, yystack_[1].location.begin.column);
    }
#line 1613 "yacc.tab.c"
    break;

  case 65: // EQUALITY_EXPR: RELATIONAL_EXPR
#line 482 "yacc.y"
                    {
        yylhs.value.as < FE::AST::ExprNode* > () = yystack_[0].value.as < FE::AST::ExprNode* > ();
    }
#line 1621 "yacc.tab.c"
    break;

  case 66: // EQUALITY_EXPR: EQUALITY_EXPR EQ RELATIONAL_EXPR
#line 485 "yacc.y"
                                       {
        yylhs.value.as < FE::AST::ExprNode* > () = new BinaryExpr(Operator::EQ, yystack_[2].value.as < FE::AST::ExprNode* > (), yystack_[0].value.as < FE::AST::ExprNode* > (), yystack_[1].location.begin.line, yystack_[1].location.begin.column);
    }
#line 1629 "yacc.tab.c"
    break;

  case 67: // EQUALITY_EXPR: EQUALITY_EXPR NE RELATIONAL_EXPR
#line 488 "yacc.y"
                                       {
        yylhs.value.as < FE::AST::ExprNode* > () = new BinaryExpr(Operator::NEQ, yystack_[2].value.as < FE::AST::ExprNode* > (), yystack_[0].value.as < FE::AST::ExprNode* > (), yystack_[1].location.begin.line, yystack_[1].location.begin.column);
    }
#line 1637 "yacc.tab.c"
    break;

  case 68: // RELATIONAL_EXPR: ADDSUB_EXPR
#line 494 "yacc.y"
                {
        yylhs.value.as < FE::AST::ExprNode* > () = yystack_[0].value.as < FE::AST::ExprNode* > ();
    }
#line 1645 "yacc.tab.c"
    break;

  case 69: // RELATIONAL_EXPR: RELATIONAL_EXPR LT ADDSUB_EXPR
#line 497 "yacc.y"
                                     {
        yylhs.value.as < FE::AST::ExprNode* > () = new BinaryExpr(Operator::LT, yystack_[2].value.as < FE::AST::ExprNode* > (), yystack_[0].value.as < FE::AST::ExprNode* > (), yystack_[1].location.begin.line, yystack_[1].location.begin.column);
    }
#line 1653 "yacc.tab.c"
    break;

  case 70: // RELATIONAL_EXPR: RELATIONAL_EXPR LE ADDSUB_EXPR
#line 500 "yacc.y"
                                     {
        yylhs.value.as < FE::AST::ExprNode* > () = new BinaryExpr(Operator::LE, yystack_[2].value.as < FE::AST::ExprNode* > (), yystack_[0].value.as < FE::AST::ExprNode* > (), yystack_[1].location.begin.line, yystack_[1].location.begin.column);
    }
#line 1661 "yacc.tab.c"
    break;

  case 71: // RELATIONAL_EXPR: RELATIONAL_EXPR GT ADDSUB_EXPR
#line 503 "yacc.y"
                                     {
        yylhs.value.as < FE::AST::ExprNode* > () = new BinaryExpr(Operator::GT, yystack_[2].value.as < FE::AST::ExprNode* > (), yystack_[0].value.as < FE::AST::ExprNode* > (), yystack_[1].location.begin.line, yystack_[1].location.begin.column);
    }
#line 1669 "yacc.tab.c"
    break;

  case 72: // RELATIONAL_EXPR: RELATIONAL_EXPR GE ADDSUB_EXPR
#line 506 "yacc.y"
                                     {
        yylhs.value.as < FE::AST::ExprNode* > () = new BinaryExpr(Operator::GE, yystack_[2].value.as < FE::AST::ExprNode* > (), yystack_[0].value.as < FE::AST::ExprNode* > (), yystack_[1].location.begin.line, yystack_[1].location.begin.column);
    }
#line 1677 "yacc.tab.c"
    break;

  case 73: // ADDSUB_EXPR: MULDIV_EXPR
#line 512 "yacc.y"
                {
        yylhs.value.as < FE::AST::ExprNode* > () = yystack_[0].value.as < FE::AST::ExprNode* > ();
    }
#line 1685 "yacc.tab.c"
    break;

  case 74: // ADDSUB_EXPR: ADDSUB_EXPR PLUS MULDIV_EXPR
#line 515 "yacc.y"
                                   {
        yylhs.value.as < FE::AST::ExprNode* > () = new BinaryExpr(Operator::ADD, yystack_[2].value.as < FE::AST::ExprNode* > (), yystack_[0].value.as < FE::AST::ExprNode* > (), yystack_[1].location.begin.line, yystack_[1].location.begin.column);
    }
#line 1693 "yacc.tab.c"
    break;

  case 75: // ADDSUB_EXPR: ADDSUB_EXPR MINUS MULDIV_EXPR
#line 518 "yacc.y"
                                    {
        yylhs.value.as < FE::AST::ExprNode* > () = new BinaryExpr(Operator::SUB, yystack_[2].value.as < FE::AST::ExprNode* > (), yystack_[0].value.as < FE::AST::ExprNode* > (), yystack_[1].location.begin.line, yystack_[1].location.begin.column);
    }
#line 1701 "yacc.tab.c"
    break;

  case 76: // MULDIV_EXPR: UNARY_EXPR
#line 524 "yacc.y"
               {
        yylhs.value.as < FE::AST::ExprNode* > () = yystack_[0].value.as < FE::AST::ExprNode* > ();
    }
#line 1709 "yacc.tab.c"
    break;

  case 77: // MULDIV_EXPR: MULDIV_EXPR STAR UNARY_EXPR
#line 527 "yacc.y"
                                  {
        yylhs.value.as < FE::AST::ExprNode* > () = new BinaryExpr(Operator::MUL, yystack_[2].value.as < FE::AST::ExprNode* > (), yystack_[0].value.as < FE::AST::ExprNode* > (), yystack_[1].location.begin.line, yystack_[1].location.begin.column);
    }
#line 1717 "yacc.tab.c"
    break;

  case 78: // MULDIV_EXPR: MULDIV_EXPR SLASH UNARY_EXPR
#line 530 "yacc.y"
                                   {
        yylhs.value.as < FE::AST::ExprNode* > () = new BinaryExpr(Operator::DIV, yystack_[2].value.as < FE::AST::ExprNode* > (), yystack_[0].value.as < FE::AST::ExprNode* > (), yystack_[1].location.begin.line, yystack_[1].location.begin.column);
    }
#line 1725 "yacc.tab.c"
    break;

  case 79: // MULDIV_EXPR: MULDIV_EXPR MOD UNARY_EXPR
#line 533 "yacc.y"
                                 {
        yylhs.value.as < FE::AST::ExprNode* > () = new BinaryExpr(Operator::MOD, yystack_[2].value.as < FE::AST::ExprNode* > (), yystack_[0].value.as < FE::AST::ExprNode* > (), yystack_[1].location.begin.line, yystack_[1].location.begin.column);
    }
#line 1733 "yacc.tab.c"
    break;

  case 80: // UNARY_EXPR: BASIC_EXPR
#line 539 "yacc.y"
               {
        yylhs.value.as < FE::AST::ExprNode* > () = yystack_[0].value.as < FE::AST::ExprNode* > ();
    }
#line 1741 "yacc.tab.c"
    break;

  case 81: // UNARY_EXPR: UNARY_OP UNARY_EXPR
#line 542 "yacc.y"
                          {
        yylhs.value.as < FE::AST::ExprNode* > () = new UnaryExpr(yystack_[1].value.as < FE::AST::Operator > (), yystack_[0].value.as < FE::AST::ExprNode* > (), yystack_[0].value.as < FE::AST::ExprNode* > ()->line_num, yystack_[0].value.as < FE::AST::ExprNode* > ()->col_num);
    }
#line 1749 "yacc.tab.c"
    break;

  case 82: // BASIC_EXPR: LITERAL_EXPR
#line 548 "yacc.y"
                 {
        yylhs.value.as < FE::AST::ExprNode* > () = yystack_[0].value.as < FE::AST::ExprNode* > ();
    }
#line 1757 "yacc.tab.c"
    break;

  case 83: // BASIC_EXPR: LEFT_VAL_EXPR
#line 551 "yacc.y"
                    {
        yylhs.value.as < FE::AST::ExprNode* > () = yystack_[0].value.as < FE::AST::ExprNode* > ();
    }
#line 1765 "yacc.tab.c"
    break;

  case 84: // BASIC_EXPR: LPAREN EXPR RPAREN
#line 554 "yacc.y"
                         {
        yylhs.value.as < FE::AST::ExprNode* > () = yystack_[1].value.as < FE::AST::ExprNode* > ();
    }
#line 1773 "yacc.tab.c"
    break;

  case 85: // BASIC_EXPR: FUNC_CALL_EXPR
#line 557 "yacc.y"
                     {
        yylhs.value.as < FE::AST::ExprNode* > () = yystack_[0].value.as < FE::AST::ExprNode* > ();
    }
#line 1781 "yacc.tab.c"
    break;

  case 86: // FUNC_CALL_EXPR: IDENT LPAREN RPAREN
#line 563 "yacc.y"
                        {
        std::string funcName = yystack_[2].value.as < std::string > ();
        if (funcName != "starttime" && funcName != "stoptime")
        {
            Entry* entry = Entry::getEntry(funcName);
            yylhs.value.as < FE::AST::ExprNode* > () = new CallExpr(entry, nullptr, yystack_[2].location.begin.line, yystack_[2].location.begin.column);
        }
        else
        {    
            funcName = "_sysy_" + funcName;
            std::vector<ExprNode*>* args = new std::vector<ExprNode*>();
            args->emplace_back(new LiteralExpr(static_cast<int>(yystack_[2].location.begin.line), yystack_[2].location.begin.line, yystack_[2].location.begin.column));
            yylhs.value.as < FE::AST::ExprNode* > () = new CallExpr(Entry::getEntry(funcName), args, yystack_[2].location.begin.line, yystack_[2].location.begin.column);
        }
    }
#line 1801 "yacc.tab.c"
    break;

  case 87: // FUNC_CALL_EXPR: IDENT LPAREN EXPR_LIST RPAREN
#line 578 "yacc.y"
                                    {
        Entry* entry = Entry::getEntry(yystack_[3].value.as < std::string > ());
        yylhs.value.as < FE::AST::ExprNode* > () = new CallExpr(entry, yystack_[1].value.as < std::vector<FE::AST::ExprNode*>* > (), yystack_[3].location.begin.line, yystack_[3].location.begin.column);
    }
#line 1810 "yacc.tab.c"
    break;

  case 88: // ARRAY_DIMENSION_EXPR: LBRACKET NOCOMMA_EXPR RBRACKET
#line 585 "yacc.y"
                                   {
        yylhs.value.as < FE::AST::ExprNode* > () = yystack_[1].value.as < FE::AST::ExprNode* > ();
    }
#line 1818 "yacc.tab.c"
    break;

  case 89: // ARRAY_DIMENSION_EXPR_LIST: ARRAY_DIMENSION_EXPR
#line 591 "yacc.y"
                         {
        yylhs.value.as < std::vector<FE::AST::ExprNode*>* > () = new std::vector<ExprNode*>();
        yylhs.value.as < std::vector<FE::AST::ExprNode*>* > ()->push_back(yystack_[0].value.as < FE::AST::ExprNode* > ());
    }
#line 1827 "yacc.tab.c"
    break;

  case 90: // ARRAY_DIMENSION_EXPR_LIST: ARRAY_DIMENSION_EXPR_LIST ARRAY_DIMENSION_EXPR
#line 595 "yacc.y"
                                                     {
        yylhs.value.as < std::vector<FE::AST::ExprNode*>* > () = yystack_[1].value.as < std::vector<FE::AST::ExprNode*>* > ();
        yylhs.value.as < std::vector<FE::AST::ExprNode*>* > ()->push_back(yystack_[0].value.as < FE::AST::ExprNode* > ());
    }
#line 1836 "yacc.tab.c"
    break;

  case 91: // LEFT_VAL_EXPR: IDENT
#line 602 "yacc.y"
          {
        Entry* entry = Entry::getEntry(yystack_[0].value.as < std::string > ());
        yylhs.value.as < FE::AST::ExprNode* > () = new LeftValExpr(entry, nullptr, yystack_[0].location.begin.line, yystack_[0].location.begin.column);
    }
#line 1845 "yacc.tab.c"
    break;

  case 92: // LEFT_VAL_EXPR: IDENT ARRAY_DIMENSION_EXPR_LIST
#line 606 "yacc.y"
                                      {
        Entry* entry = Entry::getEntry(yystack_[1].value.as < std::string > ());
        yylhs.value.as < FE::AST::ExprNode* > () = new LeftValExpr(entry, yystack_[0].value.as < std::vector<FE::AST::ExprNode*>* > (), yystack_[1].location.begin.line, yystack_[1].location.begin.column);
    }
#line 1854 "yacc.tab.c"
    break;

  case 93: // LITERAL_EXPR: INT_CONST
#line 613 "yacc.y"
              {
        yylhs.value.as < FE::AST::ExprNode* > () = new LiteralExpr(yystack_[0].value.as < int > (), yystack_[0].location.begin.line, yystack_[0].location.begin.column);
    }
#line 1862 "yacc.tab.c"
    break;

  case 94: // LITERAL_EXPR: FLOAT_CONST
#line 616 "yacc.y"
                  {
        yylhs.value.as < FE::AST::ExprNode* > () = new LiteralExpr(yystack_[0].value.as < float > (), yystack_[0].location.begin.line, yystack_[0].location.begin.column);
    }
#line 1870 "yacc.tab.c"
    break;

  case 95: // LITERAL_EXPR: LL_CONST
#line 619 "yacc.y"
               {
        yylhs.value.as < FE::AST::ExprNode* > () = new LiteralExpr(yystack_[0].value.as < long long > (), yystack_[0].location.begin.line, yystack_[0].location.begin.column);
    }
#line 1878 "yacc.tab.c"
    break;

  case 96: // TYPE: INT
#line 625 "yacc.y"
        {
        yylhs.value.as < FE::AST::Type* > () = FE::AST::intType;
    }
#line 1886 "yacc.tab.c"
    break;

  case 97: // TYPE: FLOAT
#line 628 "yacc.y"
            {
        yylhs.value.as < FE::AST::Type* > () = FE::AST::floatType;
    }
#line 1894 "yacc.tab.c"
    break;

  case 98: // UNARY_OP: PLUS
#line 634 "yacc.y"
         {
        yylhs.value.as < FE::AST::Operator > () = Operator::ADD;
    }
#line 1902 "yacc.tab.c"
    break;

  case 99: // UNARY_OP: MINUS
#line 637 "yacc.y"
            {
        yylhs.value.as < FE::AST::Operator > () = Operator::SUB;
    }
#line 1910 "yacc.tab.c"
    break;

  case 100: // UNARY_OP: NOT
#line 640 "yacc.y"
          {
        yylhs.value.as < FE::AST::Operator > () = Operator::NOT;
    }
#line 1918 "yacc.tab.c"
    break;


#line 1922 "yacc.tab.c"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        context yyctx (*this, yyla);
        std::string msg = yysyntax_error_ (yyctx);
        error (yyla.location, YY_MOVE (msg));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yyerror_range[1].location = yystack_[0].location;
        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
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


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
   YaccParser ::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
   YaccParser ::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
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
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }

  std::string
   YaccParser ::symbol_name (symbol_kind_type yysymbol)
  {
    return yytnamerr_ (yytname_[yysymbol]);
  }



  //  YaccParser ::context.
   YaccParser ::context::context (const  YaccParser & yyparser, const symbol_type& yyla)
    : yyparser_ (yyparser)
    , yyla_ (yyla)
  {}

  int
   YaccParser ::context::expected_tokens (symbol_kind_type yyarg[], int yyargn) const
  {
    // Actual number of expected tokens
    int yycount = 0;

    const int yyn = yypact_[+yyparser_.yystack_[0].state];
    if (!yy_pact_value_is_default_ (yyn))
      {
        /* Start YYX at -YYN if negative to avoid negative indexes in
           YYCHECK.  In other words, skip the first -YYN actions for
           this state because they are default actions.  */
        const int yyxbegin = yyn < 0 ? -yyn : 0;
        // Stay within bounds of both yycheck and yytname.
        const int yychecklim = yylast_ - yyn + 1;
        const int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
        for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
          if (yycheck_[yyx + yyn] == yyx && yyx != symbol_kind::S_YYerror
              && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
            {
              if (!yyarg)
                ++yycount;
              else if (yycount == yyargn)
                return 0;
              else
                yyarg[yycount++] = YY_CAST (symbol_kind_type, yyx);
            }
      }

    if (yyarg && yycount == 0 && 0 < yyargn)
      yyarg[0] = symbol_kind::S_YYEMPTY;
    return yycount;
  }






  int
   YaccParser ::yy_syntax_error_arguments_ (const context& yyctx,
                                                 symbol_kind_type yyarg[], int yyargn) const
  {
    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state merging
         (from LALR or IELR) and default reductions corrupt the expected
         token list.  However, the list is correct for canonical LR with
         one exception: it will still contain any token that will not be
         accepted due to an error action in a later state.
    */

    if (!yyctx.lookahead ().empty ())
      {
        if (yyarg)
          yyarg[0] = yyctx.token ();
        int yyn = yyctx.expected_tokens (yyarg ? yyarg + 1 : yyarg, yyargn - 1);
        return yyn + 1;
      }
    return 0;
  }

  // Generate an error message.
  std::string
   YaccParser ::yysyntax_error_ (const context& yyctx) const
  {
    // Its maximum.
    enum { YYARGS_MAX = 5 };
    // Arguments of yyformat.
    symbol_kind_type yyarg[YYARGS_MAX];
    int yycount = yy_syntax_error_arguments_ (yyctx, yyarg, YYARGS_MAX);

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    std::ptrdiff_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += symbol_name (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char  YaccParser ::yypact_ninf_ = -122;

  const signed char  YaccParser ::yytable_ninf_ = -1;

  const short
   YaccParser ::yypact_[] =
  {
     245,  -122,  -122,  -122,  -122,  -122,  -122,    73,    -6,     0,
       5,   -10,    18,   261,    15,  -122,   309,    74,  -122,  -122,
    -122,     3,   245,  -122,  -122,  -122,  -122,    58,  -122,  -122,
    -122,  -122,  -122,  -122,  -122,  -122,    26,  -122,    67,    72,
      19,    33,    69,    -2,  -122,  -122,  -122,    89,  -122,   124,
     309,   277,   309,  -122,   102,   309,     6,   309,  -122,  -122,
    -122,   120,   148,    90,  -122,   146,  -122,  -122,  -122,  -122,
    -122,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,    96,  -122,   140,   135,
    -122,  -122,  -122,   100,  -122,   142,  -122,   101,   151,   129,
     148,   106,  -122,   102,   140,  -122,  -122,  -122,    72,    19,
      33,    33,    69,    69,    69,    69,    -2,    -2,  -122,  -122,
    -122,  -122,    15,   148,    17,   309,  -122,  -122,   245,   309,
     309,   245,  -122,   109,   167,  -122,    -7,  -122,  -122,    89,
    -122,   168,   149,   162,  -122,    15,   174,   178,  -122,  -122,
     -12,   245,   309,   309,  -122,   179,  -122,   295,  -122,    17,
    -122,  -122,   113,   139,  -122,   212,  -122,   182,  -122,   245,
     245,  -122,   180,  -122,  -122,  -122,   309,   180,   185,  -122
  };

  const signed char
   YaccParser ::yydefact_[] =
  {
       0,    93,    95,    94,    97,    17,    96,    91,     0,     0,
       0,     0,     0,     0,     0,    16,     0,     0,    98,    99,
     100,     0,     2,     4,     9,    12,     6,     0,     7,     8,
      10,    11,    15,    14,    13,    60,     0,    57,    59,    61,
      63,    65,    68,    73,    76,    80,    85,    83,    82,     0,
       0,     0,     0,    89,    92,     0,     0,     0,    20,    35,
      32,     0,     0,     0,    18,     0,     1,     3,     5,    24,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    91,    47,    22,    45,
      81,    83,    86,     0,    55,     0,    90,     0,     0,     0,
       0,     0,    33,    91,    23,    84,    19,    58,    62,    64,
      66,    67,    69,    70,    71,    72,    74,    75,    77,    78,
      79,    54,    42,     0,     0,     0,    87,    88,     0,     0,
       0,     0,    43,     0,     0,    48,     0,    46,    49,     0,
      56,    30,     0,     0,    34,     0,     0,    36,    50,    52,
       0,     0,     0,     0,    44,     0,    27,     0,    37,     0,
      51,    31,     0,     0,    25,     0,    40,     0,    53,     0,
       0,    26,    38,    40,    28,    29,     0,    39,     0,    41
  };

  const short
   YaccParser ::yypgoto_[] =
  {
    -122,  -122,   -16,   -22,  -122,  -122,  -122,   163,  -122,  -122,
    -122,  -122,  -122,  -122,  -122,  -122,    62,  -122,    47,  -122,
     107,   169,  -121,  -122,  -106,  -122,   -11,   -44,  -122,   160,
     164,   123,    16,   119,   -28,  -122,  -122,   186,  -122,   -13,
    -122,    -8,  -122
  };

  const unsigned char
   YaccParser ::yydefgoto_[] =
  {
       0,    21,    22,    23,    24,    25,    26,    27,    28,   156,
      29,    30,    31,    32,    33,    34,   132,   158,   172,   133,
      87,    88,   137,   150,    35,    93,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    53,    54,    47,
      48,    49,    50
  };

  const unsigned char
   YaccParser ::yytable_[] =
  {
      68,    65,    61,    66,   103,    63,    62,    94,    95,     1,
       2,     3,     4,   159,    58,   149,     6,     7,   138,   160,
      55,     4,    90,   136,   148,     6,    56,   107,   103,    14,
     138,    57,    16,    82,    83,    84,    89,    91,   168,    18,
      19,   121,    59,    68,    97,    99,   101,   136,   100,    89,
      70,    71,    20,   138,   118,   119,   120,    74,    75,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    67,    76,    77,    78,    79,     1,     2,     3,
       4,   140,    69,     5,     6,     7,     8,    89,     9,    10,
      11,    12,   112,   113,   114,   115,    13,    14,    15,    51,
      16,    52,    80,    81,    17,    64,   141,    18,    19,   144,
      89,   139,    72,   167,   134,    71,    73,   105,   142,   143,
      20,    85,   122,   139,    52,   125,    71,   126,   128,   161,
      52,    71,   178,   131,   145,    86,   146,   134,    71,   165,
     169,   162,   163,    68,   102,    71,   139,   174,   175,     1,
       2,     3,     4,   130,    71,     5,     6,     7,     8,   103,
       9,    10,    11,    12,    71,   123,   170,   124,    13,    14,
      15,   127,    16,   152,    71,   129,    17,   106,   147,    18,
      19,   151,     1,     2,     3,     4,   153,    71,     5,     6,
       7,     8,    20,     9,    10,    11,    12,   110,   111,   116,
     117,    13,    14,    15,   155,    16,   157,   154,   176,    17,
     164,   173,    18,    19,   179,     1,     2,     3,     4,    98,
     177,     5,     6,     7,     8,    20,     9,    10,    11,    12,
     135,   104,   108,     0,    13,    14,    15,   109,    16,     0,
      96,     0,    17,   171,     0,    18,    19,     0,     1,     2,
       3,     4,     0,     0,     5,     6,     7,     8,    20,     9,
      10,    11,    12,     0,     1,     2,     3,    13,    14,    15,
       0,    16,     7,     0,     0,    17,     0,     0,    18,    19,
       1,     2,     3,     0,     0,    60,     0,    16,     7,     0,
       0,    20,     0,     0,    18,    19,     0,     0,     1,     2,
       3,     0,     0,    16,    92,     0,     7,    20,     0,     0,
      18,    19,     1,     2,     3,     0,     0,     0,     0,     0,
       7,    16,     0,    20,   166,     0,     0,     0,    18,    19,
       0,     0,     0,     0,     0,    16,     0,     0,     0,     0,
       0,    20,    18,    19,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20
  };

  const short
   YaccParser ::yycheck_[] =
  {
      22,    17,    13,     0,    11,    16,    14,    51,    52,     3,
       4,     5,     6,    25,    24,   136,    10,    11,   124,    31,
      26,     6,    50,    30,    31,    10,    26,    71,    11,    23,
     136,    26,    26,    35,    36,    37,    49,    50,   159,    33,
      34,    85,    24,    65,    55,    56,    57,    30,    56,    62,
      24,    25,    46,   159,    82,    83,    84,    38,    39,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    69,    40,    41,    42,    43,     3,     4,     5,
       6,   125,    24,     9,    10,    11,    12,   100,    14,    15,
      16,    17,    76,    77,    78,    79,    22,    23,    24,    26,
      26,    28,    33,    34,    30,    31,   128,    33,    34,   131,
     123,   124,    45,   157,   122,    25,    44,    27,   129,   130,
      46,    32,    26,   136,    28,    25,    25,    27,    27,   151,
      28,    25,   176,    27,    25,    11,    27,   145,    25,   155,
      27,   152,   153,   165,    24,    25,   159,   169,   170,     3,
       4,     5,     6,    24,    25,     9,    10,    11,    12,    11,
      14,    15,    16,    17,    25,    25,    27,    32,    22,    23,
      24,    29,    26,    24,    25,    24,    30,    31,    11,    33,
      34,    13,     3,     4,     5,     6,    24,    25,     9,    10,
      11,    12,    46,    14,    15,    16,    17,    74,    75,    80,
      81,    22,    23,    24,    30,    26,    28,   145,    28,    30,
      31,    29,    33,    34,    29,     3,     4,     5,     6,    56,
     173,     9,    10,    11,    12,    46,    14,    15,    16,    17,
     123,    62,    72,    -1,    22,    23,    24,    73,    26,    -1,
      54,    -1,    30,    31,    -1,    33,    34,    -1,     3,     4,
       5,     6,    -1,    -1,     9,    10,    11,    12,    46,    14,
      15,    16,    17,    -1,     3,     4,     5,    22,    23,    24,
      -1,    26,    11,    -1,    -1,    30,    -1,    -1,    33,    34,
       3,     4,     5,    -1,    -1,    24,    -1,    26,    11,    -1,
      -1,    46,    -1,    -1,    33,    34,    -1,    -1,     3,     4,
       5,    -1,    -1,    26,    27,    -1,    11,    46,    -1,    -1,
      33,    34,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,
      11,    26,    -1,    46,    29,    -1,    -1,    -1,    33,    34,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    46,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46
  };

  const signed char
   YaccParser ::yystos_[] =
  {
       0,     3,     4,     5,     6,     9,    10,    11,    12,    14,
      15,    16,    17,    22,    23,    24,    26,    30,    33,    34,
      46,    72,    73,    74,    75,    76,    77,    78,    79,    81,
      82,    83,    84,    85,    86,    95,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   110,   111,   112,
     113,    26,    28,   108,   109,    26,    26,    26,    24,    24,
      24,    97,   112,    97,    31,    73,     0,    69,    74,    24,
      24,    25,    45,    44,    38,    39,    40,    41,    42,    43,
      33,    34,    35,    36,    37,    32,    11,    91,    92,   110,
     105,   110,    27,    96,    98,    98,   108,    97,    78,    97,
     112,    97,    24,    11,    92,    27,    31,    98,   100,   101,
     102,   102,   103,   103,   103,   103,   104,   104,   105,   105,
     105,    98,    26,    25,    32,    25,    27,    29,    27,    24,
      24,    27,    87,    90,   112,    91,    30,    93,    95,   110,
      98,    74,    97,    97,    74,    25,    27,    11,    31,    93,
      94,    13,    24,    24,    87,    30,    80,    28,    88,    25,
      31,    74,    97,    97,    31,    73,    29,    98,    93,    27,
      27,    31,    89,    29,    74,    74,    28,    89,    98,    29
  };

  const signed char
   YaccParser ::yyr1_[] =
  {
       0,    71,    72,    72,    73,    73,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    75,    75,
      76,    77,    78,    78,    79,    80,    80,    81,    82,    82,
      83,    83,    84,    84,    85,    86,    87,    87,    88,    88,
      89,    89,    90,    90,    90,    91,    91,    92,    92,    93,
      93,    93,    94,    94,    95,    96,    96,    97,    97,    98,
      98,    99,    99,   100,   100,   101,   101,   101,   102,   102,
     102,   102,   102,   103,   103,   103,   104,   104,   104,   104,
     105,   105,   106,   106,   106,   106,   107,   107,   108,   109,
     109,   110,   110,   111,   111,   111,   112,   112,   113,   113,
     113
  };

  const signed char
   YaccParser ::yyr2_[] =
  {
       0,     2,     1,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       2,     2,     2,     3,     2,     2,     3,     6,     9,     9,
       5,     7,     2,     3,     5,     2,     2,     3,     3,     4,
       0,     4,     0,     1,     3,     1,     3,     1,     3,     1,
       2,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       1,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       1,     2,     1,     1,     3,     1,     3,     4,     3,     1,
       2,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1
  };


#if YYDEBUG || 1
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
  const char*
  const  YaccParser ::yytname_[] =
  {
  "\"end of file\"", "error", "\"invalid token\"", "INT_CONST",
  "LL_CONST", "FLOAT_CONST", "FLOAT", "STR_CONST", "ERR_TOKEN",
  "SLASH_COMMENT", "INT", "IDENT", "IF", "ELSE", "FOR", "WHILE",
  "CONTINUE", "BREAK", "SWITCH", "CASE", "GOTO", "DO", "RETURN", "CONST",
  "SEMICOLON", "COMMA", "LPAREN", "RPAREN", "LBRACKET", "RBRACKET",
  "LBRACE", "RBRACE", "ASSIGN", "PLUS", "MINUS", "STAR", "SLASH", "MOD",
  "EQ", "NE", "LT", "LE", "GT", "GE", "AND", "OR", "NOT", "BITAND",
  "BITOR", "BITXOR", "BITNOT", "SHL", "SHR", "PLUSEQ", "MINUSEQ", "MULEQ",
  "DIVEQ", "MODEQ", "ANDEQ", "OREQ", "XOREQ", "SHLEQ", "SHREQ", "INC",
  "DEC", "DOT", "ARROW", "COLON", "QUESTION", "END", "THEN", "$accept",
  "PROGRAM", "STMT_LIST", "STMT", "BLOCK_STMT", "CONTINUE_STMT",
  "EXPR_STMT", "VAR_DECLARATION", "VAR_DECL_STMT", "FUNC_BODY",
  "FUNC_DECL_STMT", "FOR_STMT", "IF_STMT", "RETURN_STMT", "WHILE_STMT",
  "BREAK_STMT", "PARAM_DECLARATOR", "PARAM_ARRAY_DIMS",
  "PARAM_ARRAY_DIMS_TAIL", "PARAM_DECLARATOR_LIST", "VAR_DECLARATOR",
  "VAR_DECLARATOR_LIST", "INITIALIZER", "INITIALIZER_LIST", "ASSIGN_EXPR",
  "EXPR_LIST", "EXPR", "NOCOMMA_EXPR", "LOGICAL_OR_EXPR",
  "LOGICAL_AND_EXPR", "EQUALITY_EXPR", "RELATIONAL_EXPR", "ADDSUB_EXPR",
  "MULDIV_EXPR", "UNARY_EXPR", "BASIC_EXPR", "FUNC_CALL_EXPR",
  "ARRAY_DIMENSION_EXPR", "ARRAY_DIMENSION_EXPR_LIST", "LEFT_VAL_EXPR",
  "LITERAL_EXPR", "TYPE", "UNARY_OP", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const short
   YaccParser ::yyrline_[] =
  {
       0,   149,   149,   153,   159,   163,   170,   173,   176,   179,
     182,   185,   189,   192,   195,   198,   201,   204,   211,   214,
     224,   230,   236,   239,   245,   251,   254,   272,   279,   283,
     290,   294,   300,   303,   309,   315,   324,   328,   337,   343,
     352,   355,   362,   365,   369,   376,   379,   385,   389,   396,
     399,   402,   408,   412,   419,   426,   430,   437,   440,   455,
     458,   464,   467,   473,   476,   482,   485,   488,   494,   497,
     500,   503,   506,   512,   515,   518,   524,   527,   530,   533,
     539,   542,   548,   551,   554,   557,   563,   578,   585,   591,
     595,   602,   606,   613,   616,   619,   625,   628,   634,   637,
     640
  };

  void
   YaccParser ::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
   YaccParser ::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG


#line 4 "yacc.y"
} //  FE 
#line 2560 "yacc.tab.c"

#line 645 "yacc.y"


void FE::YaccParser::error(const FE::location& location, const std::string& message)
{
    std::cerr << "msg: " << message << ", error happened at: " << location << std::endl;
}
