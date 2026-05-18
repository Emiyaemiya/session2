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
#line 31 "frontend/parser/yacc.y"

#include <iostream>

#include <frontend/parser/parser.h>
#include <frontend/parser/location.hh>
#include <frontend/parser/scanner.h>
#include <frontend/parser/yacc.h>

using namespace FE;
using namespace FE::AST;

static YaccParser::symbol_type yylex(Scanner& scanner, Parser& parser)
{
    (void)parser;
    return scanner.nextToken();
}

extern size_t errCnt;

#line 59 "frontend/parser/yacc.cpp"

#include "yacc.h"

#ifndef YY_
#if defined YYENABLE_NLS && YYENABLE_NLS
#if ENABLE_NLS
#include <libintl.h>  // FIXME: INFRINGES ON USER NAME SPACE.
#define YY_(msgid) dgettext("bison-runtime", msgid)
#endif
#endif
#ifndef YY_
#define YY_(msgid) msgid
#endif
#endif

// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
#if defined __GNUC__ && !defined __EXCEPTIONS
#define YY_EXCEPTIONS 0
#else
#define YY_EXCEPTIONS 1
#endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
#define YYLLOC_DEFAULT(Current, Rhs, N)                                  \
    do                                                                   \
        if (N)                                                           \
        {                                                                \
            (Current).begin = YYRHSLOC(Rhs, 1).begin;                    \
            (Current).end   = YYRHSLOC(Rhs, N).end;                      \
        }                                                                \
        else { (Current).begin = (Current).end = YYRHSLOC(Rhs, 0).end; } \
    while (false)
#endif

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
#define YYCDEBUG \
    if (yydebug_) (*yycdebug_)

#define YY_SYMBOL_PRINT(Title, Symbol)     \
    do {                                   \
        if (yydebug_)                      \
        {                                  \
            *yycdebug_ << Title << ' ';    \
            yy_print_(*yycdebug_, Symbol); \
            *yycdebug_ << '\n';            \
        }                                  \
    } while (false)

#define YY_REDUCE_PRINT(Rule)                 \
    do {                                      \
        if (yydebug_) yy_reduce_print_(Rule); \
    } while (false)

#define YY_STACK_PRINT()                 \
    do {                                 \
        if (yydebug_) yy_stack_print_(); \
    } while (false)

#else  // !YYDEBUG

#define YYCDEBUG \
    if (false) std::cerr
#define YY_SYMBOL_PRINT(Title, Symbol) YY_USE(Symbol)
#define YY_REDUCE_PRINT(Rule) static_cast<void>(0)
#define YY_STACK_PRINT() static_cast<void>(0)

#endif  // !YYDEBUG

#define yyerrok (yyerrstatus_ = 0)
#define yyclearin (yyla.clear())

#define YYACCEPT goto yyacceptlab
#define YYABORT goto yyabortlab
#define YYERROR goto yyerrorlab
#define YYRECOVERING() (!!yyerrstatus_)

#line 4 "frontend/parser/yacc.y"
namespace FE
{
#line 159 "frontend/parser/yacc.cpp"

    /// Build a parser object.
    YaccParser ::YaccParser(FE::Scanner& scanner_yyarg, FE::Parser& parser_yyarg)
#if YYDEBUG
        : yydebug_(false),
          yycdebug_(&std::cerr),
#else
        :
#endif
          scanner(scanner_yyarg),
          parser(parser_yyarg)
    {}

    YaccParser ::~YaccParser() {}

    YaccParser ::syntax_error::~syntax_error() YY_NOEXCEPT YY_NOTHROW {}

    /*---------.
    | symbol.  |
    `---------*/

    // by_state.
    YaccParser ::by_state::by_state() YY_NOEXCEPT : state(empty_state) {}

    YaccParser ::by_state::by_state(const by_state& that) YY_NOEXCEPT : state(that.state) {}

    void YaccParser ::by_state::clear() YY_NOEXCEPT { state = empty_state; }

    void YaccParser ::by_state::move(by_state& that)
    {
        state = that.state;
        that.clear();
    }

    YaccParser ::by_state::by_state(state_type s) YY_NOEXCEPT : state(s) {}

    YaccParser ::symbol_kind_type YaccParser ::by_state::kind() const YY_NOEXCEPT
    {
        if (state == empty_state)
            return symbol_kind::S_YYEMPTY;
        else
            return YY_CAST(symbol_kind_type, yystos_[+state]);
    }

    YaccParser ::stack_symbol_type::stack_symbol_type() {}

    YaccParser ::stack_symbol_type::stack_symbol_type(YY_RVREF(stack_symbol_type) that)
        : super_type(YY_MOVE(that.state), YY_MOVE(that.location))
    {
        switch (that.kind())
        {
            case symbol_kind::S_ASSIGN_EXPR:           // ASSIGN_EXPR
            case symbol_kind::S_EXPR:                  // EXPR
            case symbol_kind::S_NOCOMMA_EXPR:          // NOCOMMA_EXPR
            case symbol_kind::S_LOGICAL_OR_EXPR:       // LOGICAL_OR_EXPR
            case symbol_kind::S_LOGICAL_AND_EXPR:      // LOGICAL_AND_EXPR
            case symbol_kind::S_EQUALITY_EXPR:         // EQUALITY_EXPR
            case symbol_kind::S_RELATIONAL_EXPR:       // RELATIONAL_EXPR
            case symbol_kind::S_ADDSUB_EXPR:           // ADDSUB_EXPR
            case symbol_kind::S_MULDIV_EXPR:           // MULDIV_EXPR
            case symbol_kind::S_UNARY_EXPR:            // UNARY_EXPR
            case symbol_kind::S_BASIC_EXPR:            // BASIC_EXPR
            case symbol_kind::S_FUNC_CALL_EXPR:        // FUNC_CALL_EXPR
            case symbol_kind::S_ARRAY_DIMENSION_EXPR:  // ARRAY_DIMENSION_EXPR
            case symbol_kind::S_LEFT_VAL_EXPR:         // LEFT_VAL_EXPR
            case symbol_kind::S_LITERAL_EXPR:          // LITERAL_EXPR
                value.YY_MOVE_OR_COPY<FE::AST::ExprNode*>(YY_MOVE(that.value));
                break;

            case symbol_kind::S_INITIALIZER:  // INITIALIZER
                value.YY_MOVE_OR_COPY<FE::AST::InitDecl*>(YY_MOVE(that.value));
                break;

            case symbol_kind::S_UNARY_OP:  // UNARY_OP
                value.YY_MOVE_OR_COPY<FE::AST::Operator>(YY_MOVE(that.value));
                break;

            case symbol_kind::S_PARAM_DECLARATOR:  // PARAM_DECLARATOR
                value.YY_MOVE_OR_COPY<FE::AST::ParamDeclarator*>(YY_MOVE(that.value));
                break;

            case symbol_kind::S_PROGRAM:  // PROGRAM
                value.YY_MOVE_OR_COPY<FE::AST::Root*>(YY_MOVE(that.value));
                break;

            case symbol_kind::S_STMT:            // STMT
            case symbol_kind::S_BLOCK_STMT:      // BLOCK_STMT
            case symbol_kind::S_CONTINUE_STMT:   // CONTINUE_STMT
            case symbol_kind::S_EXPR_STMT:       // EXPR_STMT
            case symbol_kind::S_VAR_DECL_STMT:   // VAR_DECL_STMT
            case symbol_kind::S_FUNC_DECL_STMT:  // FUNC_DECL_STMT
            case symbol_kind::S_FOR_STMT:        // FOR_STMT
            case symbol_kind::S_IF_STMT:         // IF_STMT
            case symbol_kind::S_RETURN_STMT:     // RETURN_STMT
            case symbol_kind::S_WHILE_STMT:      // WHILE_STMT
            case symbol_kind::S_BREAK_STMT:      // BREAK_STMT
                value.YY_MOVE_OR_COPY<FE::AST::StmtNode*>(YY_MOVE(that.value));
                break;

            case symbol_kind::S_TYPE:  // TYPE
                value.YY_MOVE_OR_COPY<FE::AST::Type*>(YY_MOVE(that.value));
                break;

            case symbol_kind::S_VAR_DECLARATION:  // VAR_DECLARATION
                value.YY_MOVE_OR_COPY<FE::AST::VarDeclaration*>(YY_MOVE(that.value));
                break;

            case symbol_kind::S_VAR_DECLARATOR:  // VAR_DECLARATOR
                value.YY_MOVE_OR_COPY<FE::AST::VarDeclarator*>(YY_MOVE(that.value));
                break;

            case symbol_kind::S_FLOAT_CONST:  // FLOAT_CONST
                value.YY_MOVE_OR_COPY<float>(YY_MOVE(that.value));
                break;

            case symbol_kind::S_INT_CONST:  // INT_CONST
                value.YY_MOVE_OR_COPY<int>(YY_MOVE(that.value));
                break;

            case symbol_kind::S_LL_CONST:  // LL_CONST
                value.YY_MOVE_OR_COPY<long long>(YY_MOVE(that.value));
                break;

            case symbol_kind::S_STR_CONST:      // STR_CONST
            case symbol_kind::S_ERR_TOKEN:      // ERR_TOKEN
            case symbol_kind::S_SLASH_COMMENT:  // SLASH_COMMENT
            case symbol_kind::S_IDENT:          // IDENT
                value.YY_MOVE_OR_COPY<std::string>(YY_MOVE(that.value));
                break;

            case symbol_kind::S_PARAM_ARRAY_DIMS:           // PARAM_ARRAY_DIMS
            case symbol_kind::S_PARAM_ARRAY_DIMS_TAIL:      // PARAM_ARRAY_DIMS_TAIL
            case symbol_kind::S_EXPR_LIST:                  // EXPR_LIST
            case symbol_kind::S_ARRAY_DIMENSION_EXPR_LIST:  // ARRAY_DIMENSION_EXPR_LIST
                value.YY_MOVE_OR_COPY<std::vector<FE::AST::ExprNode*>*>(YY_MOVE(that.value));
                break;

            case symbol_kind::S_INITIALIZER_LIST:  // INITIALIZER_LIST
                value.YY_MOVE_OR_COPY<std::vector<FE::AST::InitDecl*>*>(YY_MOVE(that.value));
                break;

            case symbol_kind::S_PARAM_DECLARATOR_LIST:  // PARAM_DECLARATOR_LIST
                value.YY_MOVE_OR_COPY<std::vector<FE::AST::ParamDeclarator*>*>(YY_MOVE(that.value));
                break;

            case symbol_kind::S_STMT_LIST:  // STMT_LIST
                value.YY_MOVE_OR_COPY<std::vector<FE::AST::StmtNode*>*>(YY_MOVE(that.value));
                break;

            case symbol_kind::S_VAR_DECLARATOR_LIST:  // VAR_DECLARATOR_LIST
                value.YY_MOVE_OR_COPY<std::vector<FE::AST::VarDeclarator*>*>(YY_MOVE(that.value));
                break;

            default: break;
        }

#if 201103L <= YY_CPLUSPLUS
        // that is emptied.
        that.state = empty_state;
#endif
    }

