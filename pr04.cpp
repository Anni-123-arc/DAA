#include<iostream>
#include <bits/stdc++.h>

using namespace  std;

void countdup(int a[],int n){
     // int count=0;
      int k=0;
       for (int i=k ; i <n ; ++i) {
          int j=i;
          int count=1;

          if(a[i]==a[j+1]){
            count++;
            j++;
           cout<<a[i]<<" "<<count<<endl;

         }
        //cout<<a[i]<<" "<<count+1<<endl;
         k=j;
    }
}

int main(){
    int a[]= {1,5,3,1,7,3,2,8,9,11,12}; //{1,5,3,1,7,3,2,8,9,11,12};
    int n=sizeof(a)/sizeof(a[0]);
    sort(a, a + n);
    countdup(a,n);
    return 0;
}
