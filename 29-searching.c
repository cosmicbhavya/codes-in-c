//WAP to perform searching in an array
#include<stdio.h>
void main()
{
    int a[50],n,i,ind;
    printf("Enter the length of array: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("Enter element %d: ",i);
        scanf("%d", &a[i]);
    }
    printf("Elements of array:\n");
    for(i=0; i<n; i++){
        printf("a[%d] = %d\n", i,a[i]);
    }
    printf("Enter the index: ");
    scanf("%d", &ind);
    for(i=0; i<n; i++){
        if(a[i]==a[ind]){
            printf("Index %d contains %d", i,a[i]);
            break;
        }
        else if(i==n-1){
            printf("Not found.");
        }
    }
}