    YaccParser ::stack_symbol_type::stack_symbol_type(state_type s, YY_MOVE_REF(symbol_type) that)
        : super_type(s, YY_MOVE(that.location))
    {
        switch (that.kind())
        {
            case symbol_kind::S_ASSIGN_EXPR:           // ASSIGN_EXPR
            case symbol_kind::S_EXPR:                  // EXPR
            case symbol_kind::S_NOCOMMA_EXPR:          // NOCOMMA_EXPR
            case symbol_kind::S_LOGICAL_OR_EXPR:       // LOGICAL_OR_EXPR
            case symbol_kind::S_LOGICAL_AND_EXPR:      // LOGICAL_AND_EXPR
            case symbol_kind::S_EQUALITY_EXPR:         // EQUALITY_EXPR
            case symbol_kind::S_RELATIONAL_EXPR:       // RELATIONAL_EXPR
            case symbol_kind::S_ADDSUB_EXPR:           // ADDSUB_EXPR
            case symbol_kind::S_MULDIV_EXPR:           // MULDIV_EXPR
            case symbol_kind::S_UNARY_EXPR:            // UNARY_EXPR
            case symbol_kind::S_BASIC_EXPR:            // BASIC_EXPR
            case symbol_kind::S_FUNC_CALL_EXPR:        // FUNC_CALL_EXPR
            case symbol_kind::S_ARRAY_DIMENSION_EXPR:  // ARRAY_DIMENSION_EXPR
            case symbol_kind::S_LEFT_VAL_EXPR:         // LEFT_VAL_EXPR
            case symbol_kind::S_LITERAL_EXPR:          // LITERAL_EXPR
                value.move<FE::AST::ExprNode*>(YY_MOVE(that.value));
                break;

            case symbol_kind::S_INITIALIZER:  // INITIALIZER
                value.move<FE::AST::InitDecl*>(YY_MOVE(that.value));
                break;

            case symbol_kind::S_UNARY_OP:  // UNARY_OP
                value.move<FE::AST::Operator>(YY_MOVE(that.value));
                break;

            case symbol_kind::S_PARAM_DECLARATOR:  // PARAM_DECLARATOR
                value.move<FE::AST::ParamDeclarator*>(YY_MOVE(that.value));
                break;

            case symbol_kind::S_PROGRAM:  // PROGRAM
                value.move<FE::AST::Root*>(YY_MOVE(that.value));
                break;

            case symbol_kind::S_STMT:            // STMT
            case symbol_kind::S_BLOCK_STMT:      // BLOCK_STMT
            case symbol_kind::S_CONTINUE_STMT:   // CONTINUE_STMT
            case symbol_kind::S_EXPR_STMT:       // EXPR_STMT
            case symbol_kind::S_VAR_DECL_STMT:   // VAR_DECL_STMT
            case symbol_kind::S_FUNC_DECL_STMT:  // FUNC_DECL_STMT
            case symbol_kind::S_FOR_STMT:        // FOR_STMT
            case symbol_kind::S_IF_STMT:         // IF_STMT
            case symbol_kind::S_RETURN_STMT:     // RETURN_STMT
            case symbol_kind::S_WHILE_STMT:      // WHILE_STMT
            case symbol_kind::S_BREAK_STMT:      // BREAK_STMT
                value.move<FE::AST::StmtNode*>(YY_MOVE(that.value));
                break;

            case symbol_kind::S_TYPE:  // TYPE
                value.move<FE::AST::Type*>(YY_MOVE(that.value));
                break;

            case symbol_kind::S_VAR_DECLARATION:  // VAR_DECLARATION
                value.move<FE::AST::VarDeclaration*>(YY_MOVE(that.value));
                break;

            case symbol_kind::S_VAR_DECLARATOR:  // VAR_DECLARATOR
                value.move<FE::AST::VarDeclarator*>(YY_MOVE(that.value));
                break;

            case symbol_kind::S_FLOAT_CONST:  // FLOAT_CONST
                value.move<float>(YY_MOVE(that.value));
                break;

            case symbol_kind::S_INT_CONST:  // INT_CONST
                value.move<int>(YY_MOVE(that.value));
                break;

            case symbol_kind::S_LL_CONST:  // LL_CONST
                value.move<long long>(YY_MOVE(that.value));
                break;

            case symbol_kind::S_STR_CONST:      // STR_CONST
            case symbol_kind::S_ERR_TOKEN:      // ERR_TOKEN
            case symbol_kind::S_SLASH_COMMENT:  // SLASH_COMMENT
            case symbol_kind::S_IDENT:          // IDENT
                value.move<std::string>(YY_MOVE(that.value));
                break;

            case symbol_kind::S_PARAM_ARRAY_DIMS:           // PARAM_ARRAY_DIMS
            case symbol_kind::S_PARAM_ARRAY_DIMS_TAIL:      // PARAM_ARRAY_DIMS_TAIL
            case symbol_kind::S_EXPR_LIST:                  // EXPR_LIST
            case symbol_kind::S_ARRAY_DIMENSION_EXPR_LIST:  // ARRAY_DIMENSION_EXPR_LIST
                value.move<std::vector<FE::AST::ExprNode*>*>(YY_MOVE(that.value));
                break;

            case symbol_kind::S_INITIALIZER_LIST:  // INITIALIZER_LIST
                value.move<std::vector<FE::AST::InitDecl*>*>(YY_MOVE(that.value));
                break;

            case symbol_kind::S_PARAM_DECLARATOR_LIST:  // PARAM_DECLARATOR_LIST
                value.move<std::vector<FE::AST::ParamDeclarator*>*>(YY_MOVE(that.value));
                break;

            case symbol_kind::S_STMT_LIST:  // STMT_LIST
                value.move<std::vector<FE::AST::StmtNode*>*>(YY_MOVE(that.value));
                break;

            case symbol_kind::S_VAR_DECLARATOR_LIST:  // VAR_DECLARATOR_LIST
                value.move<std::vector<FE::AST::VarDeclarator*>*>(YY_MOVE(that.value));
                break;

            default: break;
        }

        // that is emptied.
        that.kind_ = symbol_kind::S_YYEMPTY;
    }

#if YY_CPLUSPLUS < 201103L
    YaccParser ::stack_symbol_type& YaccParser ::stack_symbol_type::operator=(const stack_symbol_type& that)
    {
        state = that.state;
        switch (that.kind())
        {
            case symbol_kind::S_ASSIGN_EXPR:           // ASSIGN_EXPR
            case symbol_kind::S_EXPR:                  // EXPR
            case symbol_kind::S_NOCOMMA_EXPR:          // NOCOMMA_EXPR
            case symbol_kind::S_LOGICAL_OR_EXPR:       // LOGICAL_OR_EXPR
            case symbol_kind::S_LOGICAL_AND_EXPR:      // LOGICAL_AND_EXPR
            case symbol_kind::S_EQUALITY_EXPR:         // EQUALITY_EXPR
            case symbol_kind::S_RELATIONAL_EXPR:       // RELATIONAL_EXPR
            case symbol_kind::S_ADDSUB_EXPR:           // ADDSUB_EXPR
            case symbol_kind::S_MULDIV_EXPR:           // MULDIV_EXPR
            case symbol_kind::S_UNARY_EXPR:            // UNARY_EXPR
            case symbol_kind::S_BASIC_EXPR:            // BASIC_EXPR
            case symbol_kind::S_FUNC_CALL_EXPR:        // FUNC_CALL_EXPR
            case symbol_kind::S_ARRAY_DIMENSION_EXPR:  // ARRAY_DIMENSION_EXPR
            case symbol_kind::S_LEFT_VAL_EXPR:         // LEFT_VAL_EXPR
            case symbol_kind::S_LITERAL_EXPR:          // LITERAL_EXPR
                value.copy<FE::AST::ExprNode*>(that.value);
                break;

            case symbol_kind::S_INITIALIZER:  // INITIALIZER
                value.copy<FE::AST::InitDecl*>(that.value);
                break;

            case symbol_kind::S_UNARY_OP:  // UNARY_OP
                value.copy<FE::AST::Operator>(that.value);
                break;

            case symbol_kind::S_PARAM_DECLARATOR:  // PARAM_DECLARATOR
                value.copy<FE::AST::ParamDeclarator*>(that.value);
                break;

            case symbol_kind::S_PROGRAM:  // PROGRAM
                value.copy<FE::AST::Root*>(that.value);
                break;

            case symbol_kind::S_STMT:            // STMT
            case symbol_kind::S_BLOCK_STMT:      // BLOCK_STMT
            case symbol_kind::S_CONTINUE_STMT:   // CONTINUE_STMT
            case symbol_kind::S_EXPR_STMT:       // EXPR_STMT
            case symbol_kind::S_VAR_DECL_STMT:   // VAR_DECL_STMT
            case symbol_kind::S_FUNC_DECL_STMT:  // FUNC_DECL_STMT
            case symbol_kind::S_FOR_STMT:        // FOR_STMT
            case symbol_kind::S_IF_STMT:         // IF_STMT
            case symbol_kind::S_RETURN_STMT:     // RETURN_STMT
            case symbol_kind::S_WHILE_STMT:      // WHILE_STMT
            case symbol_kind::S_BREAK_STMT:      // BREAK_STMT
                value.copy<FE::AST::StmtNode*>(that.value);
                break;

            case symbol_kind::S_TYPE:  // TYPE
                value.copy<FE::AST::Type*>(that.value);
                break;

            case symbol_kind::S_VAR_DECLARATION:  // VAR_DECLARATION
                value.copy<FE::AST::VarDeclaration*>(that.value);
                break;

            case symbol_kind::S_VAR_DECLARATOR:  // VAR_DECLARATOR
                value.copy<FE::AST::VarDeclarator*>(that.value);
                break;

            case symbol_kind::S_FLOAT_CONST:  // FLOAT_CONST
                value.copy<float>(that.value);
                break;

            case symbol_kind::S_INT_CONST:  // INT_CONST
                value.copy<int>(that.value);
                break;

            case symbol_kind::S_LL_CONST:  // LL_CONST
                value.copy<long long>(that.value);
                break;

            case symbol_kind::S_STR_CONST:      // STR_CONST
            case symbol_kind::S_ERR_TOKEN:      // ERR_TOKEN
            case symbol_kind::S_SLASH_COMMENT:  // SLASH_COMMENT
            case symbol_kind::S_IDENT:          // IDENT
                value.copy<std::string>(that.value);
                break;

            case symbol_kind::S_PARAM_ARRAY_DIMS:           // PARAM_ARRAY_DIMS
            case symbol_kind::S_PARAM_ARRAY_DIMS_TAIL:      // PARAM_ARRAY_DIMS_TAIL
            case symbol_kind::S_EXPR_LIST:                  // EXPR_LIST
            case symbol_kind::S_ARRAY_DIMENSION_EXPR_LIST:  // ARRAY_DIMENSION_EXPR_LIST
                value.copy<std::vector<FE::AST::ExprNode*>*>(that.value);
                break;

            case symbol_kind::S_INITIALIZER_LIST:  // INITIALIZER_LIST
                value.copy<std::vector<FE::AST::InitDecl*>*>(that.value);
                break;

            case symbol_kind::S_PARAM_DECLARATOR_LIST:  // PARAM_DECLARATOR_LIST
                value.copy<std::vector<FE::AST::ParamDeclarator*>*>(that.value);
                break;

            case symbol_kind::S_STMT_LIST:  // STMT_LIST
                value.copy<std::vector<FE::AST::StmtNode*>*>(that.value);
                break;

            case symbol_kind::S_VAR_DECLARATOR_LIST:  // VAR_DECLARATOR_LIST
                value.copy<std::vector<FE::AST::VarDeclarator*>*>(that.value);
                break;

            default: break;
        }

        location = that.location;
        return *this;
    }

    YaccParser ::stack_symbol_type& YaccParser ::stack_symbol_type::operator=(stack_symbol_type& that)
    {
        state = that.state;
        switch (that.kind())
        {
            case symbol_kind::S_ASSIGN_EXPR:           // ASSIGN_EXPR
            case symbol_kind::S_EXPR:                  // EXPR
            case symbol_kind::S_NOCOMMA_EXPR:          // NOCOMMA_EXPR
            case symbol_kind::S_LOGICAL_OR_EXPR:       // LOGICAL_OR_EXPR
            case symbol_kind::S_LOGICAL_AND_EXPR:      // LOGICAL_AND_EXPR
            case symbol_kind::S_EQUALITY_EXPR:         // EQUALITY_EXPR
            case symbol_kind::S_RELATIONAL_EXPR:       // RELATIONAL_EXPR
            case symbol_kind::S_ADDSUB_EXPR:           // ADDSUB_EXPR
            case symbol_kind::S_MULDIV_EXPR:           // MULDIV_EXPR
            case symbol_kind::S_UNARY_EXPR:            // UNARY_EXPR
            case symbol_kind::S_BASIC_EXPR:            // BASIC_EXPR
            case symbol_kind::S_FUNC_CALL_EXPR:        // FUNC_CALL_EXPR
            case symbol_kind::S_ARRAY_DIMENSION_EXPR:  // ARRAY_DIMENSION_EXPR
            case symbol_kind::S_LEFT_VAL_EXPR:         // LEFT_VAL_EXPR
            case symbol_kind::S_LITERAL_EXPR:          // LITERAL_EXPR
                value.move<FE::AST::ExprNode*>(that.value);
                break;

            case symbol_kind::S_INITIALIZER:  // INITIALIZER
                value.move<FE::AST::InitDecl*>(that.value);
                break;

            case symbol_kind::S_UNARY_OP:  // UNARY_OP
                value.move<FE::AST::Operator>(that.value);
                break;

            case symbol_kind::S_PARAM_DECLARATOR:  // PARAM_DECLARATOR
                value.move<FE::AST::ParamDeclarator*>(that.value);
                break;

            case symbol_kind::S_PROGRAM:  // PROGRAM
                value.move<FE::AST::Root*>(that.value);
                break;

            case symbol_kind::S_STMT:            // STMT
            case symbol_kind::S_BLOCK_STMT:      // BLOCK_STMT
            case symbol_kind::S_CONTINUE_STMT:   // CONTINUE_STMT
            case symbol_kind::S_EXPR_STMT:       // EXPR_STMT
            case symbol_kind::S_VAR_DECL_STMT:   // VAR_DECL_STMT
            case symbol_kind::S_FUNC_DECL_STMT:  // FUNC_DECL_STMT
            case symbol_kind::S_FOR_STMT:        // FOR_STMT
            case symbol_kind::S_IF_STMT:         // IF_STMT
            case symbol_kind::S_RETURN_STMT:     // RETURN_STMT
            case symbol_kind::S_WHILE_STMT:      // WHILE_STMT
            case symbol_kind::S_BREAK_STMT:      // BREAK_STMT
                value.move<FE::AST::StmtNode*>(that.value);
                break;

            case symbol_kind::S_TYPE:  // TYPE
                value.move<FE::AST::Type*>(that.value);
                break;

            case symbol_kind::S_VAR_DECLARATION:  // VAR_DECLARATION
                value.move<FE::AST::VarDeclaration*>(that.value);
                break;

            case symbol_kind::S_VAR_DECLARATOR:  // VAR_DECLARATOR
                value.move<FE::AST::VarDeclarator*>(that.value);
                break;

            case symbol_kind::S_FLOAT_CONST:  // FLOAT_CONST
                value.move<float>(that.value);
                break;

            case symbol_kind::S_INT_CONST:  // INT_CONST
                value.move<int>(that.value);
                break;

            case symbol_kind::S_LL_CONST:  // LL_CONST
                value.move<long long>(that.value);
                break;

            case symbol_kind::S_STR_CONST:      // STR_CONST
            case symbol_kind::S_ERR_TOKEN:      // ERR_TOKEN
            case symbol_kind::S_SLASH_COMMENT:  // SLASH_COMMENT
            case symbol_kind::S_IDENT:          // IDENT
                value.move<std::string>(that.value);
                break;

            case symbol_kind::S_PARAM_ARRAY_DIMS:           // PARAM_ARRAY_DIMS
            case symbol_kind::S_PARAM_ARRAY_DIMS_TAIL:      // PARAM_ARRAY_DIMS_TAIL
            case symbol_kind::S_EXPR_LIST:                  // EXPR_LIST
            case symbol_kind::S_ARRAY_DIMENSION_EXPR_LIST:  // ARRAY_DIMENSION_EXPR_LIST
                value.move<std::vector<FE::AST::ExprNode*>*>(that.value);
                break;

            case symbol_kind::S_INITIALIZER_LIST:  // INITIALIZER_LIST
                value.move<std::vector<FE::AST::InitDecl*>*>(that.value);
                break;

            case symbol_kind::S_PARAM_DECLARATOR_LIST:  // PARAM_DECLARATOR_LIST
                value.move<std::vector<FE::AST::ParamDeclarator*>*>(that.value);
                break;

            case symbol_kind::S_STMT_LIST:  // STMT_LIST
                value.move<std::vector<FE::AST::StmtNode*>*>(that.value);
                break;

            case symbol_kind::S_VAR_DECLARATOR_LIST:  // VAR_DECLARATOR_LIST
                value.move<std::vector<FE::AST::VarDeclarator*>*>(that.value);
                break;

            default: break;
        }

        location = that.location;
        // that is emptied.
        that.state = empty_state;
        return *this;
    }
#endif

