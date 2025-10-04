#include "main.h"

int main(int argc, char* argv[]) {
    validate_args(argc, argv);

    int amount = parse_amount_arg(argv[2]);

    FILE* input_file = parse_input_file(argv[3]);
    FILE* output_file = parse_output_file(argv[4]);

    int* array = read_array(amount, input_file);

    double time_taken = sort(array, amount, argv[1]);

    print_array(array, amount, output_file);
    printf("%s: execution successful!\n", argv[1]);
    printf("output saved to \"%s\"\n", argv[4]);
    printf("time taken: %lf seconds\n", time_taken);

    free(array);
    fclose(input_file);
    fclose(output_file);

    return 0;
}
