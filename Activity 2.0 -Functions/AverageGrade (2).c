/******************************************************************************
/*
* Create a C program that calculates the average of students' grades(five subjects)*/

#include <stdio.h>
int GradeSum(int n1, int n2, int n3, int n4, int n5);
float AveGrades(float sum, float average);

int main()
{
    int n1, n2, n3, n4, n5, sum;
    float average;

    printf("Please Enter 5 grades:\n");
    scanf("\n%d \n%d \n%d \n%d \n%d", &n1, &n2, &n3, &n4, &n5);

    sum = GradeSum(n1, n2, n3, n4, n5);
    average = AveGrades(sum, average);

    printf("Average = %.2f", average);

    return 0;
}

    int GradeSum (int n1, int n2, int n3, int n4, int n5)
    {
        int result;
        result = n1 + n2 + n3 + n4 + n5;
        return result;
    }

    float AveGrades (float sum, float average)

    {
        float fAverage;
        fAverage = sum / 5;
        return fAverage;
    }
