#include"coadaStatica.h"
#include<iostream>
int main(){
Array_Queue q;
try{
q.enqueue(10);
q.enqueue(20);
int vf=q.peek();
cout<<vf;
}
catch(Array_Queue::Queue_Underflow ex){
cout<<"Coada goala";
}
//system("pause");
return 0;
  }
