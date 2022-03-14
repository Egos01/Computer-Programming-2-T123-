/** A program that accepts an integer and converts it to the appropriate letter grade**/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
        printf("Enter your grade:");
        scanf("%d",&grade);

    if(grade < 50){
        printf("You got a letter F grade");
 }
    else if (grade >= 50&& grade <=59){
        printf("You got a letter D grade");
 }

    else if (grade >= 60&& grade <=67)
    {
        printf("You got a letter C grade, Please study hard!");
 }
    else if (grade >= 68&& grade <=75)
    {
        printf("You got a letter B- grade, Better luck next time!");
 }
    else if (grade >= 76&& grade <=83)
    {
        printf("You got a letter B grade, Keep it up!!!");
 }
    else if (grade >= 84&& grade <=91)
    {
        printf("You got  a letter A- grade,Congrats!!");
 }
    else if (grade >= 92&& grade <=100)
    {
        printf("You got a letter A grade, Congratulations!!!");
 }
    else{
        printf("You entered invalid grade, Please Try again");
}

    return 0;
}
