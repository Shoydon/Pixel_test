#include<stdio.h>

int main() {
    int temp, min, n, j;
    int a[100];
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    
    for(int i = 0; i < n - 1; i++) {
        min = i;
        for(j = i + 1; j < n; j++) {
            if(a[j] < a[min]) {
                min = j;
            }
        }
        
        temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
    
    printf("The sorted array is: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