    template <typename Base>
    void YaccParser ::yy_destroy_(const char* yymsg, basic_symbol<Base>& yysym) const
    {
        if (yymsg) YY_SYMBOL_PRINT(yymsg, yysym);
    }

#if YYDEBUG
    template <typename Base>
    void YaccParser ::yy_print_(std::ostream& yyo, const basic_symbol<Base>& yysym) const
    {
        std::ostream& yyoutput = yyo;
        YY_USE(yyoutput);
        if (yysym.empty())
            yyo << "empty symbol";
        else
        {
            symbol_kind_type yykind = yysym.kind();
            yyo << (yykind < YYNTOKENS ? "token" : "nterm") << ' ' << yysym.name() << " (" << yysym.location << ": ";
            YY_USE(yykind);
            yyo << ')';
        }
    }
#endif

    void YaccParser ::yypush_(const char* m, YY_MOVE_REF(stack_symbol_type) sym)
    {
        if (m) YY_SYMBOL_PRINT(m, sym);
        yystack_.push(YY_MOVE(sym));
    }

    void YaccParser ::yypush_(const char* m, state_type s, YY_MOVE_REF(symbol_type) sym)
    {
#if 201103L <= YY_CPLUSPLUS
        yypush_(m, stack_symbol_type(s, std::move(sym)));
#else
        stack_symbol_type ss(s, sym);
        yypush_(m, ss);
#endif
    }

    void YaccParser ::yypop_(int n) YY_NOEXCEPT { yystack_.pop(n); }

#if YYDEBUG
    std::ostream& YaccParser ::debug_stream() const { return *yycdebug_; }

    void YaccParser ::set_debug_stream(std::ostream& o) { yycdebug_ = &o; }

    YaccParser ::debug_level_type YaccParser ::debug_level() const { return yydebug_; }

    void YaccParser ::set_debug_level(debug_level_type l) { yydebug_ = l; }
#endif  // YYDEBUG

    YaccParser ::state_type YaccParser ::yy_lr_goto_state_(state_type yystate, int yysym)
    {
        int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
        if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
            return yytable_[yyr];
        else
            return yydefgoto_[yysym - YYNTOKENS];
    }

    bool YaccParser ::yy_pact_value_is_default_(int yyvalue) YY_NOEXCEPT { return yyvalue == yypact_ninf_; }

    bool YaccParser ::yy_table_value_is_error_(int yyvalue) YY_NOEXCEPT { return yyvalue == yytable_ninf_; }

    int YaccParser ::operator()() { return parse(); }

    int YaccParser ::parse()
    {
        int yyn;
        /// Length of the RHS of the rule being reduced.
        int yylen = 0;

        // Error handling.
        int yynerrs_     = 0;
        int yyerrstatus_ = 0;

        /// The lookahead symbol.
        symbol_type yyla;

        /// The locations where the error started and ended.
        stack_symbol_type yyerror_range[3];

        /// The return value of parse ().
        int yyresult;

#if YY_EXCEPTIONS
        try
#endif  // YY_EXCEPTIONS
        {
            YYCDEBUG << "Starting parse\n";

            /* Initialize the stack.  The initial state will be set in
               yynewstate, since the latter expects the semantical and the
               location values to have been already stored, initialize these
               stacks with a primary value.  */
            yystack_.clear();
            yypush_(YY_NULLPTR, 0, YY_MOVE(yyla));

        /*-----------------------------------------------.
        | yynewstate -- push a new symbol on the stack.  |
        `-----------------------------------------------*/
        yynewstate:
            YYCDEBUG << "Entering state " << int(yystack_[0].state) << '\n';
            YY_STACK_PRINT();

            // Accept?
            if (yystack_[0].state == yyfinal_) YYACCEPT;

            goto yybackup;

        /*-----------.
        | yybackup.  |
        `-----------*/
        yybackup:
            // Try to take a decision without lookahead.
            yyn = yypact_[+yystack_[0].state];
            if (yy_pact_value_is_default_(yyn)) goto yydefault;

            // Read a lookahead token.
            if (yyla.empty())
            {
                YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
                try
#endif  // YY_EXCEPTIONS
                {
                    symbol_type yylookahead(yylex(scanner, parser));
                    yyla.move(yylookahead);
                }
#if YY_EXCEPTIONS
                catch (const syntax_error& yyexc)
                {
                    YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
                    error(yyexc);
                    goto yyerrlab1;
                }
#endif  // YY_EXCEPTIONS
            }
            YY_SYMBOL_PRINT("Next token is", yyla);

            if (yyla.kind() == symbol_kind::S_YYerror)
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
            yyn += yyla.kind();
            if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind()) { goto yydefault; }

            // Reduce or error.
            yyn = yytable_[yyn];
            if (yyn <= 0)
            {
                if (yy_table_value_is_error_(yyn)) goto yyerrlab;
                yyn = -yyn;
                goto yyreduce;
            }

            // Count tokens shifted since error; after three, turn off error status.
            if (yyerrstatus_) --yyerrstatus_;

            // Shift the lookahead token.
            yypush_("Shifting", state_type(yyn), YY_MOVE(yyla));
            goto yynewstate;

        /*-----------------------------------------------------------.
        | yydefault -- do the default action for the current state.  |
        `-----------------------------------------------------------*/
        yydefault:
            yyn = yydefact_[+yystack_[0].state];
            if (yyn == 0) goto yyerrlab;
            goto yyreduce;

        /*-----------------------------.
        | yyreduce -- do a reduction.  |
        `-----------------------------*/
        yyreduce:
            yylen = yyr2_[yyn];
            {
                stack_symbol_type yylhs;
                yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
                /* Variants are always initialized to an empty instance of the
                   correct type. The default '$$ = $1' action is NOT applied
                   when using variants.  */
                switch (yyr1_[yyn])
                {
                    case symbol_kind::S_ASSIGN_EXPR:           // ASSIGN_EXPR
                    case symbol_kind::S_EXPR:                  // EXPR
                    case symbol_kind::S_NOCOMMA_EXPR:          // NOCOMMA_EXPR
                    case symbol_kind::S_LOGICAL_OR_EXPR:       // LOGICAL_OR_EXPR
                    case symbol_kind::S_LOGICAL_AND_EXPR:      // LOGICAL_AND_EXPR
                    case symbol_kind::S_EQUALITY_EXPR:         // EQUALITY_EXPR
                    case symbol_kind::S_RELATIONAL_EXPR:       // RELATIONAL_EXPR
                    case symbol_kind::S_ADDSUB_EXPR:           // ADDSUB_EXPR
                    case symbol_kind::S_MULDIV_EXPR:           // MULDIV_EXPR
                    case symbol_kind::S_UNARY_EXPR:            // UNARY_EXPR
                    case symbol_kind::S_BASIC_EXPR:            // BASIC_EXPR
                    case symbol_kind::S_FUNC_CALL_EXPR:        // FUNC_CALL_EXPR
                    case symbol_kind::S_ARRAY_DIMENSION_EXPR:  // ARRAY_DIMENSION_EXPR
                    case symbol_kind::S_LEFT_VAL_EXPR:         // LEFT_VAL_EXPR
                    case symbol_kind::S_LITERAL_EXPR:          // LITERAL_EXPR
                        yylhs.value.emplace<FE::AST::ExprNode*>();
                        break;

                    case symbol_kind::S_INITIALIZER:  // INITIALIZER
                        yylhs.value.emplace<FE::AST::InitDecl*>();
                        break;

                    case symbol_kind::S_UNARY_OP:  // UNARY_OP
                        yylhs.value.emplace<FE::AST::Operator>();
                        break;

                    case symbol_kind::S_PARAM_DECLARATOR:  // PARAM_DECLARATOR
                        yylhs.value.emplace<FE::AST::ParamDeclarator*>();
                        break;

                    case symbol_kind::S_PROGRAM:  // PROGRAM
                        yylhs.value.emplace<FE::AST::Root*>();
                        break;

                    case symbol_kind::S_STMT:            // STMT
                    case symbol_kind::S_BLOCK_STMT:      // BLOCK_STMT
                    case symbol_kind::S_CONTINUE_STMT:   // CONTINUE_STMT
                    case symbol_kind::S_EXPR_STMT:       // EXPR_STMT
                    case symbol_kind::S_VAR_DECL_STMT:   // VAR_DECL_STMT
                    case symbol_kind::S_FUNC_DECL_STMT:  // FUNC_DECL_STMT
                    case symbol_kind::S_FOR_STMT:        // FOR_STMT
                    case symbol_kind::S_IF_STMT:         // IF_STMT
                    case symbol_kind::S_RETURN_STMT:     // RETURN_STMT
                    case symbol_kind::S_WHILE_STMT:      // WHILE_STMT
                    case symbol_kind::S_BREAK_STMT:      // BREAK_STMT
                        yylhs.value.emplace<FE::AST::StmtNode*>();
                        break;

                    case symbol_kind::S_TYPE:  // TYPE
                        yylhs.value.emplace<FE::AST::Type*>();
                        break;

                    case symbol_kind::S_VAR_DECLARATION:  // VAR_DECLARATION
                        yylhs.value.emplace<FE::AST::VarDeclaration*>();
                        break;

                    case symbol_kind::S_VAR_DECLARATOR:  // VAR_DECLARATOR
                        yylhs.value.emplace<FE::AST::VarDeclarator*>();
                        break;

                    case symbol_kind::S_FLOAT_CONST:  // FLOAT_CONST
                        yylhs.value.emplace<float>();
                        break;

                    case symbol_kind::S_INT_CONST:  // INT_CONST
                        yylhs.value.emplace<int>();
                        break;

                    case symbol_kind::S_LL_CONST:  // LL_CONST
                        yylhs.value.emplace<long long>();
                        break;

                    case symbol_kind::S_STR_CONST:      // STR_CONST
                    case symbol_kind::S_ERR_TOKEN:      // ERR_TOKEN
                    case symbol_kind::S_SLASH_COMMENT:  // SLASH_COMMENT
                    case symbol_kind::S_IDENT:          // IDENT
                        yylhs.value.emplace<std::string>();
                        break;

                    case symbol_kind::S_PARAM_ARRAY_DIMS:           // PARAM_ARRAY_DIMS
                    case symbol_kind::S_PARAM_ARRAY_DIMS_TAIL:      // PARAM_ARRAY_DIMS_TAIL
                    case symbol_kind::S_EXPR_LIST:                  // EXPR_LIST
                    case symbol_kind::S_ARRAY_DIMENSION_EXPR_LIST:  // ARRAY_DIMENSION_EXPR_LIST
                        yylhs.value.emplace<std::vector<FE::AST::ExprNode*>*>();
                        break;

                    case symbol_kind::S_INITIALIZER_LIST:  // INITIALIZER_LIST
                        yylhs.value.emplace<std::vector<FE::AST::InitDecl*>*>();
                        break;

                    case symbol_kind::S_PARAM_DECLARATOR_LIST:  // PARAM_DECLARATOR_LIST
                        yylhs.value.emplace<std::vector<FE::AST::ParamDeclarator*>*>();
                        break;

                    case symbol_kind::S_STMT_LIST:  // STMT_LIST
                        yylhs.value.emplace<std::vector<FE::AST::StmtNode*>*>();
                        break;

                    case symbol_kind::S_VAR_DECLARATOR_LIST:  // VAR_DECLARATOR_LIST
                        yylhs.value.emplace<std::vector<FE::AST::VarDeclarator*>*>();
                        break;

                    default: break;
                }

                // Default location.
                {
                    stack_type::slice range(yystack_, yylen);
                    YYLLOC_DEFAULT(yylhs.location, range, yylen);
                    yyerror_range[1].location = yylhs.location;
                }

                // Perform the reduction.
                YY_REDUCE_PRINT(yyn);
#if YY_EXCEPTIONS
                try
#endif  // YY_EXCEPTIONS
                {
                    switch (yyn)
                    {
                        case 2:  // PROGRAM: STMT_LIST
#line 145 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::Root*>() =
                                new Root(yystack_[0].value.as<std::vector<FE::AST::StmtNode*>*>());
                            parser.ast = yylhs.value.as<FE::AST::Root*>();
                        }
#line 1067 "frontend/parser/yacc.cpp"
                        break;

                        case 3:  // PROGRAM: PROGRAM END
#line 149 "frontend/parser/yacc.y"
                        {
                            YYACCEPT;
                        }
#line 1075 "frontend/parser/yacc.cpp"
                        break;

                        case 4:  // STMT_LIST: STMT
#line 155 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<std::vector<FE::AST::StmtNode*>*>() = new std::vector<StmtNode*>();
                            if (yystack_[0].value.as<FE::AST::StmtNode*>())
                                yylhs.value.as<std::vector<FE::AST::StmtNode*>*>()->push_back(
                                    yystack_[0].value.as<FE::AST::StmtNode*>());
                        }
#line 1084 "frontend/parser/yacc.cpp"
                        break;

                        case 5:  // STMT_LIST: STMT_LIST STMT
#line 159 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<std::vector<FE::AST::StmtNode*>*>() =
                                yystack_[1].value.as<std::vector<FE::AST::StmtNode*>*>();
                            if (yystack_[0].value.as<FE::AST::StmtNode*>())
                                yylhs.value.as<std::vector<FE::AST::StmtNode*>*>()->push_back(
                                    yystack_[0].value.as<FE::AST::StmtNode*>());
                        }
#line 1093 "frontend/parser/yacc.cpp"
                        break;

                        case 6:  // STMT: EXPR_STMT
#line 166 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::StmtNode*>() = yystack_[0].value.as<FE::AST::StmtNode*>();
                        }
#line 1101 "frontend/parser/yacc.cpp"
                        break;

