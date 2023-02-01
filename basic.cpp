#include<bits/stdc++.h>
using namespace std;
int main(){
    string name="DILIP YADAV";
    string* ptr= &name;
    cout<<name<<endl;
    cout<<&name<<endl;
    cout<<*ptr<<endl;
    *ptr="KRISHNA PRATAP SINGH";
    cout<<*ptr<<endl;
    cout<<name;
    
}