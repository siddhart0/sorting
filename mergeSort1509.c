#include <stdio.h>

void merge(int a[5], int b[5], int c[10]){
    int i=0,j=0,k=0;

    while (i<=4 && j<=4){
        while (a[i]<b[j]){
            c[k]=a[i];
            k++;
            i++;
        }
        while (b[j]<a[i]){
            c[k]=b[j];
            k++;
            j++;
        }
    }
    if(i>4){
        while (j<=4){
            c[k]=b[j];
            k++;
            j++;
        }
    }
    else{
        while (i<=4)
        {
            c[k]=a[i];
            k++;
            j++;
        }
        
    }
}

int main(){

    int arr1[] = {1,4,6,8,10};
    int arr2[] = {2,5,7,9,11};
    int arr[10];    

    merge(arr1,arr2,arr);
   

    for(int i =0;i<10;i++){
        printf("%d ",arr[i]);
    }




}