                        case 7:  // STMT: VAR_DECL_STMT
#line 169 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::StmtNode*>() = yystack_[0].value.as<FE::AST::StmtNode*>();
                        }
#line 1109 "frontend/parser/yacc.cpp"
                        break;

                        case 8:  // STMT: FUNC_DECL_STMT
#line 172 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::StmtNode*>() = yystack_[0].value.as<FE::AST::StmtNode*>();
                        }
#line 1117 "frontend/parser/yacc.cpp"
                        break;

                        case 9:  // STMT: FOR_STMT
#line 175 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::StmtNode*>() = yystack_[0].value.as<FE::AST::StmtNode*>();
                        }
#line 1125 "frontend/parser/yacc.cpp"
                        break;

                        case 10:  // STMT: IF_STMT
#line 178 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::StmtNode*>() = yystack_[0].value.as<FE::AST::StmtNode*>();
                        }
#line 1133 "frontend/parser/yacc.cpp"
                        break;

                        case 11:  // STMT: CONTINUE_STMT
#line 182 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::StmtNode*>() = yystack_[0].value.as<FE::AST::StmtNode*>();
                        }
#line 1141 "frontend/parser/yacc.cpp"
                        break;

                        case 12:  // STMT: BLOCK_STMT
#line 186 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::StmtNode*>() = yystack_[0].value.as<FE::AST::StmtNode*>();
                        }
#line 1149 "frontend/parser/yacc.cpp"
                        break;

                        case 13:  // STMT: BREAK_STMT
#line 189 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::StmtNode*>() = yystack_[0].value.as<FE::AST::StmtNode*>();
                        }
#line 1157 "frontend/parser/yacc.cpp"
                        break;

                        case 14:  // STMT: WHILE_STMT
#line 192 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::StmtNode*>() = yystack_[0].value.as<FE::AST::StmtNode*>();
                        }
#line 1165 "frontend/parser/yacc.cpp"
                        break;

                        case 15:  // STMT: RETURN_STMT
#line 195 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::StmtNode*>() = yystack_[0].value.as<FE::AST::StmtNode*>();
                        }
#line 1173 "frontend/parser/yacc.cpp"
                        break;

                        case 16:  // STMT: SEMICOLON
#line 198 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::StmtNode*>() = nullptr;
                        }
#line 1181 "frontend/parser/yacc.cpp"
                        break;

                        case 17:  // BLOCK_STMT: LBRACE RBRACE
#line 204 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::StmtNode*>() = new BlockStmt(new std::vector<StmtNode*>(),
                                yystack_[1].location.begin.line,
                                yystack_[1].location.begin.column);
                        }
#line 1189 "frontend/parser/yacc.cpp"
                        break;

                        case 18:  // BLOCK_STMT: LBRACE STMT_LIST RBRACE
#line 207 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::StmtNode*>() =
                                new BlockStmt(yystack_[1].value.as<std::vector<FE::AST::StmtNode*>*>(),
                                    yystack_[2].location.begin.line,
                                    yystack_[2].location.begin.column);
                        }
#line 1197 "frontend/parser/yacc.cpp"
                        break;

                        case 19:  // CONTINUE_STMT: CONTINUE SEMICOLON
#line 213 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::StmtNode*>() =
                                new ContinueStmt(yystack_[1].location.begin.line, yystack_[1].location.begin.column);
                        }
#line 1205 "frontend/parser/yacc.cpp"
                        break;

                        case 20:  // EXPR_STMT: EXPR SEMICOLON
#line 219 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::StmtNode*>() =
                                new ExprStmt(yystack_[1].value.as<FE::AST::ExprNode*>(),
                                    yystack_[1].location.begin.line,
                                    yystack_[1].location.begin.column);
                        }
#line 1213 "frontend/parser/yacc.cpp"
                        break;

                        case 21:  // VAR_DECLARATION: TYPE VAR_DECLARATOR_LIST
#line 225 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::VarDeclaration*>() =
                                new VarDeclaration(yystack_[1].value.as<FE::AST::Type*>(),
                                    yystack_[0].value.as<std::vector<FE::AST::VarDeclarator*>*>(),
                                    false,
                                    yystack_[1].location.begin.line,
                                    yystack_[1].location.begin.column);
                        }
#line 1221 "frontend/parser/yacc.cpp"
                        break;

                        case 22:  // VAR_DECLARATION: CONST TYPE VAR_DECLARATOR_LIST
#line 228 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::VarDeclaration*>() =
                                new VarDeclaration(yystack_[1].value.as<FE::AST::Type*>(),
                                    yystack_[0].value.as<std::vector<FE::AST::VarDeclarator*>*>(),
                                    true,
                                    yystack_[2].location.begin.line,
                                    yystack_[2].location.begin.column);
                        }
#line 1229 "frontend/parser/yacc.cpp"
                        break;

                        case 23:  // VAR_DECL_STMT: VAR_DECLARATION SEMICOLON
#line 234 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::StmtNode*>() =
                                new VarDeclStmt(yystack_[1].value.as<FE::AST::VarDeclaration*>(),
                                    yystack_[1].location.begin.line,
                                    yystack_[1].location.begin.column);
                        }
#line 1237 "frontend/parser/yacc.cpp"
                        break;

                        case 24:  // FUNC_DECL_STMT: TYPE IDENT LPAREN PARAM_DECLARATOR_LIST RPAREN BLOCK_STMT
#line 240 "frontend/parser/yacc.y"
                        {
                            Entry* entry = Entry::getEntry(yystack_[4].value.as<std::string>());
                            yylhs.value.as<FE::AST::StmtNode*>() =
                                new FuncDeclStmt(yystack_[5].value.as<FE::AST::Type*>(),
                                    entry,
                                    yystack_[2].value.as<std::vector<FE::AST::ParamDeclarator*>*>(),
                                    yystack_[0].value.as<FE::AST::StmtNode*>(),
                                    yystack_[5].location.begin.line,
                                    yystack_[5].location.begin.column);
                        }
#line 1246 "frontend/parser/yacc.cpp"
                        break;

                        case 25:  // FOR_STMT: FOR LPAREN VAR_DECLARATION SEMICOLON EXPR SEMICOLON EXPR RPAREN STMT
#line 247 "frontend/parser/yacc.y"
                        {
                            VarDeclStmt* initStmt = new VarDeclStmt(yystack_[6].value.as<FE::AST::VarDeclaration*>(),
                                yystack_[6].location.begin.line,
                                yystack_[6].location.begin.column);
                            yylhs.value.as<FE::AST::StmtNode*>() = new ForStmt(initStmt,
                                yystack_[4].value.as<FE::AST::ExprNode*>(),
                                yystack_[2].value.as<FE::AST::ExprNode*>(),
                                yystack_[0].value.as<FE::AST::StmtNode*>(),
                                yystack_[8].location.begin.line,
                                yystack_[8].location.begin.column);
                        }
#line 1255 "frontend/parser/yacc.cpp"
                        break;

                        case 26:  // FOR_STMT: FOR LPAREN EXPR SEMICOLON EXPR SEMICOLON EXPR RPAREN STMT
#line 251 "frontend/parser/yacc.y"
                        {
                            StmtNode* initStmt = new ExprStmt(yystack_[6].value.as<FE::AST::ExprNode*>(),
                                yystack_[6].value.as<FE::AST::ExprNode*>()->line_num,
                                yystack_[6].value.as<FE::AST::ExprNode*>()->col_num);
                            yylhs.value.as<FE::AST::StmtNode*>() = new ForStmt(initStmt,
                                yystack_[4].value.as<FE::AST::ExprNode*>(),
                                yystack_[2].value.as<FE::AST::ExprNode*>(),
                                yystack_[0].value.as<FE::AST::StmtNode*>(),
                                yystack_[8].location.begin.line,
                                yystack_[8].location.begin.column);
                        }
#line 1264 "frontend/parser/yacc.cpp"
                        break;

                        case 27:  // IF_STMT: IF LPAREN EXPR RPAREN STMT
#line 258 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::StmtNode*>() =
                                new IfStmt(yystack_[2].value.as<FE::AST::ExprNode*>(),
                                    yystack_[0].value.as<FE::AST::StmtNode*>(),
                                    nullptr,
                                    yystack_[4].location.begin.line,
                                    yystack_[4].location.begin.column);
                        }
#line 1272 "frontend/parser/yacc.cpp"
                        break;

                        case 28:  // IF_STMT: IF LPAREN EXPR RPAREN STMT ELSE STMT
#line 261 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::StmtNode*>() =
                                new IfStmt(yystack_[4].value.as<FE::AST::ExprNode*>(),
                                    yystack_[2].value.as<FE::AST::StmtNode*>(),
                                    yystack_[0].value.as<FE::AST::StmtNode*>(),
                                    yystack_[6].location.begin.line,
                                    yystack_[6].location.begin.column);
                        }
#line 1280 "frontend/parser/yacc.cpp"
                        break;

                        case 29:  // RETURN_STMT: RETURN SEMICOLON
#line 267 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::StmtNode*>() = new ReturnStmt(
                                nullptr, yystack_[1].location.begin.line, yystack_[1].location.begin.column);
                        }
#line 1288 "frontend/parser/yacc.cpp"
                        break;

                        case 30:  // RETURN_STMT: RETURN EXPR SEMICOLON
#line 270 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::StmtNode*>() =
                                new ReturnStmt(yystack_[1].value.as<FE::AST::ExprNode*>(),
                                    yystack_[2].location.begin.line,
                                    yystack_[2].location.begin.column);
                        }
#line 1296 "frontend/parser/yacc.cpp"
                        break;

                        case 31:  // WHILE_STMT: WHILE LPAREN EXPR RPAREN STMT
#line 276 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::StmtNode*>() =
                                new WhileStmt(yystack_[2].value.as<FE::AST::ExprNode*>(),
                                    yystack_[0].value.as<FE::AST::StmtNode*>(),
                                    yystack_[4].location.begin.line,
                                    yystack_[4].location.begin.column);
                        }
#line 1304 "frontend/parser/yacc.cpp"
                        break;

                        case 32:  // BREAK_STMT: BREAK SEMICOLON
#line 282 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::StmtNode*>() =
                                new BreakStmt(yystack_[1].location.begin.line, yystack_[1].location.begin.column);
                        }
#line 1312 "frontend/parser/yacc.cpp"
                        break;

                        case 33:  // PARAM_DECLARATOR: TYPE IDENT
#line 291 "frontend/parser/yacc.y"
                        {
                            Entry* entry = Entry::getEntry(yystack_[0].value.as<std::string>());
                            yylhs.value.as<FE::AST::ParamDeclarator*>() =
                                new ParamDeclarator(yystack_[1].value.as<FE::AST::Type*>(),
                                    entry,
                                    nullptr,
                                    yystack_[1].location.begin.line,
                                    yystack_[1].location.begin.column);
                        }
#line 1321 "frontend/parser/yacc.cpp"
                        break;

                        case 34:  // PARAM_DECLARATOR: TYPE IDENT PARAM_ARRAY_DIMS
#line 295 "frontend/parser/yacc.y"
                        {
                            Entry* entry = Entry::getEntry(yystack_[1].value.as<std::string>());
                            yylhs.value.as<FE::AST::ParamDeclarator*>() =
                                new ParamDeclarator(yystack_[2].value.as<FE::AST::Type*>(),
                                    entry,
                                    yystack_[0].value.as<std::vector<FE::AST::ExprNode*>*>(),
                                    yystack_[2].location.begin.line,
                                    yystack_[2].location.begin.column);
                        }
#line 1330 "frontend/parser/yacc.cpp"
                        break;

                        case 35:  // PARAM_ARRAY_DIMS: LBRACKET RBRACKET PARAM_ARRAY_DIMS_TAIL
