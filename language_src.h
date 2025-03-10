#pragma once

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define LANGUAGE_NAME "Yll & Tobi Cooperations" 
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

typedef enum {
    SCANF_INTEGER,
    SCANF_FLAOTING_POINT,
    SCANF_CHARACTER,
} scanf_type;

typedef struct {
    scanf_type type;
    union {
        integer* integer_value;
        floating_point* floating_point_value;
        character* character_value;
    } value;
} scanf_value;

typedef struct {
    character* name;
    data_type type;
    value value;
} variable;

typedef struct {
    character* name;
    data_type retur_type;
    statement* body;
} function;

//funcs

void init_language();
void shutdown_language();
void parse_source_code(const char* source_code);
void execute_statement(statement* expression);
void execute_expression(expression* expression);
void print_value(value value);
void error(const char* message);
void scanf_value_func(scanf_type type, void* value);
void for_loop(expression* initialization, expression* condition, expression* increment, statement* for_block);
void print_statement(const char* format_string, expression* arguments);
void function_call(const char* function_name, expression* arguments);

// math functionen
integer add(integer a, integer b);
integer subtract(integer a, integer b);
integer multiply(integer a, integer b);
integer divide(integer a, integer b);

floating_point add(floating_point a, floating_point b);
floating_point subtract(floating_point a, floating_point b);
floating_point multiply(floating_point a, floating_point b);
floating_point divide(floating_point a, floating_point b);

