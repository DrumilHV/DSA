#include<stdio.h>
#include<stdlib.h>

int count = 0;
void merge(int b[],int c[], int a[], int n1, int n2, int n){
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(b[i]<=c[j]){
            a[k++] = b[i++];
            count++;
        }
        else{
            a[k++] = c[j++];
            count++;
        }
    }
    while (i<n1){
        count++;
        a[k++] = b[i++];
    }
    while (j<n2)
    {
        count++;
        a[k++] = c[j++];
    }
}

void mergeSort(int a[], int n){
    if(n<=1){
        return;
    }
    int b[n/2];
    int c[n/2+1];
    int n1 = 0,n2=0;
    for(int i=0;i<n/2;i++){
        b[n1++] = a[i];
    }
    for(int i = n/2;i<n;i++){
        c[n2++] = a[i];
    }
    mergeSort(b,n1);
    mergeSort(c,n2);

    merge(b,c,a,n1,n2,n);
}
int main(){
    int a[10] = {6,77,3,2,1,23,42,45,88,91};

    mergeSort(a,10);
    for(int i=0;i<10;i++){
        printf("%d ", a[i]);
    }
    printf("\ntotal count: %d",count);
}
