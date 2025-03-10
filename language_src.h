#pragma once

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define LANGUAGE_NAME "idk"
#define LANGUAGE_BERSION "1.0"

typedef int integer;
typedef float floating_point;
typedef char character;

void print(const char* message);
void error(const char* message);

typedef struct{
    int x;
    int y;
} point;

typedef enum{
    INTEGER_TYPE,
    FLOATING_POINT_TYPE,
    CHARACTER_TYPE,
} data_type;

typedef struct{
    data_type type;
    union {
        integer integer_value;
        floating_point floating_point_value;
        character character_value;
    } value;
} value;

typedef enum {
    ADDITION_OPERATOR,
    SUBTRACTION_OPERATOR,
    MULTIPLICATION_OPERATOR,
    DIVISION_OPERATOR,
    EQAULITY_OPERATOR,
    INEQUALITY_OPERATOR,
    LESS_THAN_OPERATOR,
    GREATER_THAN_OPERATOR,
} operator_type;

typedef struct {
    operator_type type;
    value left_operand;
    value right_operand;
} expression;

typedef enum {
    ASSIGNMENT_STATEMENT,
    IF_STATEMENT,
    WHILE_STATEMENT,
    FUNCTION_CALL_STATEMENT,
} statement_type;

typedef struct {
    statement_type type;
    union {
        struct {
            character* variable_name;
            expression* expression;
        } assignment_statement;
        struct {
            expression* condition;
            struct {
                statement* then_block;
                statement* else_block;
            } if_statement;
        } if_statement;
        struct {
            expression* condition;
            statement* while_block;
        } while_statement;
        struct {
            character* function_name;
            expression* arguments;
        } function_call_statement;
    } statement;
} statement;

typedef struct {
    character* name;
    data_type type;
    value value;
} variable;

//funcs

void init_language();
void shutdown_language();
void parse_source_code(const char* source_code);
void execute_statement(statement* expression);
void execute_expression(expression* expression);
void print_value(value value);
void error(const char* message);