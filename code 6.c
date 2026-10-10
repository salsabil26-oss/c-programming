#include <stdio.h>
//1 theke 5 jog while loop
int main()
{
    int sum = 0;
    int i = 1;
    while(i <= 5) {
        sum = sum + i;
        i++;
    }
    printf("Jogfol: %d\n", sum);
    return 0;
}

