#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// void swap(int *n1, int *n2)
// {
//     int temp;
//     temp = *n1;
//     *n1 = *n2;
//     *n2 = temp;
// }
// void addONe(int *ptr)
// {
//     (*ptr)++;
// }
int main()
{
    int *ptr;
    int n;
    scanf("%d\n", &n);
    ptr = (int *)calloc(n, sizeof(int));
    int res = -1;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
        // print()
        if (res < *(ptr + i))
        {
            res = *(ptr + i);
        }
    }
    printf("%d", res);
    free(ptr);

    // int *ptr;
    // int n = 5;
    // ptr = (int *)malloc(n * sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", ptr + i);
    // }
    // for (int j = 0; j < n; j++)
    // {
    //     printf("%d ", *(ptr + j));
    // }
    // free(ptr);
}
// int a, b;
// scanf("%d%d", &a, &b);
// printf("the values before swaping %d and %d\n", a, b);
// swap(&a, &b);
// printf("the values after swaping %d and %d\n", a, b);
// int a;
// scanf("%d", &a);
// addONe(&a);
// printf("%d", a);
// char arr[] = {'1', '2'};

// printf("%s", arr);
// char str1[] = "apples";
// char str2[] = "bananas";
// int result = strcmp(str1, str2);
// printf("%d\n", result);
// if (result == 0)
// {
//     printf("the two string are equal");
// }
// else
// {
//     printf("the two strings are not equal");
// }
// char word[] = "this is sai";
// char copyword[20];
// strcpy(copyword, word);
// printf("%s", copyword);
// char word[] = "hello";
// // char word[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
// int len = strlen(word);
// printf("%d", len);

// float a = 12.4;
// double b = 13.4;
// printf("this is c programming\n");
// printf("Number a is: %f\n", a);
// printf("Number a is:%lf\n", b);
// printf("size of a is %d", sizeof(b));
// int a;
// printf("enter a integer\n");
// scanf("%d", &a);
// printf("this is value of a: %d", a);
// char ch;
// printf("enter the character value\n");
// scanf("%c", &ch);
// printf("the character value is %c", ch);
// printf("the ascii value of ch is %d", ch);
// return 0;
// int a;
// float b;
// double c;
// printf("enter the values of a b and c values\n");
// scanf("%d%f%lf", &a, &b, &c);
// printf("the values of a b and c is %d %.2f %.2lf", a, b, c);
// int age;
// printf("enter your age\n");
// scanf("%d", &age);
// if (age >= 18)
// {
//     printf("your are eligible for voting");
// }
// else
// {
//     printf("your are not eligible for voting");
// }
// int a, b;
// printf("enter the values of  a and b\n");
// scanf("%d%d", &a, &b);
// printf("the values of a and b before swaping %d and %d\n", a, b);
// int temp;
// temp = a;
// a = b;
// b = temp;
// printf("the values of a and b after swaping %d and %d\n", a, b);
// int a;
// scanf("%d", &a);
// while (a)
// {
//     printf("%d\t", a--);
//     // a--;
// }
// int a, sum;
// do
// {
//     printf("enter a number \n");
//     scanf("%d", &a);
//     sum += a;
// } while (a != 0);
// printf("the total sum is %d", sum);
// char operator;
// int n1, n2;
// printf("enter any one character of these four types (+,-,*,/)\n");
// scanf("%c", &operator);
// scanf("%d %d", &n1, &n2);
// switch (operator)
// {
// case '+':
//     printf("result of %d + %d = %d", n1, n2, n1 + n2);
//     break;
// case '-':
//     printf("result of %d - %d = %d", n1, n2, n1 - n2);
//     break;
// case '*':
//     printf("result of %d * %d = %d", n1, n2, n1 * n2);
//     break;
// case '/':
//     printf("result of %d / %d = %d", n1, n2, n1 / n2);
//     break;
// default:
//     printf("error the operator doesn't match");
// }
// char a;
// int lowercase, uppercase;
// printf("enter the character \n");
// scanf("%c", &a);
// lowercase = ((a == 'a') || (a == 'e') || (a == 'i') || (a == 'o') || (a == 'u'));
// uppercase = ((a == 'A') || (a == 'E') || (a == 'I') || (a == 'O') || (a == 'U'));
// if (lowercase || uppercase)
// {
//     printf("the character is vowel\n");
// }
// else
// {
//     printf("the character is consonant\n");
// }
// int year;
// scanf("%d", &year);
// if (year % 4 == 0 && year % 100 != 0)
// {
//     printf("leap year");
// }
// else if (year % 100 == 0 && year % 400 == 0)
// {
//     printf("leap year");
// }
// else
// {
//     printf("not a leap year");
// }
// int arr[] = {1, 2, 3, 4, 5};
// int arrsize = sizeof(arr) / sizeof(arr[0]);
// printf("the size of the arr is %d\n", arrsize);
// for (int i = 0; i < arrsize; i++)
// {
//     printf("%d\n", arr[i]);
// }
// int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
// for (int i = 0; i < 9; i++)
// {
//     scanf("%d", &arr[i]);
// }
// printf("I am printing the output of the array :");
// for (int i = 0; i < 9; i++)
// {
//     printf("%d ", arr[i]);
// }
// printf("\n%d\n", arr[4]);
// char str[6] = {'h', 'e', 'l', 'l', '0', '\0'};
// // int size = sizeof(str) / sizeof(sizeof(str[0]));
// printf("%s", str)
// int age = 123;
// int *age1 = &age;
// printf("%d %d\n", age, age1);
// int *p1, p2;
// scanf("%d %d", p1, p2);
// printf("%d %d", p1, p2);
//     int a = 12;
//     int *b = &a;
//     printf("the value of a integer : %d\n", a);
//     printf("the address of a integer : %p", b);
// int *ptr, a;
// a = 5;
// ptr = &a;
// printf("the address of  a variable is a is : %d\n", a);
// printf("hello world");
// int *ptr, a;
// a = 5;
// ptr = &a;
// printf("the value of a integer : %d\n", a);
// printf("the address of a variable %d\n", ptr);
//----------------------------------------------------combination of pointer and arrays------------
// int n = 5;
// int arr[n];
// int sum = 0;
// for (int i = 0; i < n; i++)
// {
//     scanf("%d", &arr[i]);
// }
// for (int i = 0; i < n; i++)
// {
//     printf("%d ", *(arr + i));
//     sum += *(arr + i);
// }
// // printf("the starting address the array %d  %d", arr, arr + 1);
// printf("\n%d", sum);
// return 0;