#include<stdio.h>
int main() {
    int num;
    printf("Enter number :- ");
    scanf("%d", &num);
    if(num >= 0) {
        printf("%d is positive", num);
    } else {
        printf("%d is negative", num);
    }
    return 0;
}

/*
 * Output :-
 * Enter number :- 12
 * 12 is positive
 *
 */