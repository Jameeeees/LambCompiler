//LambLexer
//by James 2017/04/06

#ifndef LAMBLEXER_LEX_CONFIG_H_
#define LAMBLEXER_LEX_CONFIG_H_


#include <iostream>
#include <cstring>
#include <fstream>
#include <cassert>
#include <cstdio>
#include <vector>
#include <queue>
#include <unordered_map>

/*
 * The top test switch
 */
#define TEST_ON
//#undef TEST_ON

/*
 * The lexer test switch, see lex.cpp or compiler.cpp
 */
#define TEST_LEXER
#undef TEST_LEXER

/*
 * The parser test switch, see compiler.cpp
 */
#define TEST_PARSER
//#undef TEST_PARSER

/*
 * Output token stream to console or not, see lex.h
 */
#define DUMP_TOKEN_STREAM
#undef DUMP_TOKEN_STREAM

/*
 * Print the log
 */
#define PRINT_LOG
//#undef PRINT_LOG

/* 
 * This macro is for DEBUG message
 */
#ifdef PRINT_LOG
#define PRINT(msg) std::cout << "msg: " << msg << std::endl;
#define PRINT_TOKEN(token) std::cout << "token: " << token << std::endl;
#else
#define PRINT(msg) do{}while(0)
#define PRINT_TOKEN(token) do{}while(0)
#endif

/*
 * If show keyword judgement when dumping token stream to console
 */
#define SHOW_KEYWORD_FILTER

/*
 * The length limit of identifier
 */
#define LONGEST_IDENTIFIER_LENGTH 32

/*
 * Version info
 */
const std::string version = "0.0.2";


#endif /* end of LAMBLEXER_LEX_CONFIG_H_ */