#line 304 "frontend/parser/yacc.y"
                        {
                            auto v = new std::vector<ExprNode*>();
                            v->emplace_back(new LiteralExpr(
                                -1, yystack_[2].location.begin.line, yystack_[2].location.begin.column));
                            if (yystack_[0].value.as<std::vector<FE::AST::ExprNode*>*>() &&
                                !yystack_[0].value.as<std::vector<FE::AST::ExprNode*>*>()->empty())
                                v->insert(v->end(),
                                    yystack_[0].value.as<std::vector<FE::AST::ExprNode*>*>()->begin(),
                                    yystack_[0].value.as<std::vector<FE::AST::ExprNode*>*>()->end());
                            yylhs.value.as<std::vector<FE::AST::ExprNode*>*>() = v;
                        }
#line 1341 "frontend/parser/yacc.cpp"
                        break;

                        case 36:  // PARAM_ARRAY_DIMS: LBRACKET NOCOMMA_EXPR RBRACKET PARAM_ARRAY_DIMS_TAIL
#line 310 "frontend/parser/yacc.y"
                        {
                            auto v = new std::vector<ExprNode*>();
                            v->push_back(yystack_[2].value.as<FE::AST::ExprNode*>());
                            if (yystack_[0].value.as<std::vector<FE::AST::ExprNode*>*>() &&
                                !yystack_[0].value.as<std::vector<FE::AST::ExprNode*>*>()->empty())
                                v->insert(v->end(),
                                    yystack_[0].value.as<std::vector<FE::AST::ExprNode*>*>()->begin(),
                                    yystack_[0].value.as<std::vector<FE::AST::ExprNode*>*>()->end());
                            yylhs.value.as<std::vector<FE::AST::ExprNode*>*>() = v;
                        }
#line 1352 "frontend/parser/yacc.cpp"
                        break;

                        case 37:  // PARAM_ARRAY_DIMS_TAIL: %empty
#line 319 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<std::vector<FE::AST::ExprNode*>*>() = new std::vector<ExprNode*>();
                        }
#line 1360 "frontend/parser/yacc.cpp"
                        break;

                        case 38:  // PARAM_ARRAY_DIMS_TAIL: PARAM_ARRAY_DIMS_TAIL LBRACKET NOCOMMA_EXPR RBRACKET
#line 322 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<std::vector<FE::AST::ExprNode*>*>() =
                                yystack_[3].value.as<std::vector<FE::AST::ExprNode*>*>();
                            yylhs.value.as<std::vector<FE::AST::ExprNode*>*>()->push_back(
                                yystack_[1].value.as<FE::AST::ExprNode*>());
                        }
#line 1369 "frontend/parser/yacc.cpp"
                        break;

                        case 39:  // PARAM_DECLARATOR_LIST: %empty
#line 329 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<std::vector<FE::AST::ParamDeclarator*>*>() =
                                new std::vector<ParamDeclarator*>();
                        }
#line 1377 "frontend/parser/yacc.cpp"
                        break;

                        case 40:  // PARAM_DECLARATOR_LIST: PARAM_DECLARATOR
#line 332 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<std::vector<FE::AST::ParamDeclarator*>*>() =
                                new std::vector<ParamDeclarator*>();
                            yylhs.value.as<std::vector<FE::AST::ParamDeclarator*>*>()->push_back(
                                yystack_[0].value.as<FE::AST::ParamDeclarator*>());
                        }
#line 1386 "frontend/parser/yacc.cpp"
                        break;

                        case 41:  // PARAM_DECLARATOR_LIST: PARAM_DECLARATOR_LIST COMMA PARAM_DECLARATOR
#line 336 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<std::vector<FE::AST::ParamDeclarator*>*>() =
                                yystack_[2].value.as<std::vector<FE::AST::ParamDeclarator*>*>();
                            yylhs.value.as<std::vector<FE::AST::ParamDeclarator*>*>()->push_back(
                                yystack_[0].value.as<FE::AST::ParamDeclarator*>());
                        }
#line 1395 "frontend/parser/yacc.cpp"
                        break;

                        case 42:  // VAR_DECLARATOR: LEFT_VAL_EXPR
#line 343 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::VarDeclarator*>() =
                                new VarDeclarator(yystack_[0].value.as<FE::AST::ExprNode*>(),
                                    nullptr,
                                    yystack_[0].location.begin.line,
                                    yystack_[0].location.begin.column);
                        }
#line 1403 "frontend/parser/yacc.cpp"
                        break;

                        case 43:  // VAR_DECLARATOR: LEFT_VAL_EXPR ASSIGN INITIALIZER
#line 346 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::VarDeclarator*>() =
                                new VarDeclarator(yystack_[2].value.as<FE::AST::ExprNode*>(),
                                    yystack_[0].value.as<FE::AST::InitDecl*>(),
                                    yystack_[2].location.begin.line,
                                    yystack_[2].location.begin.column);
                        }
#line 1411 "frontend/parser/yacc.cpp"
                        break;

                        case 44:  // VAR_DECLARATOR_LIST: VAR_DECLARATOR
#line 352 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<std::vector<FE::AST::VarDeclarator*>*>() = new std::vector<VarDeclarator*>();
                            yylhs.value.as<std::vector<FE::AST::VarDeclarator*>*>()->push_back(
                                yystack_[0].value.as<FE::AST::VarDeclarator*>());
                        }
#line 1420 "frontend/parser/yacc.cpp"
                        break;

                        case 45:  // VAR_DECLARATOR_LIST: VAR_DECLARATOR_LIST COMMA VAR_DECLARATOR
#line 356 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<std::vector<FE::AST::VarDeclarator*>*>() =
                                yystack_[2].value.as<std::vector<FE::AST::VarDeclarator*>*>();
                            yylhs.value.as<std::vector<FE::AST::VarDeclarator*>*>()->push_back(
                                yystack_[0].value.as<FE::AST::VarDeclarator*>());
                        }
#line 1429 "frontend/parser/yacc.cpp"
                        break;

                        case 46:  // INITIALIZER: NOCOMMA_EXPR
#line 363 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::InitDecl*>() =
                                new Initializer(yystack_[0].value.as<FE::AST::ExprNode*>(),
                                    yystack_[0].location.begin.line,
                                    yystack_[0].location.begin.column);
                        }
#line 1437 "frontend/parser/yacc.cpp"
                        break;

                        case 47:  // INITIALIZER: LBRACE RBRACE
#line 366 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::InitDecl*>() = new InitializerList(new std::vector<InitDecl*>(),
                                yystack_[1].location.begin.line,
                                yystack_[1].location.begin.column);
                        }
#line 1445 "frontend/parser/yacc.cpp"
                        break;

                        case 48:  // INITIALIZER: LBRACE INITIALIZER_LIST RBRACE
#line 369 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::InitDecl*>() =
                                new InitializerList(yystack_[1].value.as<std::vector<FE::AST::InitDecl*>*>(),
                                    yystack_[2].location.begin.line,
                                    yystack_[2].location.begin.column);
                        }
#line 1453 "frontend/parser/yacc.cpp"
                        break;

                        case 49:  // INITIALIZER_LIST: INITIALIZER
#line 375 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<std::vector<FE::AST::InitDecl*>*>() = new std::vector<InitDecl*>();
                            yylhs.value.as<std::vector<FE::AST::InitDecl*>*>()->push_back(
                                yystack_[0].value.as<FE::AST::InitDecl*>());
                        }
#line 1462 "frontend/parser/yacc.cpp"
                        break;

                        case 50:  // INITIALIZER_LIST: INITIALIZER_LIST COMMA INITIALIZER
#line 379 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<std::vector<FE::AST::InitDecl*>*>() =
                                yystack_[2].value.as<std::vector<FE::AST::InitDecl*>*>();
                            yylhs.value.as<std::vector<FE::AST::InitDecl*>*>()->push_back(
                                yystack_[0].value.as<FE::AST::InitDecl*>());
                        }
#line 1471 "frontend/parser/yacc.cpp"
                        break;

                        case 51:  // ASSIGN_EXPR: LEFT_VAL_EXPR ASSIGN NOCOMMA_EXPR
#line 386 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::ExprNode*>() = new BinaryExpr(Operator::ASSIGN,
                                yystack_[2].value.as<FE::AST::ExprNode*>(),
                                yystack_[0].value.as<FE::AST::ExprNode*>(),
                                yystack_[1].location.begin.line,
                                yystack_[1].location.begin.column);
                        }
#line 1479 "frontend/parser/yacc.cpp"
                        break;

                        case 52:  // EXPR_LIST: NOCOMMA_EXPR
#line 393 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<std::vector<FE::AST::ExprNode*>*>() = new std::vector<ExprNode*>();
                            yylhs.value.as<std::vector<FE::AST::ExprNode*>*>()->push_back(
                                yystack_[0].value.as<FE::AST::ExprNode*>());
                        }
#line 1488 "frontend/parser/yacc.cpp"
                        break;

                        case 53:  // EXPR_LIST: EXPR_LIST COMMA NOCOMMA_EXPR
#line 397 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<std::vector<FE::AST::ExprNode*>*>() =
                                yystack_[2].value.as<std::vector<FE::AST::ExprNode*>*>();
                            yylhs.value.as<std::vector<FE::AST::ExprNode*>*>()->push_back(
                                yystack_[0].value.as<FE::AST::ExprNode*>());
                        }
#line 1497 "frontend/parser/yacc.cpp"
                        break;

                        case 54:  // EXPR: NOCOMMA_EXPR
#line 404 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::ExprNode*>() = yystack_[0].value.as<FE::AST::ExprNode*>();
                        }
#line 1505 "frontend/parser/yacc.cpp"
                        break;

                        case 55:  // EXPR: EXPR COMMA NOCOMMA_EXPR
#line 407 "frontend/parser/yacc.y"
                        {
                            if (yystack_[2].value.as<FE::AST::ExprNode*>()->isCommaExpr())
                            {
                                CommaExpr* ce = static_cast<CommaExpr*>(yystack_[2].value.as<FE::AST::ExprNode*>());
                                ce->exprs->push_back(yystack_[0].value.as<FE::AST::ExprNode*>());
                                yylhs.value.as<FE::AST::ExprNode*>() = ce;
                            }
                            else
                            {
                                auto vec = new std::vector<ExprNode*>();
                                vec->push_back(yystack_[2].value.as<FE::AST::ExprNode*>());
                                vec->push_back(yystack_[0].value.as<FE::AST::ExprNode*>());
                                yylhs.value.as<FE::AST::ExprNode*>() = new CommaExpr(vec,
                                    yystack_[2].value.as<FE::AST::ExprNode*>()->line_num,
                                    yystack_[2].value.as<FE::AST::ExprNode*>()->col_num);
                            }
                        }
#line 1522 "frontend/parser/yacc.cpp"
                        break;

                        case 56:  // NOCOMMA_EXPR: LOGICAL_OR_EXPR
#line 422 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::ExprNode*>() = yystack_[0].value.as<FE::AST::ExprNode*>();
                        }
#line 1530 "frontend/parser/yacc.cpp"
                        break;

                        case 57:  // NOCOMMA_EXPR: ASSIGN_EXPR
#line 425 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::ExprNode*>() = yystack_[0].value.as<FE::AST::ExprNode*>();
                        }
#line 1538 "frontend/parser/yacc.cpp"
                        break;

                        case 58:  // LOGICAL_OR_EXPR: LOGICAL_AND_EXPR
#line 431 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::ExprNode*>() = yystack_[0].value.as<FE::AST::ExprNode*>();
                        }
#line 1546 "frontend/parser/yacc.cpp"
                        break;

                        case 59:  // LOGICAL_OR_EXPR: LOGICAL_OR_EXPR OR LOGICAL_AND_EXPR
#line 434 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::ExprNode*>() = new BinaryExpr(Operator::OR,
                                yystack_[2].value.as<FE::AST::ExprNode*>(),
                                yystack_[0].value.as<FE::AST::ExprNode*>(),
                                yystack_[1].location.begin.line,
                                yystack_[1].location.begin.column);
                        }
#line 1554 "frontend/parser/yacc.cpp"
                        break;

                        case 60:  // LOGICAL_AND_EXPR: EQUALITY_EXPR
#line 440 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::ExprNode*>() = yystack_[0].value.as<FE::AST::ExprNode*>();
                        }
#line 1562 "frontend/parser/yacc.cpp"
                        break;

                        case 61:  // LOGICAL_AND_EXPR: LOGICAL_AND_EXPR AND EQUALITY_EXPR
#line 443 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::ExprNode*>() = new BinaryExpr(Operator::AND,
                                yystack_[2].value.as<FE::AST::ExprNode*>(),
                                yystack_[0].value.as<FE::AST::ExprNode*>(),
                                yystack_[1].location.begin.line,
                                yystack_[1].location.begin.column);
                        }
#line 1570 "frontend/parser/yacc.cpp"
                        break;

                        case 62:  // EQUALITY_EXPR: RELATIONAL_EXPR
#line 449 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::ExprNode*>() = yystack_[0].value.as<FE::AST::ExprNode*>();
                        }
#line 1578 "frontend/parser/yacc.cpp"
                        break;

                        case 63:  // EQUALITY_EXPR: EQUALITY_EXPR EQ RELATIONAL_EXPR
#line 452 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::ExprNode*>() = new BinaryExpr(Operator::EQ,
                                yystack_[2].value.as<FE::AST::ExprNode*>(),
                                yystack_[0].value.as<FE::AST::ExprNode*>(),
                                yystack_[1].location.begin.line,
                                yystack_[1].location.begin.column);
                        }
#line 1586 "frontend/parser/yacc.cpp"
                        break;

                        case 64:  // EQUALITY_EXPR: EQUALITY_EXPR NE RELATIONAL_EXPR
