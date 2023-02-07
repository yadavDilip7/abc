#include<bits/stdc++.h>
using namespace std;
void myFunction(string fname ,int age){
    cout<<fname<<"Yaduvanshi " <<age<<" years old \n";
}
int sum( int k){
    if (k>0){
        return k + sum(k-1);
    }
    else{
        return 0;
    }
}
int main(){
    // string name="DILIP YADAV";
    // string* ptr= &name;
    // cout<<name<<endl;
    // cout<<&name<<endl;
    // cout<<*ptr<<endl;
    // *ptr="KRISHNA PRATAP SINGH";
    // cout<<*ptr<<endl;
    // cout<<name;
    //  int n;
    //  cout<<"Enter a number:";
    //  cin>>n;
    //  cout<<"The number is:"<<n;
    // Function: A function is a block of code which ojnly runs when it is called.
// myFunction( "Dilip ",21);
// myFunction( "Krishna ",22);
// myFunction( "Jhuniya ",25);
// myFunction( "Keshav ",27);
// myFunction( "Shashikant " ,23);
// myFunction("sam ",26);
// return 0;
    // Recursion->>> A function calling itself again and agian is known as recursion...
    int result=sum(10);
    cout<<result;
    return 0;
}