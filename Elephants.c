#include <stdio.h>

int main() {
    int a;
    printf("Enter distance(value of x): ");
    scanf("%d", &a);

    int steps = a/5;

    if(steps != 0){
    steps += 1;
    }
    
    printf("Min. number of steps: %d", steps);

    return 0;
}
