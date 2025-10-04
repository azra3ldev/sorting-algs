#pragma once

#include "main.h"

void validate_args(int argc, char* argv[]);
int parse_amount_arg(char* amount_arg);
FILE* parse_input_file(char* path);
FILE* parse_output_file(char* path);
