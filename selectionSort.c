#include <stdio.h>
#include <stdlib.h>






int main(){
    
    int arr[] = {12,45,23,51,19,8};
    int len = sizeof(arr)/sizeof(arr[0]);


    printf("len - before %d\n", sizeof(arr)/sizeof(arr[0]));


    for(int i = 0;i<len-1;i++){
            for(int j = i+1;j<len;j++){
                if(arr[i]>arr[j]){
                    int t = arr[i];
                    arr[i] = arr[j];
                    arr[j] = t;
                }
            }
        }
 
    for(int i = 0; i<len;i++){
        printf("%d,", arr[i]);
    }
    printf("\nlen - after %d", sizeof(arr)/sizeof(arr[0]));
 

 
    return 0;
}