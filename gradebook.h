#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

//Declares variables of data type double for higher precision of final grade
double quiz_avg, hw_avg, test_avg, final_grade;
double hw1, hw2, hw3, quiz1, quiz2, test1, test2, project, final;

/**
 * Calculate homework average grade from three homework values from input file.
 *
 * Parameters:
 *      None
 *
 * Return:
 *   Calculated homework average grade from three homework assignments.
 */
double homework_average();

/**
 * Calculate quiz average grade from two quiz values from input file.
 *
 * Parameters:
 *   None
 *
 * Return:
 *  Calculated quiz average grade.
 */
double quiz_average();

/**
 * Calculate test average grade from two test values from input file.
 *
 * Parameters:
 *   None
 *
 * Return:
 *  Calculated test average grade.
 */
double test_average();

/**
 * Calculate final grade by taking calculated test average, quiz average,
 *      homework average, and project and final exam grade and weighting them.
 *
 * Parameters:
 *   None
 *
 * Return:
 *  Final calculated grade for a student.
 */
double calculate_final_grade();

#endif
