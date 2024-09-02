#include<iostream>
using namespace std;

// Addition function
int addition(int a,int b){
    
int res=a+b;
cout<<"the res is "<<res;
return res;
}

// Subtraction 

int subtraction(int a,int b){
    
int res=a-b;
cout<<"the res is "<<res<<endl;
return res;
}
// Multiplication

int multiplcation(int a,int b){
    
int res=a*b;
cout<<"the res is "<<res<<endl;
return res;
}
// Division

int division(int a,int b){
    
int res=a/b;
cout<<"the res is "<<res<<endl;
return res;
}


int main(){
    int x,y;
    cout<<"enter value of x "<<endl;
    cin>>x;
    cout<<"enter value of y"<<endl;
   cin>>y;
   addition(x,y);
   subtraction(x,y);
   division(x,y);
   multiplcation(x,y);
} 