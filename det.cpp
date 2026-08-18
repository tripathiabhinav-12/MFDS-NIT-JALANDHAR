#include<iostream>
using namespace std;

int determinant(int a[10][10],int n){
    if(n==1)
        return a[0][0];
    if(n==2)
        return a[0][0]*a[1][1]-a[0][1]*a[1][0];
    int det=0,temp[10][10],sign=1;
    for(int col=0;col<n;col++){
        int subi=0;
        for(int i=1;i<n;i++){
            int subj=0;
        }
            

            //still trying