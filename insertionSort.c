#include <stdio.h>
#include <stdlib.h>


int main(){
    
    int arr[] = {12,45,23,51,19,8};
    int len = sizeof(arr)/sizeof(arr[0]);


    printf("len - before %d\n", sizeof(arr)/sizeof(arr[0]));

    for(int i = 1;i<len;i++){
        int current = arr[i];
        int j = i-1;
        while(arr[j]>current && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }

 
    for(int i = 0; i<len;i++){
        printf("%d,", arr[i]);
    }
    printf("\nlen - after %d", sizeof(arr)/sizeof(arr[0]));
 

 
    return 0;
}