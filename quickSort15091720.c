#include <stdio.h>

int split(int n[], int min, int max){
    int i,j,key,t;
    key=n[min];

    i = min+1;
    j = max;

    while (i<j){
        while (n[i]<key ){
            i++;
        }
        while (n[j]>key){
            j--;
        }
        if(i<j){
            int t = n[i];
            n[i] = n[j];
            n[j] = t;
        }
    }
    if(i>=j){
        int t = n[min];
        n[min] = n[j];
        n[j] = t;
    }
    return j;
}

void quickSort(int n[], int min, int max){
    int z;
    if(min<=max){
        z=split(n,min,max);
        quickSort(n,min,z-1);
        quickSort(n,z+1,max);
    }
}

int main(){
    int arr[] = {67,756,4,3,56,786,98};

    int len = sizeof(arr)/sizeof(arr[0]); 
    quickSort(arr,0,len-1);

    for(int i =0;i<len;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}