#include <stdio.h>

int main()
{

    int age;
    printf("enter your age :");
    scanf("%d", &age);                      // scanf allows the user to enter in some informtion into our program
    printf("you are %d years old \n", age); //& is called a pointer ,when we use scanf and u want to store information inside of  like an integer or like a character u need to use ampersand.
    double gpa;
    printf("enter your gpa :");
    scanf("%lf", &gpa); // in scanf for double we use lf and in printf we use f
    printf("your gpa is %f \n", gpa);

    char gra;
    printf("enter your grade :");
    scanf("%c", &gra);
    printf("your grade is %c ", gra);
    return 0;
}