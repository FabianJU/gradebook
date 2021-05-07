#include "gradebook.h"

double homework_average() {
    hw_avg = (hw1 + hw2 + hw3) / 3;
    return hw_avg;
}

double quiz_average() {
    quiz_avg = (quiz1 + quiz2) / 2;
    return quiz_avg;
}

double test_average() {
    test_avg = (test1 + test2) / 2;
    return test_avg;
}

/** Weights of each category:
 *Homework: 10 percent
 *Quizzes: 10 percent
 *Test/Midterms: 40 percent
 *Project: 15 percent
 *Final Exam: 25 percent
*/
double calculate_final_grade() {
    final_grade = (quiz_avg * 0.10) + (hw_avg * 0.10) + (test_avg * 0.40) +
                  (project * 0.15) + (final * 0.25);
    return final_grade;
}
