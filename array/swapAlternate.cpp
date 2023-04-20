// #include<stdio.h>
// #include<stdlib.h>
#include<iostream>
using namespace std;
void swap(int *a,int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void swapAlternate(int a[],int n){
    int i=0;
    for(i=0;i<n-1;i+=2)
    {
     swap(&a[i],&a[i+1]);
    }
    
}
int main(){
    int a[] = {1,2,3,4,5,6};
    int an = 6;
    int b[] = {1,2,3,4,5};
    int bn = 5;
    swapAlternate(a,an);
    swapAlternate(b,bn);
    for(int i=0;i<an;i++)
        cout<<a[i]<<" ";
    cout<<"\n";
    for(int i=0;i<bn;i++)
        cout<<b[i]<<" ";

}