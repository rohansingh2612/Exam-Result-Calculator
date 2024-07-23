/*
AUTHOR: ROHAN SINGH
WORK OF PROGRAM: TO CALCULATE THE RESULT OF STUDENT ON BASIS OF THEIR 
                 MARKS IN THREE SUBJECTS (MATHS, PHYSICS, CHEMISTRY) 
                 WHERE EACH SUBJECT REQUIRES AT LEAST 33% MARKS, AND 
                 THE TOTAL PERCENTAGE SHOULD BE AT LEAST 40% FOR PASSING.
PROGRAM LANGUAGE: PURE C LANGUAGE
*/

#include <stdio.h>

int main()
{
    // Declare variables to store marks and marks out of for three subjects
    float maths, physics, chemistry, maths_out_of, physics_out_of, chemistry_out_of;

    // Prompt user to input maths marks and read input
    printf("enter your maths marks: ");
    scanf("%f", &maths);

    // Prompt user to input total marks for maths and read input
    printf("enter your maths marks out of: ");
    scanf("%f", &maths_out_of);

    // Calculate percentage marks in maths
    float m = (maths / maths_out_of) * 100;

    // Prompt user to input physics marks and read input
    printf("enter your physics marks: ");
    scanf("%f", &physics);

    // Prompt user to input total marks for physics and read input
    printf("enter your physics marks out of: ");
    scanf("%f", &physics_out_of);

    // Calculate percentage marks in physics
    float p = (physics / physics_out_of) * 100;

    // Prompt user to input chemistry marks and read input
    printf("enter your chemistry marks: ");
    scanf("%f", &chemistry);

    // Prompt user to input total marks for chemistry and read input
    printf("enter your chemistry marks out of: ");
    scanf("%f", &chemistry_out_of);

    // Calculate percentage marks in chemistry
    float c = (chemistry / chemistry_out_of) * 100;

    // Display percentage marks in each subject
    printf("your maths percentage is %f%%\n", m);
    printf("your physics percentage is %f%%\n", p);
    printf("your chemistry percentage is %f%%\n", c);

    // Calculate total percentage based on marks obtained in all subjects out of 300
    float total_percentage = ((m + p + c) / 300) * 100;

    // Display total percentage
    printf("your total percentage is %f\n\n", total_percentage);

    // Check if the student passes or fails based on criteria
    if (m >= 33.0 && p >= 33.0 && c >= 33.0 && total_percentage >= 40)
    {
        printf("YOU ARE PASSED IN EXAM\n");
    }
    else
    {
        printf("YOU ARE FAILED IN EXAM\n");
    }

    return 0;
}
