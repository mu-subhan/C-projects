#include<iostream>
using namespace std;

// Addition function
int addition(int a,int b){
    
int sum=a+b;
cout<<"the sum is "<<sum;
return sum;
}

int main(){
    int x,y;
    cout<<"enter value of x "<<endl;
    cin>>x;
    cout<<"enter value of y"<<endl;
   cin>>y;
   addition(x,y);
} 