#line 455 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::ExprNode*>() = new BinaryExpr(Operator::NEQ,
                                yystack_[2].value.as<FE::AST::ExprNode*>(),
                                yystack_[0].value.as<FE::AST::ExprNode*>(),
                                yystack_[1].location.begin.line,
                                yystack_[1].location.begin.column);
                        }
#line 1594 "frontend/parser/yacc.cpp"
                        break;

                        case 65:  // RELATIONAL_EXPR: ADDSUB_EXPR
#line 461 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::ExprNode*>() = yystack_[0].value.as<FE::AST::ExprNode*>();
                        }
#line 1602 "frontend/parser/yacc.cpp"
                        break;

                        case 66:  // RELATIONAL_EXPR: RELATIONAL_EXPR LT ADDSUB_EXPR
#line 464 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::ExprNode*>() = new BinaryExpr(Operator::LT,
                                yystack_[2].value.as<FE::AST::ExprNode*>(),
                                yystack_[0].value.as<FE::AST::ExprNode*>(),
                                yystack_[1].location.begin.line,
                                yystack_[1].location.begin.column);
                        }
#line 1610 "frontend/parser/yacc.cpp"
                        break;

                        case 67:  // RELATIONAL_EXPR: RELATIONAL_EXPR LE ADDSUB_EXPR
#line 467 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::ExprNode*>() = new BinaryExpr(Operator::LE,
                                yystack_[2].value.as<FE::AST::ExprNode*>(),
                                yystack_[0].value.as<FE::AST::ExprNode*>(),
                                yystack_[1].location.begin.line,
                                yystack_[1].location.begin.column);
                        }
#line 1618 "frontend/parser/yacc.cpp"
                        break;

                        case 68:  // RELATIONAL_EXPR: RELATIONAL_EXPR GT ADDSUB_EXPR
#line 470 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::ExprNode*>() = new BinaryExpr(Operator::GT,
                                yystack_[2].value.as<FE::AST::ExprNode*>(),
                                yystack_[0].value.as<FE::AST::ExprNode*>(),
                                yystack_[1].location.begin.line,
                                yystack_[1].location.begin.column);
                        }
#line 1626 "frontend/parser/yacc.cpp"
                        break;

                        case 69:  // RELATIONAL_EXPR: RELATIONAL_EXPR GE ADDSUB_EXPR
#line 473 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::ExprNode*>() = new BinaryExpr(Operator::GE,
                                yystack_[2].value.as<FE::AST::ExprNode*>(),
                                yystack_[0].value.as<FE::AST::ExprNode*>(),
                                yystack_[1].location.begin.line,
                                yystack_[1].location.begin.column);
                        }
#line 1634 "frontend/parser/yacc.cpp"
                        break;

                        case 70:  // ADDSUB_EXPR: MULDIV_EXPR
#line 479 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::ExprNode*>() = yystack_[0].value.as<FE::AST::ExprNode*>();
                        }
#line 1642 "frontend/parser/yacc.cpp"
                        break;

                        case 71:  // ADDSUB_EXPR: ADDSUB_EXPR PLUS MULDIV_EXPR
#line 482 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::ExprNode*>() = new BinaryExpr(Operator::ADD,
                                yystack_[2].value.as<FE::AST::ExprNode*>(),
                                yystack_[0].value.as<FE::AST::ExprNode*>(),
                                yystack_[1].location.begin.line,
                                yystack_[1].location.begin.column);
                        }
#line 1650 "frontend/parser/yacc.cpp"
                        break;

                        case 72:  // ADDSUB_EXPR: ADDSUB_EXPR MINUS MULDIV_EXPR
#line 485 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::ExprNode*>() = new BinaryExpr(Operator::SUB,
                                yystack_[2].value.as<FE::AST::ExprNode*>(),
                                yystack_[0].value.as<FE::AST::ExprNode*>(),
                                yystack_[1].location.begin.line,
                                yystack_[1].location.begin.column);
                        }
#line 1658 "frontend/parser/yacc.cpp"
                        break;

                        case 73:  // MULDIV_EXPR: UNARY_EXPR
#line 491 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::ExprNode*>() = yystack_[0].value.as<FE::AST::ExprNode*>();
                        }
#line 1666 "frontend/parser/yacc.cpp"
                        break;

                        case 74:  // MULDIV_EXPR: MULDIV_EXPR STAR UNARY_EXPR
#line 494 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::ExprNode*>() = new BinaryExpr(Operator::MUL,
                                yystack_[2].value.as<FE::AST::ExprNode*>(),
                                yystack_[0].value.as<FE::AST::ExprNode*>(),
                                yystack_[1].location.begin.line,
                                yystack_[1].location.begin.column);
                        }
#line 1674 "frontend/parser/yacc.cpp"
                        break;

                        case 75:  // MULDIV_EXPR: MULDIV_EXPR SLASH UNARY_EXPR
#line 497 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::ExprNode*>() = new BinaryExpr(Operator::DIV,
                                yystack_[2].value.as<FE::AST::ExprNode*>(),
                                yystack_[0].value.as<FE::AST::ExprNode*>(),
                                yystack_[1].location.begin.line,
                                yystack_[1].location.begin.column);
                        }
#line 1682 "frontend/parser/yacc.cpp"
                        break;

                        case 76:  // MULDIV_EXPR: MULDIV_EXPR MOD UNARY_EXPR
#line 500 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::ExprNode*>() = new BinaryExpr(Operator::MOD,
                                yystack_[2].value.as<FE::AST::ExprNode*>(),
                                yystack_[0].value.as<FE::AST::ExprNode*>(),
                                yystack_[1].location.begin.line,
                                yystack_[1].location.begin.column);
                        }
#line 1690 "frontend/parser/yacc.cpp"
                        break;

                        case 77:  // UNARY_EXPR: BASIC_EXPR
#line 506 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::ExprNode*>() = yystack_[0].value.as<FE::AST::ExprNode*>();
                        }
#line 1698 "frontend/parser/yacc.cpp"
                        break;

                        case 78:  // UNARY_EXPR: UNARY_OP UNARY_EXPR
#line 509 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::ExprNode*>() =
                                new UnaryExpr(yystack_[1].value.as<FE::AST::Operator>(),
                                    yystack_[0].value.as<FE::AST::ExprNode*>(),
                                    yystack_[0].value.as<FE::AST::ExprNode*>()->line_num,
                                    yystack_[0].value.as<FE::AST::ExprNode*>()->col_num);
                        }
#line 1706 "frontend/parser/yacc.cpp"
                        break;

                        case 79:  // BASIC_EXPR: LITERAL_EXPR
#line 515 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::ExprNode*>() = yystack_[0].value.as<FE::AST::ExprNode*>();
                        }
#line 1714 "frontend/parser/yacc.cpp"
                        break;

                        case 80:  // BASIC_EXPR: LEFT_VAL_EXPR
#line 518 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::ExprNode*>() = yystack_[0].value.as<FE::AST::ExprNode*>();
                        }
#line 1722 "frontend/parser/yacc.cpp"
                        break;

                        case 81:  // BASIC_EXPR: LPAREN EXPR RPAREN
#line 521 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::ExprNode*>() = yystack_[1].value.as<FE::AST::ExprNode*>();
                        }
#line 1730 "frontend/parser/yacc.cpp"
                        break;

                        case 82:  // BASIC_EXPR: FUNC_CALL_EXPR
#line 524 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::ExprNode*>() = yystack_[0].value.as<FE::AST::ExprNode*>();
                        }
#line 1738 "frontend/parser/yacc.cpp"
                        break;

                        case 83:  // FUNC_CALL_EXPR: IDENT LPAREN RPAREN
#line 530 "frontend/parser/yacc.y"
                        {
                            std::string funcName = yystack_[2].value.as<std::string>();
                            if (funcName != "starttime" && funcName != "stoptime")
                            {
                                Entry* entry                         = Entry::getEntry(funcName);
                                yylhs.value.as<FE::AST::ExprNode*>() = new CallExpr(
                                    entry, nullptr, yystack_[2].location.begin.line, yystack_[2].location.begin.column);
                            }
                            else
                            {
                                funcName                     = "_sysy_" + funcName;
                                std::vector<ExprNode*>* args = new std::vector<ExprNode*>();
                                args->emplace_back(new LiteralExpr(static_cast<int>(yystack_[2].location.begin.line),
                                    yystack_[2].location.begin.line,
                                    yystack_[2].location.begin.column));
                                yylhs.value.as<FE::AST::ExprNode*>() = new CallExpr(Entry::getEntry(funcName),
                                    args,
                                    yystack_[2].location.begin.line,
                                    yystack_[2].location.begin.column);
                            }
                        }
#line 1758 "frontend/parser/yacc.cpp"
                        break;

                        case 84:  // FUNC_CALL_EXPR: IDENT LPAREN EXPR_LIST RPAREN
#line 545 "frontend/parser/yacc.y"
                        {
                            Entry* entry                         = Entry::getEntry(yystack_[3].value.as<std::string>());
                            yylhs.value.as<FE::AST::ExprNode*>() = new CallExpr(entry,
                                yystack_[1].value.as<std::vector<FE::AST::ExprNode*>*>(),
                                yystack_[3].location.begin.line,
                                yystack_[3].location.begin.column);
                        }
#line 1767 "frontend/parser/yacc.cpp"
                        break;

                        case 85:  // ARRAY_DIMENSION_EXPR: LBRACKET NOCOMMA_EXPR RBRACKET
#line 552 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::ExprNode*>() = yystack_[1].value.as<FE::AST::ExprNode*>();
                        }
#line 1775 "frontend/parser/yacc.cpp"
                        break;

                        case 86:  // ARRAY_DIMENSION_EXPR_LIST: ARRAY_DIMENSION_EXPR
#line 558 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<std::vector<FE::AST::ExprNode*>*>() = new std::vector<ExprNode*>();
                            yylhs.value.as<std::vector<FE::AST::ExprNode*>*>()->push_back(
                                yystack_[0].value.as<FE::AST::ExprNode*>());
                        }
#line 1784 "frontend/parser/yacc.cpp"
                        break;

                        case 87:  // ARRAY_DIMENSION_EXPR_LIST: ARRAY_DIMENSION_EXPR_LIST ARRAY_DIMENSION_EXPR
#line 562 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<std::vector<FE::AST::ExprNode*>*>() =
                                yystack_[1].value.as<std::vector<FE::AST::ExprNode*>*>();
                            yylhs.value.as<std::vector<FE::AST::ExprNode*>*>()->push_back(
                                yystack_[0].value.as<FE::AST::ExprNode*>());
                        }
#line 1793 "frontend/parser/yacc.cpp"
                        break;

                        case 88:  // LEFT_VAL_EXPR: IDENT
#line 569 "frontend/parser/yacc.y"
                        {
                            Entry* entry                         = Entry::getEntry(yystack_[0].value.as<std::string>());
                            yylhs.value.as<FE::AST::ExprNode*>() = new LeftValExpr(
                                entry, nullptr, yystack_[0].location.begin.line, yystack_[0].location.begin.column);
                        }
#line 1802 "frontend/parser/yacc.cpp"
                        break;

                        case 89:  // LEFT_VAL_EXPR: IDENT ARRAY_DIMENSION_EXPR_LIST
#line 573 "frontend/parser/yacc.y"
                        {
                            Entry* entry                         = Entry::getEntry(yystack_[1].value.as<std::string>());
                            yylhs.value.as<FE::AST::ExprNode*>() = new LeftValExpr(entry,
                                yystack_[0].value.as<std::vector<FE::AST::ExprNode*>*>(),
                                yystack_[1].location.begin.line,
                                yystack_[1].location.begin.column);
                        }
#line 1811 "frontend/parser/yacc.cpp"
                        break;

                        case 90:  // LITERAL_EXPR: INT_CONST
#line 580 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::ExprNode*>() = new LiteralExpr(yystack_[0].value.as<int>(),
                                yystack_[0].location.begin.line,
                                yystack_[0].location.begin.column);
                        }
#line 1819 "frontend/parser/yacc.cpp"
                        break;

                        case 91:  // LITERAL_EXPR: FLOAT_CONST
#line 583 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::ExprNode*>() = new LiteralExpr(yystack_[0].value.as<float>(),
                                yystack_[0].location.begin.line,
                                yystack_[0].location.begin.column);
                        }
#line 1827 "frontend/parser/yacc.cpp"
                        break;

                        case 92:  // LITERAL_EXPR: LL_CONST
#line 586 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::ExprNode*>() = new LiteralExpr(yystack_[0].value.as<long long>(),
                                yystack_[0].location.begin.line,
                                yystack_[0].location.begin.column);
                        }
#line 1835 "frontend/parser/yacc.cpp"
                        break;

                        case 93:  // TYPE: INT
#line 592 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::Type*>() = FE::AST::intType;
                        }
#line 1843 "frontend/parser/yacc.cpp"
                        break;

                        case 94:  // TYPE: FLOAT
#line 595 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::Type*>() = FE::AST::floatType;
                        }
#line 1851 "frontend/parser/yacc.cpp"
                        break;

                        case 95:  // TYPE: VOID
#line 598 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::Type*>() = FE::AST::voidType;
                        }
#line 1859 "frontend/parser/yacc.cpp"
                        break;

                        case 96:  // UNARY_OP: PLUS
#line 604 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::Operator>() = Operator::ADD;
                        }
#line 1867 "frontend/parser/yacc.cpp"
                        break;

                        case 97:  // UNARY_OP: MINUS
