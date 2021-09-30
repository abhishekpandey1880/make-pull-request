//code added by Abhishek on 30th sept
#include <iostream>
using namespace std;

void swap(int ar[],int i,int j){
    int temp=a[i];
    ar[i]=a[j];
    ar[j]=temp;
}
void sort_012(int a[],int n){
    int l=0;
    int h=n-1;
    int m=0;
    
    while(m<=h){
        if(a[mid]==0){
            swap(a,l,m);
            l++;
            m++;
        }
        else if(a[m]==1){
            m+;
        }
        else{
            swap(a,m,h);
            h--;
        }
    }
}

int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   sort_012(a,n);
   
   for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
   }
}
