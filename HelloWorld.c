// #include <stdio.h>
// #include <string.h>

// int main()
// {
// printf("1\t2\t3\n4\t5\t6\n7\t8\t8");

// printf("\'I love pizza\' - Abraham Lincoln probably");

// int age = 24;
// float gpa = 2.05;
// char grade = 'C';
// char name[] = "Bro";

// printf("Hello %s\n", name);
// printf("You are %d years old\n", age);
// printf("Your average grade is %c\n", grade);
// printf("Your gpa is %f\n", gpa);

// float item1 = 5.75;
// float item2 = 10.00;
// float item3 = 100.99;

// printf("Item 1: $%4.1f\n", item1);
// printf("Item 1: $%8.1f\n", item2);
// printf("Item 1: $%7.1f\n", item3);

// constant = fixed value that can not be altered by the program during its excution

// const float PI = 3.147645;
// printf("%f", PI);

// float pi = 3.14159;

// printf("%f", pi);

// int x = 5;
// int y = 2;

// float z = x / (float)y;

// int z = x % y;

// x++;
// y--;

// int x = 10;

// x = x + 2;
// x+=2;

// x = x - 3;
// x-=3;

// x = x * 4;
// x*=4;

// x = x /5;
//  x/=5;

// x = % 2;
// x%=2;

// printf("%d", y);

// char name[25];
// int age;

// printf("\nWhat's your name?");
// scanf("%s", &name);
// fgets(name, 25, stdin);
// name[strlen(name)-1] = '\0';

// printf("\nHow old are you?");
// scanf("%d", &age);

// printf("\nHello %s, how are you?", name);
// printf("\nYou are %d years old", age);

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main()
// {

//     // double A = sqrt(9);
//     // double B = pow(2, 4);
//     // int C = round(3.14);
//     // int D = ceil(3.14);
//     // int E = floor(3.99);
//     // double F = fabs(-100);
//     // double G = logs(3);
//     // double H;
//     // double I;
//     // double J;

//     // printf("\n%lf", F);

//     const double PI = 3.14159;
//     double radius;
//     double circumference;

//     printf("\nEnter the radius of a circle: ");
//     scanf("%lf", &radius);

//     circumference = 2 * PI * radius;

//     printf("circumference: %lf", circumference);

//     return 0;
// }


    // float height;
    // printf("How tall are you?");

    // scanf("%f", &height);
    // printf("\nYou are %.2f tall", height);

    // write the program to calculate a average of 3 numbers and square

    //  double num1, num2, num3, average, squaredAverage;

    //    double num1, num2, num3, average, squaredAverage;

    //     printf("Enter three numbers: ");
    //     scanf("%lf %lf %lf", &num1, &num2, &num3);

    //     average = (num1 + num2 + num3) / 3;

    //     printf("The average of the three numbers is: %.2lf\n", average);

    //     squaredAverage = average * average;

    //     printf("The squared average is: %.2lf\n", squaredAverage);

// #include <stdio.h>
// int main()
// {

//     double weight, height, bmi;

//     printf("Enter your weight in kilograms: ");
//     scanf("%lf", &weight);

//     printf("Enter your height in meters: ");
//     scanf("%lf", &height);

//     bmi = weight / (height * height);

//     printf("Your BMI is: %.2lf\n", bmi);

//     if (bmi < 18.5)
//     {
//         printf("You are underweight.\n");
//     }
//     else if (bmi >= 18.5 && bmi < 25)
//     {
//         printf("You are in the healthy weight range.\n");
//     }
//     else if (bmi >= 25 && bmi < 30)
//     {
//         printf("You are overweight.\n");
//     }
//     else
//     {
//         printf("You are obese.\n");
//     }

//     return 0;
// }


// #include <stdio.h>
// #include <math.h>

// int main() {
//     char choice;
//     double angle, opposite, adjacent, hypotenuse;

//     printf("SOH CAH TOA Calculator\n");
//     printf("-----------------------\n");
//     printf("Choose a formula:\n");
//     printf("S - sine (opposite/hypotenuse)\n");
//     printf("C - cosine (adjacent/hypotenuse)\n");
//     printf("T - tangent (opposite/adjacent)\n");
//     printf("Enter your choice: ");
//     scanf(" %c", &choice);

//     switch (choice) {
//         case 'S':
//             printf("Enter the opposite side: ");
//             scanf("%lf", &opposite);
//             printf("Enter the hypotenuse: ");
//             scanf("%lf", &hypotenuse);
//             angle = asin(opposite / hypotenuse) * 180 / M_PI; 
//             printf("The angle is: %.2lf degrees\n", angle);
//             break;

//         case 'C':
//             printf("Enter the adjacent side: ");
//             scanf("%lf", &adjacent);
//             printf("Enter the hypotenuse: ");
//             scanf("%lf", &hypotenuse);
//             angle = acos(adjacent / hypotenuse) * 180 / M_PI;
//             printf("The angle is: %.2lf degrees\n", angle);
//             break;

//         case 'T':
//             printf("Enter the opposite side: ");
//             scanf("%lf", &opposite);
//             printf("Enter the adjacent side: ");
//             scanf("%lf", &adjacent);
//             angle = atan(opposite / adjacent) * 180 / M_PI;
//             printf("The angle is: %.2lf degrees\n", angle);
//             break;

//         default:
//             printf("Invalid choice.\n");
//     }

//     return 0;
// }
