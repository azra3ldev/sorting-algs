#include "args.h"

void validate_args(int argc, char* argv[]) {
    if(argc == 1) {
        print_text_file("static/version.txt");
        putchar('\n');
        print_text_file("static/description.txt");
        putchar('\n');
        print_text_file("static/syntax.txt");
        exit(EXIT_NOTHING);
    }
    if (argc == 2 && (string_equal(argv[1], "--help") || string_equal(argv[1], "-h"))) {
        print_text_file("static/syntax.txt");
        putchar('\n');
        print_text_file("static/info.txt");
        exit(EXIT_NOTHING);
    }
    if (argc == 2 && (string_equal(argv[1], "--version") ||string_equal(argv[1], "-v"))) {
        print_text_file("static/version.txt");
        exit(EXIT_NOTHING);
    }
    if (argc != 5) {
        fprintf(stderr, "ERROR: invalid syntax.\n");
        putchar('\n');
        print_text_file("static/syntax.txt");
        exit(EXIT_FAILURE);
    }
}

int parse_amount_arg(char* amount_arg) {
    int amount = atoi(amount_arg);
    if (amount < 1) {
        fprintf(stderr, "ERROR: invalid amount: %s\n", amount_arg);
        exit(EXIT_FAILURE);
    }

    return amount;
}

FILE* parse_input_file(char* path) {
    FILE* file = fopen(path, "r");
    if (!file) {
        fprintf(stderr, "ERROR: could not open %s\n", path);
        exit(EXIT_FAILURE);
    }

    return file;
}

FILE* parse_output_file(char* path) {
    FILE* file = fopen(path, "w");
    if (!file) {
        fprintf(stderr, "ERROR: could not save to %s\n", path);
        exit(EXIT_FAILURE);
    }

    return file;
}
