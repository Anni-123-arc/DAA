#include<iostream>
//#include<>
using namespace std;
 class Stackkk
 { 
 public:
     int top;
     int arr[200];
      Stackkk(){
        top=-1;
      }

       void add(int x){
        
        arr[++top]=x;
      }

      void remove(){

        cout<<arr[top]<<" removed"<<endl;
        top--;
      }

      void displayTop()
      {
        cout<<arr[top]<<endl;
      }
 };

 int main(){
    Stackkk* st=new Stackkk();
    st->add(1);
    st->add(5);
    st->displayTop();
    st->remove();
    st->displayTop();

 }
 
  