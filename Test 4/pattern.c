#include <stdio.h>

int main() {
    int n = 5;  
    int currentNumber = 1;   

   
    for (int i = 0; i < n; ++i) {
        
        for (int j = 0; j <= i; ++j) {
            printf("%-5d", currentNumber);
            currentNumber += 2;  
        }

        printf("\n");  
    }

    return 0; 
}



