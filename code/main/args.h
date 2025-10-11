#pragma once

#include "main.h"
#include "../extra/aux.h"

/*
 * checks if the arguments are valid and exits programs if not.
 * prints program usage in case no args provided or flag --help used.
 * prints version if requested.
 */
void validate_args(int argc, char* argv[]);

/*
 * gets the argument "amount" and returns it as integer if valid, else closes program.
 */
int parse_amount_arg(char* amount_arg);

/*
 * parses "input_file" arg and returns it as FILE* if valid, else closes program.
 */
FILE* parse_input_file(char* path);

/*
 * parses "output_file" arg and returns it as FILE* if valid, else closes program.
 */
FILE* parse_output_file(char* path);
