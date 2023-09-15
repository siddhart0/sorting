#include <stdio.h>
#include <stdlib.h>

int main(){

    int arr[] = {7,8,4,9,6,2,4,5,7,32,65,5,7};

    int len = sizeof(arr)/sizeof(arr[0]);
    printf("len - before %d\n", sizeof(arr)/sizeof(arr[0]));

    for(int i = 1;i<len-i;i++){
        for(int j=0;j<len-i-1;j++){
            if(arr[j]>arr[j+1]){
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    } 
    for(int i = 0; i<len;i++){
        printf("%d,", arr[i]);
    }
    printf("\nlen - after %d", sizeof(arr)/sizeof(arr[0]));
 

 
    return 0;
}