#line 607 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::Operator>() = Operator::SUB;
                        }
#line 1875 "frontend/parser/yacc.cpp"
                        break;

                        case 98:  // UNARY_OP: NOT
#line 610 "frontend/parser/yacc.y"
                        {
                            yylhs.value.as<FE::AST::Operator>() = Operator::NOT;
                        }
#line 1883 "frontend/parser/yacc.cpp"
                        break;

#line 1887 "frontend/parser/yacc.cpp"

                        default: break;
                    }
                }
#if YY_EXCEPTIONS
                catch (const syntax_error& yyexc)
                {
                    YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
                    error(yyexc);
                    YYERROR;
                }
#endif  // YY_EXCEPTIONS
                YY_SYMBOL_PRINT("-> $$ =", yylhs);
                yypop_(yylen);
                yylen = 0;

                // Shift the result of the reduction.
                yypush_(YY_NULLPTR, YY_MOVE(yylhs));
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
                context     yyctx(*this, yyla);
                std::string msg = yysyntax_error_(yyctx);
                error(yyla.location, YY_MOVE(msg));
            }

            yyerror_range[1].location = yyla.location;
            if (yyerrstatus_ == 3)
            {
                /* If just tried and failed to reuse lookahead token after an
                   error, discard it.  */

                // Return failure if at end of input.
                if (yyla.kind() == symbol_kind::S_YYEOF)
                    YYABORT;
                else if (!yyla.empty())
                {
                    yy_destroy_("Error: discarding", yyla);
                    yyla.clear();
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
            if (false) YYERROR;

            /* Do not reclaim the symbols of the rule whose action triggered
               this YYERROR.  */
            yypop_(yylen);
            yylen = 0;
            YY_STACK_PRINT();
            goto yyerrlab1;

        /*-------------------------------------------------------------.
        | yyerrlab1 -- common code for both syntax error and YYERROR.  |
        `-------------------------------------------------------------*/
        yyerrlab1:
            yyerrstatus_ = 3;  // Each real token shifted decrements this.
            // Pop stack until we find a state that shifts the error token.
            for (;;)
            {
                yyn = yypact_[+yystack_[0].state];
                if (!yy_pact_value_is_default_(yyn))
                {
                    yyn += symbol_kind::S_YYerror;
                    if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == symbol_kind::S_YYerror)
                    {
                        yyn = yytable_[yyn];
                        if (0 < yyn) break;
                    }
                }

                // Pop the current state because it cannot handle the error token.
                if (yystack_.size() == 1) YYABORT;

                yyerror_range[1].location = yystack_[0].location;
                yy_destroy_("Error: popping", yystack_[0]);
                yypop_();
                YY_STACK_PRINT();
            }
            {
                stack_symbol_type error_token;

                yyerror_range[2].location = yyla.location;
                YYLLOC_DEFAULT(error_token.location, yyerror_range, 2);

                // Shift the error token.
                error_token.state = state_type(yyn);
                yypush_("Shifting", YY_MOVE(error_token));
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
            if (!yyla.empty()) yy_destroy_("Cleanup: discarding lookahead", yyla);

            /* Do not reclaim the symbols of the rule whose action triggered
               this YYABORT or YYACCEPT.  */
            yypop_(yylen);
            YY_STACK_PRINT();
            while (1 < yystack_.size())
            {
                yy_destroy_("Cleanup: popping", yystack_[0]);
                yypop_();
            }

            return yyresult;
        }
#if YY_EXCEPTIONS
        catch (...)
        {
            YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
            // Do not try to display the values of the reclaimed symbols,
            // as their printers might throw an exception.
            if (!yyla.empty()) yy_destroy_(YY_NULLPTR, yyla);

            while (1 < yystack_.size())
            {
                yy_destroy_(YY_NULLPTR, yystack_[0]);
                yypop_();
            }
            throw;
        }
#endif  // YY_EXCEPTIONS
    }

    void YaccParser ::error(const syntax_error& yyexc) { error(yyexc.location, yyexc.what()); }

    /* Return YYSTR after stripping away unnecessary quotes and
       backslashes, so that it's suitable for yyerror.  The heuristic is
       that double-quoting is unnecessary unless the string contains an
       apostrophe, a comma, or backslash (other than backslash-backslash).
       YYSTR is taken from yytname.  */
    std::string YaccParser ::yytnamerr_(const char* yystr)
    {
        if (*yystr == '"')
        {
            std::string yyr;
            char const* yyp = yystr;

            for (;;) switch (*++yyp)
                {
                    case '\'':
                    case ',': goto do_not_strip_quotes;

                    case '\\':
                        if (*++yyp != '\\')
                            goto do_not_strip_quotes;
                        else
                            goto append;

                    append:
                    default: yyr += *yyp; break;

                    case '"': return yyr;
                }
        do_not_strip_quotes:;
        }

        return yystr;
    }

    std::string YaccParser ::symbol_name(symbol_kind_type yysymbol) { return yytnamerr_(yytname_[yysymbol]); }

    //  YaccParser ::context.
    YaccParser ::context::context(const YaccParser& yyparser, const symbol_type& yyla)
        : yyparser_(yyparser), yyla_(yyla)
    {}

    int YaccParser ::context::expected_tokens(symbol_kind_type yyarg[], int yyargn) const
    {
        // Actual number of expected tokens
        int yycount = 0;

        const int yyn = yypact_[+yyparser_.yystack_[0].state];
        if (!yy_pact_value_is_default_(yyn))
        {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            const int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            const int yychecklim = yylast_ - yyn + 1;
            const int yyxend     = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
                if (yycheck_[yyx + yyn] == yyx && yyx != symbol_kind::S_YYerror &&
                    !yy_table_value_is_error_(yytable_[yyx + yyn]))
                {
                    if (!yyarg)
                        ++yycount;
                    else if (yycount == yyargn)
                        return 0;
                    else
                        yyarg[yycount++] = YY_CAST(symbol_kind_type, yyx);
                }
        }

        if (yyarg && yycount == 0 && 0 < yyargn) yyarg[0] = symbol_kind::S_YYEMPTY;
        return yycount;
    }

    int YaccParser ::yy_syntax_error_arguments_(const context& yyctx, symbol_kind_type yyarg[], int yyargn) const
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

        if (!yyctx.lookahead().empty())
        {
            if (yyarg) yyarg[0] = yyctx.token();
            int yyn = yyctx.expected_tokens(yyarg ? yyarg + 1 : yyarg, yyargn - 1);
            return yyn + 1;
        }
        return 0;
    }

    // Generate an error message.
    std::string YaccParser ::yysyntax_error_(const context& yyctx) const
    {
        // Its maximum.
        enum
        {
            YYARGS_MAX = 5
        };
        // Arguments of yyformat.
        symbol_kind_type yyarg[YYARGS_MAX];
        int              yycount = yy_syntax_error_arguments_(yyctx, yyarg, YYARGS_MAX);

        char const* yyformat = YY_NULLPTR;
        switch (yycount)
        {
#define YYCASE_(N, S) \
    case N: yyformat = S; break
            default:  // Avoid compiler warnings.
                YYCASE_(0, YY_("syntax error"));
                YYCASE_(1, YY_("syntax error, unexpected %s"));
                YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
                YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
                YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
                YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
        }

        std::string yyres;
        // Argument number.
        std::ptrdiff_t yyi = 0;
        for (char const* yyp = yyformat; *yyp; ++yyp)
            if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
            {
                yyres += symbol_name(yyarg[yyi++]);
                ++yyp;
            }
            else
                yyres += *yyp;
        return yyres;
    }

    const short YaccParser ::yypact_ninf_ = -134;

    const signed char YaccParser ::yytable_ninf_ = -1;

    const short YaccParser ::yypact_[] = {200,
        -134,
        -134,
        -134,
        -134,
        -134,
        -134,
        7,
        0,
        6,
        26,
        -20,
        12,
        221,
        15,
        -134,
        280,
        142,
        -134,
        -134,
        -134,
        9,
        200,
        -134,
        -134,
        -134,
        -134,
        62,
        -134,
        -134,
        -134,
        -134,
        -134,
        -134,
        -134,
        -134,
        56,
        -134,
        54,
        63,
        1,
        36,
        90,
        -17,
        -134,
        -134,
        -134,
        83,
        -134,
        95,
        280,
        235,
        280,
        -134,
        91,
        280,
        8,
        280,
        -134,
        -134,
        -134,
        101,
        114,
        18,
        -134,
        171,
        -134,
        -134,
        -134,
        -134,
        -134,
        280,
        280,
        280,
        280,
        280,
        280,
        280,
        280,
        280,
        280,
        280,
        280,
        280,
        280,
        280,
        27,
        -134,
        113,
        120,
        -134,
        -134,
        -134,
        60,
        -134,
        116,
        -134,
        69,
        118,
        103,
        114,
        77,
        -134,
        91,
        113,
        -134,
        -134,
        -134,
        63,
        1,
        36,
        36,
        90,
        90,
        90,
        90,
        -17,
        -17,
        -134,
        -134,
        -134,
        -134,
        15,
        114,
        245,
        280,
        -134,
        -134,
        200,
        280,
        280,
        200,
        -134,
        78,
        138,
        -134,
        67,
        -134,
        -134,
        -134,
        137,
        108,
        110,
        -134,
        15,
        129,
        139,
        -134,
        -134,
        -18,
        200,
        280,
        280,
        -134,
        -134,
        251,
        -134,
        245,
        -134,
        -134,
        81,
        93,
        -134,
        140,
        -134,
        200,
        200,
        143,
        -134,
        -134,
        -134,
        280,
        143,
        141,
        -134};

    const signed char YaccParser ::yydefact_[] = {0,
        90,
        92,
        91,
        94,
        93,
        95,
        88,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        16,
        0,
        0,
        96,
        97,
        98,
        0,
        2,
        4,
        12,
        11,
        6,
        0,
        7,
        8,
        9,
        10,
        15,
        14,
        13,
        57,
        0,
        54,
        56,
        58,
        60,
        62,
        65,
        70,
        73,
        77,
        82,
        80,
        79,
        0,
        0,
        0,
        0,
        86,
        89,
        0,
        0,
        0,
        19,
        32,
        29,
        0,
        0,
        0,
        17,
        0,
        1,
        3,
        5,
        23,
        20,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        88,
        44,
        21,
        42,
        78,
        80,
        83,
        0,
        52,
        0,
        87,
        0,
        0,
        0,
        0,
        0,
        30,
        88,
        22,
        81,
        18,
        55,
        59,
        61,
        63,
        64,
        66,
        67,
        68,
        69,
        71,
        72,
        74,
        75,
        76,
        51,
        39,
        0,
        0,
        0,
        84,
        85,
        0,
        0,
        0,
        0,
        40,
        0,
        0,
        45,
        0,
        43,
        46,
        53,
        27,
        0,
        0,
        31,
        0,
        0,
        33,
        47,
        49,
        0,
        0,
        0,
        0,
        41,
        24,
        0,
        34,
        0,
        48,
        28,
        0,
        0,
        37,
        0,
        50,
        0,
        0,
        35,
        37,
        25,
        26,
        0,
        36,
        0,
        38};

    const short YaccParser ::yypgoto_[] = {-134,
        -134,
        154,
        -22,
        33,
        -134,
        -134,
        123,
        -134,
        -134,
        -134,
        -134,
        -134,
        -134,
        -134,
        49,
        -134,
        28,
        -134,
        72,
        135,
        -133,
        -134,
        -134,
        -134,
        -11,
        -44,
        -134,
        128,
        107,
        59,
        10,
        57,
        -28,
        -134,
        -134,
        153,
        -134,
        -15,
        -134,
        -8,
        -134};

    const unsigned char YaccParser ::yydefgoto_[] = {0,
        21,
        22,
        23,
        24,
        25,
        26,
        27,
        28,
        29,
        30,
        31,
        32,
        33,
        34,
        132,
        156,
        167,
        133,
        87,
        88,
        137,
        149,
        35,
        93,
        36,
        37,
        38,
        39,
        40,
        41,
        42,
        43,
        44,
        45,
        46,
        53,
        54,
        47,
        48,
        49,
        50};

    const unsigned char YaccParser ::yytable_[] = {68,
        58,
        61,
        148,
        157,
        63,
        62,
        94,
        95,
        66,
        158,
        1,
        2,
        3,
        4,
        82,
        83,
        84,
        5,
        6,
        7,
        4,
        90,
        55,
        164,
        5,
        6,
        107,
        14,
        56,
        51,
        16,
        52,
        59,
        89,
        91,
        74,
        75,
        18,
        19,
        71,
        121,
        105,
        68,
        97,
        99,
        101,
        89,
        100,
        57,
        122,
        20,
        52,
        67,
        118,
        119,
        120,
        91,
        91,
        91,
        91,
        91,
        91,
        91,
        91,
        91,
        91,
        91,
        91,
        91,
        1,
        2,
        3,
        76,
        77,
        78,
        79,
        70,
        71,
        7,
        138,
        139,
        125,
        69,
        126,
        89,
        112,
        113,
        114,
        115,
        16,
        71,
        138,
        128,
        136,
        147,
        72,
        18,
        19,
        71,
        144,
        131,
        145,
        71,
        73,
        165,
        140,
        86,
        89,
        143,
        20,
        163,
        85,
        138,
        134,
        71,
        52,
        166,
        141,
        142,
        80,
        81,
        102,
        71,
        130,
        71,
        103,
        173,
        159,
        151,
        71,
        152,
        71,
        110,
        111,
        123,
        134,
        116,
        117,
        129,
        160,
        161,
        127,
        169,
        170,
        1,
        2,
        3,
        4,
        124,
        146,
        150,
        5,
        6,
        7,
        8,
        17,
        9,
        10,
        11,
        12,
        13,
        14,
        15,
        155,
        16,
        168,
        174,
        171,
        17,
        64,
        65,
        18,
        19,
        1,
        2,
        3,
        4,
        154,
        98,
        109,
        5,
        6,
        7,
        8,
        20,
        9,
        10,
        11,
        12,
        13,
        14,
        15,
        153,
        16,
        135,
        172,
        104,
        17,
        106,
        108,
        18,
        19,
        1,
        2,
        3,
        4,
        96,
        0,
        0,
        5,
        6,
        7,
        8,
        20,
        9,
        10,
        11,
        12,
        13,
        14,
        15,
        0,
        16,
        1,
        2,
        3,
        17,
        0,
        0,
        18,
        19,
        0,
        7,
        0,
        0,
        0,
        0,
        1,
        2,
        3,
        0,
        60,
        20,
        16,
        0,
        0,
        7,
        1,
        2,
        3,
        18,
        19,
        0,
        1,
        2,
        3,
        7,
        16,
        92,
        0,
        0,
        0,
        7,
        20,
        18,
        19,
        0,
        16,
        0,
        0,
        0,
        136,
        0,
        16,
        18,
        19,
        162,
        20,
        0,
        0,
        18,
        19,
        1,
        2,
        3,
        0,
        0,
        20,
        0,
        0,
        0,
        7,
        0,
        20,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        16,
        0,
        0,
        0,
        0,
        0,
        0,
        18,
        19,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        20};

    const short YaccParser ::yycheck_[] = {22,
        21,
        13,
        136,
        22,
        16,
        14,
        51,
        52,
        0,
        28,
        3,
        4,
        5,
        6,
        32,
        33,
        34,
        10,
        11,
        12,
        6,
        50,
        23,
        157,
        10,
        11,
        71,
        20,
        23,
        23,
        23,
        25,
        21,
        49,
        50,
        35,
        36,
        30,
        31,
        22,
        85,
        24,
        65,
        55,
        56,
        57,
        62,
        56,
        23,
        23,
        43,
        25,
        44,
        82,
        83,
        84,
        72,
        73,
        74,
        75,
        76,
        77,
        78,
        79,
        80,
        81,
        82,
        83,
        84,
        3,
        4,
        5,
        37,
        38,
        39,
        40,
        21,
        22,
        12,
        124,
        125,
        22,
        21,
        24,
        100,
        76,
        77,
        78,
        79,
        23,
        22,
        136,
        24,
        27,
        28,
        42,
        30,
        31,
        22,
        22,
        24,
        24,
        22,
        41,
        24,
        128,
        12,
        123,
        131,
        43,
        155,
        29,
        157,
        122,
        22,
        25,
        24,
        129,
        130,
        30,
        31,
        21,
        22,
        21,
        22,
        12,
        171,
        150,
        21,
        22,
        21,
        22,
        74,
        75,
        22,
        144,
        80,
        81,
        21,
        151,
        152,
        26,
        165,
        166,
        3,
        4,
        5,
        6,
        29,
        12,
        14,
        10,
        11,
        12,
        13,
        27,
        15,
        16,
        17,
        18,
        19,
        20,
        21,
        25,
        23,
        26,
        26,
        25,
        27,
        28,
        17,
        30,
        31,
        3,
        4,
        5,
        6,
        145,
        56,
        73,
        10,
        11,
        12,
        13,
        43,
        15,
        16,
        17,
        18,
        19,
        20,
        21,
        144,
        23,
        123,
        168,
        62,
        27,
        28,
        72,
        30,
        31,
        3,
        4,
        5,
        6,
        54,
        -1,
        -1,
        10,
        11,
        12,
        13,
        43,
        15,
        16,
        17,
        18,
        19,
        20,
        21,
        -1,
        23,
        3,
        4,
        5,
        27,
        -1,
        -1,
        30,
        31,
        -1,
        12,
        -1,
        -1,
        -1,
        -1,
        3,
        4,
        5,
        -1,
        21,
        43,
        23,
        -1,
        -1,
        12,
        3,
        4,
        5,
        30,
        31,
        -1,
        3,
        4,
        5,
        12,
        23,
        24,
        -1,
        -1,
        -1,
        12,
        43,
        30,
        31,
        -1,
        23,
        -1,
        -1,
        -1,
        27,
        -1,
        23,
        30,
        31,
        26,
        43,
        -1,
        -1,
        30,
        31,
        3,
        4,
        5,
        -1,
        -1,
        43,
        -1,
        -1,
        -1,
        12,
        -1,
        43,
        -1,
        -1,
        -1,
        -1,
        -1,
        -1,
        -1,
        -1,
        23,
        -1,
        -1,
        -1,
        -1,
        -1,
        -1,
        30,
        31,
        -1,
        -1,
        -1,
        -1,
        -1,
        -1,
        -1,
        -1,
        -1,
        -1,
        -1,
        43};

    const signed char YaccParser ::yystos_[] = {0,
        3,
        4,
        5,
        6,
        10,
        11,
        12,
        13,
        15,
        16,
        17,
        18,
        19,
        20,
        21,
        23,
        27,
        30,
        31,
        43,
        47,
        48,
        49,
        50,
        51,
        52,
        53,
        54,
        55,
        56,
        57,
        58,
        59,
        60,
        69,
        71,
        72,
        73,
        74,
        75,
        76,
        77,
        78,
        79,
        80,
        81,
        84,
        85,
        86,
        87,
        23,
        25,
        82,
        83,
        23,
        23,
        23,
        21,
        21,
        21,
        71,
        86,
        71,
        28,
        48,
        0,
        44,
        49,
        21,
        21,
        22,
        42,
        41,
        35,
        36,
        37,
        38,
        39,
        40,
        30,
        31,
        32,
        33,
        34,
        29,
        12,
        65,
        66,
        84,
        79,
        84,
        24,
        70,
        72,
        72,
        82,
        71,
        53,
        71,
        86,
        71,
        21,
        12,
        66,
        24,
        28,
        72,
        74,
        75,
        76,
        76,
        77,
        77,
        77,
        77,
        78,
        78,
        79,
        79,
        79,
        72,
        23,
        22,
        29,
        22,
        24,
        26,
        24,
        21,
        21,
        24,
        61,
        64,
        86,
        65,
        27,
        67,
        72,
        72,
        49,
        71,
        71,
        49,
        22,
        24,
        12,
        28,
        67,
        68,
        14,
        21,
        21,
        61,
        50,
        25,
        62,
        22,
        28,
        49,
        71,
        71,
        26,
        72,
        67,
        24,
        24,
        63,
        26,
        49,
        49,
        25,
        63,
        72,
        26};

    const signed char YaccParser ::yyr1_[] = {0,
        46,
        47,
        47,
        48,
        48,
        49,
        49,
        49,
        49,
        49,
        49,
        49,
        49,
        49,
        49,
        49,
        50,
        50,
        51,
        52,
        53,
        53,
        54,
        55,
        56,
        56,
        57,
        57,
        58,
        58,
        59,
        60,
        61,
        61,
        62,
        62,
        63,
        63,
        64,
        64,
        64,
        65,
        65,
        66,
        66,
        67,
        67,
        67,
        68,
        68,
        69,
        70,
        70,
        71,
        71,
        72,
        72,
        73,
        73,
        74,
        74,
        75,
        75,
        75,
        76,
        76,
        76,
        76,
        76,
        77,
        77,
        77,
        78,
        78,
        78,
        78,
        79,
        79,
        80,
        80,
        80,
        80,
        81,
        81,
        82,
        83,
        83,
        84,
        84,
        85,
        85,
        85,
        86,
        86,
        86,
        87,
        87,
        87};

    const signed char YaccParser ::yyr2_[] = {0,
        2,
        1,
        2,
        1,
        2,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        2,
        3,
        2,
        2,
        2,
        3,
        2,
        6,
        9,
        9,
        5,
        7,
        2,
        3,
        5,
        2,
        2,
        3,
        3,
        4,
        0,
        4,
        0,
        1,
        3,
        1,
        3,
        1,
        3,
        1,
        2,
        3,
        1,
        3,
        3,
        1,
        3,
        1,
        3,
        1,
        1,
        1,
        3,
        1,
        3,
        1,
        3,
        3,
        1,
        3,
        3,
        3,
        3,
        1,
        3,
        3,
        1,
        3,
        3,
        3,
        1,
        2,
        1,
        1,
        3,
        1,
        3,
        4,
        3,
        1,
        2,
        1,
        2,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1};

