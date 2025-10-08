#include "args.h"

/*
 * checks if the arguments are valid and exits programs if not.
 * prints program usage in case no args provided or flag --help used.
 * prints version if requested.
 */
void validate_args(int argc, char* argv[]) {
    if(argc == 1) {
        printf(NAME ", by alza3ldev, version: " VERSION "\n\n");
        printf("this program uses sorting algorithms to sort integer arrays.\n\n");
        printf("usage: " NAME " <algorithm> <num_amount> <input_file> <output_file>\n");
        printf("try --help or -h for more information.\n");
        exit(EXIT_NOTHING);
    }
    if (argc == 2 && (string_equal(argv[1], "--help") || string_equal(argv[1], "-h"))) {
        printf("usage: " NAME " <algorithm> <num_amount> <input_file> <output_file>\n\n");
        FILE* message = fopen("static/help.txt", "r");
        char buffer[256];
        while(fgets(buffer, 256, message))
            printf("%s", buffer);
        fclose(message);
        exit(EXIT_NOTHING);
    }
    if (argc == 2 && (string_equal(argv[1], "--version") ||string_equal(argv[1], "-v"))) {
        printf("version: " VERSION "\n");
        exit(EXIT_NOTHING);
    }
    if (argc != 5) {
        fprintf(stderr, "ERROR: invalid syntax.\n");
        printf("usage: " NAME " <algorithm> <num_amount> <input_file> <output_file>\n");
        printf("try --help or -h for more information.\n");
        exit(EXIT_FAILURE);
    }
}

/*
 * gets the argument "amount" and returns it as integer if valid, else closes program.
 */
int parse_amount_arg(char* amount_arg) {
    int amount = atoi(amount_arg);
    if (amount < 1) {
        fprintf(stderr, "ERROR: invalid amount: %s\n", amount_arg);
        exit(EXIT_FAILURE);
    }

    return amount;
}

/*
 * parses "input_file" arg and returns it as FILE* if valid, else closes program.
 */
FILE* parse_input_file(char* path) {
    FILE* file = fopen(path, "r");
    if (!file) {
        fprintf(stderr, "ERROR: could not open %s\n", path);
        exit(EXIT_FAILURE);
    }

    return file;
}

/*
 * parses "output_file" arg and returns it as FILE* if valid, else closes program.
 */
FILE* parse_output_file(char* path) {
    FILE* file = fopen(path, "w");
    if (!file) {
        fprintf(stderr, "ERROR: could not save to %s\n", path);
        exit(EXIT_FAILURE);
    }

    return file;
}
