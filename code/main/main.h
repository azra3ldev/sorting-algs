#pragma once

#include <stdio.h>
#include <stdlib.h>

#include "args.h"
#include "sort.h"

/*
 * this is for if the user just calls the program to see help or version,
 * meaning there was no sorting, so the program din't end with sucess nor with failure.
 */
#define EXIT_NOTHING 2
