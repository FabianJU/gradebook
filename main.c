#include "gradebook.h"

int main(int argc, char **argv) {

    // declare String variables to store student first and last name
    char First_Name[50];
    char Last_Name[50];

    // Not enough command line arguments print usage message
    if (argc < 3) {
        printf("Usage: %s <first index> <last index>\n", argv[0]);
        return 1;
    }

    //Too many command line arguments print usage message
    if (argc > 3) {
        printf("Usage: %s <first index> <last index>\n", argv[0]);
        return 1;
    }

    //Open input file to be read by program using command line
    FILE *file_input= fopen(argv[1], "r");

    //Error opening the input/read file, exit code 2
    if (file_input == NULL) {
        printf("Error opening %s for reading\n", argv[1]);
        return 2;
    }

    //Open a output file to write gradebook using command line
    FILE *file_output = fopen(argv[2], "w");

    //Error opening output file to write grades, exit code 3
    if (file_output == NULL) {
        printf("Error opening %s for writting\n", argv[2]);
        return 3;
    }

    //Scan/get values from input file for format of gradebook as indicated by
    //first name, last name, homeworks, quizzes, tests, project and final exam.
    //As long as the input file does not reach EOF, while loop continues.
    while(fscanf(file_input, "%s %s %lf %lf %lf %lf %lf %lf %lf %lf %lf",
          First_Name, Last_Name, &hw1, &hw2, &hw3, &quiz1, &quiz2, &test1,
          &test2, &project, &final) != EOF) {

        //Call functions from gradebook.c to calculate values for program off of
        // values recieved from fscanf
        homework_average();
        quiz_average();
        test_average();
        calculate_final_grade();

        //write contents of first name, last name, and final calculated grade to
        // an output file of name specified by command line.
        fprintf(file_output, "%s %s: %f\n", First_Name, Last_Name, final_grade);
    }

    //Close input file
    fclose(file_input);
    
    //Close output file
    fclose(file_output);

    return 0;
}
