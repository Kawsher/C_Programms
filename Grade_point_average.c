#include<stdio.h>

main()
{

    float marks;
    printf("Please enter your value:");

    scanf("%f",&marks);

    if(marks>=0 && marks<=32){
      printf("You got gpa: F");
    }

    else if(marks>=33 && marks<=39)

      printf("You got gpa: D");

    else if(marks>=40 && marks<=49)
      printf("You got gpa: C");

    else if(marks>=50 && marks<=59)
      printf("You got gpa: B");

    else if(marks>=60 && marks<=69)
      printf("You got gpa: A-");


    else if(marks>=70 && marks<=79)
        printf("You got gpa: A");

    else if(marks>=80 && marks<=100)
        printf("You got gpa: A+");
    else
        printf("Please input valid number");

}
