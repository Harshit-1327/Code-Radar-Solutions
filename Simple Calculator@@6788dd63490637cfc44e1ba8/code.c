#include <stdio.h>
int main(){
    int num1, num2, result;
    char operator;
    if (scanf("%d %d %c", &num1, &num2, &operator) != 3) {
        printf("error\n");
        return 1;
    }
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d\n", result);
            break;
        case '/':
            if (num2 == 0) {
                printf("error\n");
            } else {
                printf("%d\n", num1 / num2);
            }
            break;
        default:
            printf("error\n");
            break;
    }
    return 0;
}