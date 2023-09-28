#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sortString(string &str){

    sort(str.begin(), str.end());

}

int main(){

string str;
cin>>str;
sortString(str);
cout<<str<<endl;


}
