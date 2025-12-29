/*
    Name: Sujal pandey-10405
    Practical 7 - Q3: Print alphabet pattern
*/

#include <stdio.h>

int main() {
    for (int i = 1; i <= 4; i++) {
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }

    /*
    OUTPUT:
    A
    AB
    ABC
    ABCD
    */

    return 0;
}