#if YYDEBUG || 1
    // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
    // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
    const char* const YaccParser ::yytname_[] = {"\"end of file\"",
        "error",
        "\"invalid token\"",
        "INT_CONST",
        "LL_CONST",
        "FLOAT_CONST",
        "FLOAT",
        "STR_CONST",
        "ERR_TOKEN",
        "SLASH_COMMENT",
        "INT",
        "VOID",
        "IDENT",
        "IF",
        "ELSE",
        "FOR",
        "WHILE",
        "CONTINUE",
        "BREAK",
        "RETURN",
        "CONST",
        "SEMICOLON",
        "COMMA",
        "LPAREN",
        "RPAREN",
        "LBRACKET",
        "RBRACKET",
        "LBRACE",
        "RBRACE",
        "ASSIGN",
        "PLUS",
        "MINUS",
        "STAR",
        "SLASH",
        "MOD",
        "EQ",
        "NE",
        "LT",
        "LE",
        "GT",
        "GE",
        "AND",
        "OR",
        "NOT",
        "END",
        "THEN",
        "$accept",
        "PROGRAM",
        "STMT_LIST",
        "STMT",
        "BLOCK_STMT",
        "CONTINUE_STMT",
        "EXPR_STMT",
        "VAR_DECLARATION",
        "VAR_DECL_STMT",
        "FUNC_DECL_STMT",
        "FOR_STMT",
        "IF_STMT",
        "RETURN_STMT",
        "WHILE_STMT",
        "BREAK_STMT",
        "PARAM_DECLARATOR",
        "PARAM_ARRAY_DIMS",
        "PARAM_ARRAY_DIMS_TAIL",
        "PARAM_DECLARATOR_LIST",
        "VAR_DECLARATOR",
        "VAR_DECLARATOR_LIST",
        "INITIALIZER",
        "INITIALIZER_LIST",
        "ASSIGN_EXPR",
        "EXPR_LIST",
        "EXPR",
        "NOCOMMA_EXPR",
        "LOGICAL_OR_EXPR",
        "LOGICAL_AND_EXPR",
        "EQUALITY_EXPR",
        "RELATIONAL_EXPR",
        "ADDSUB_EXPR",
        "MULDIV_EXPR",
        "UNARY_EXPR",
        "BASIC_EXPR",
        "FUNC_CALL_EXPR",
        "ARRAY_DIMENSION_EXPR",
        "ARRAY_DIMENSION_EXPR_LIST",
        "LEFT_VAL_EXPR",
        "LITERAL_EXPR",
        "TYPE",
        "UNARY_OP",
        YY_NULLPTR};
#endif

#if YYDEBUG
    const short YaccParser ::yyrline_[] = {0,
        145,
        145,
        149,
        155,
        159,
        166,
        169,
        172,
        175,
        178,
        182,
        186,
        189,
        192,
        195,
        198,
        204,
        207,
        213,
        219,
        225,
        228,
        234,
        240,
        247,
        251,
        258,
        261,
        267,
        270,
        276,
        282,
        291,
        295,
        304,
        310,
        319,
        322,
        329,
        332,
        336,
        343,
        346,
        352,
        356,
        363,
        366,
        369,
        375,
        379,
        386,
        393,
        397,
        404,
        407,
        422,
        425,
        431,
        434,
        440,
        443,
        449,
        452,
        455,
        461,
        464,
        467,
        470,
        473,
        479,
        482,
        485,
        491,
        494,
        497,
        500,
        506,
        509,
        515,
        518,
        521,
        524,
        530,
        545,
        552,
        558,
        562,
        569,
        573,
        580,
        583,
        586,
        592,
        595,
        598,
        604,
        607,
        610};

    void YaccParser ::yy_stack_print_() const
    {
        *yycdebug_ << "Stack now";
        for (stack_type::const_iterator i = yystack_.begin(), i_end = yystack_.end(); i != i_end; ++i)
            *yycdebug_ << ' ' << int(i->state);
        *yycdebug_ << '\n';
    }

    void YaccParser ::yy_reduce_print_(int yyrule) const
    {
        int yylno  = yyrline_[yyrule];
        int yynrhs = yyr2_[yyrule];
        // Print the symbols being reduced, and their result.
        *yycdebug_ << "Reducing stack by rule " << yyrule - 1 << " (line " << yylno << "):\n";
        // The symbols being reduced.
        for (int yyi = 0; yyi < yynrhs; yyi++)
            YY_SYMBOL_PRINT("   $" << yyi + 1 << " =", yystack_[(yynrhs) - (yyi + 1)]);
    }
#endif  // YYDEBUG

#line 4 "frontend/parser/yacc.y"
}  // namespace FE
#line 2512 "frontend/parser/yacc.cpp"

#line 615 "frontend/parser/yacc.y"

void FE::YaccParser::error(const FE::location& location, const std::string& message)
{
    std::cerr << "msg: " << message << ", error happened at: " << location << std::endl;
}
