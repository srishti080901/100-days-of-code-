
#include <stdio.h> 
 
int main() { 
    int i, j; 
     
    // Outer loop for the rows (5 rows) 
    for(i = 0; i < 5; i++) { 
        // Inner loop for the columns (5 asterisks per row) 
        for(j = 0; j < 5; j++) { 
            printf("*"); 
        } 
        // Move to the next line after printing 5 asterisks 
        printf("\n"); 
    } 
       return 0; 
}

