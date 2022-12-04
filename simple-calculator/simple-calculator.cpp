#include <stdio.h>

int main() {

    char opt;
    int v1;
    int v2;
    float res;
    char inf[] = "Infinity";

    printf("choose an operator (+ , - , * , / ) \n");
    scanf_s("%c", &opt);

    if (opt == '+') {
        printf("you are choosen addition\n");
    }
    else if (opt == '-') {
        printf("you are choosen subtraction \n");
    }
    else if (opt == '*') {
        printf("you are choosen multiplication \n");
    }
    else if (opt == '/') {
        printf("you are choosen division \n");
    }
    else {
        printf("something went wrong please choose correct operator\n");
        return 1;
    }
    printf("Please enter your first number: \n");
    scanf_s("%i", &v1);
    printf("Please enter your second number: \n");
    scanf_s("%i", &v2);


    switch (opt) {
    case '+':
        res = v1 + v2;
        printf(" %i, %i  - addition value is: %f \n", v1, v2, res);
        break;
    case '-':
        res = v1 - v2;
        printf(" %i, %i  - subtraction value is: %f \n", v1, v2, res);
        break;
    case '*':
        res = v1 * v2;
        printf(" %i, %i  - multiplication value is: %f \n", v1, v2, res);
        break;
    case '/':
        if (v2 == 0) {
            printf(" %i, %i  - division value is: %s \n", v1, v2, inf);
            break;
        }
        res = v1 / v2;
        printf(" %i, %i  - division value is: %f \n", v1, v2, res);
        break;
    default:
        printf("Something went wrong, please check options...\n");
        break;
    }

}
