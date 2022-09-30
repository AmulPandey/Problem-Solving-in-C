#include <stdio.h>

int main() {
    int y, r;
   

    printf("----Enter the year----\n");
    scanf("%d", &y);

    r = y % 400 == 0 || (y % 100 != 0 && y % 4 == 0);

    switch (r) {
        case 1:
            printf("\n%d is the leap year.\n", y);
            break;

        case 0:
            printf("\n%d is not the leap year.\n", y);
            break;

        default:
            printf("\n%d is not the leap year.\n", y);
    }
    return 0;
}