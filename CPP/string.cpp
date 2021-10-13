//C++ program to merge two string , find the length of both the strings and then swap the 1st letter of both the strings.
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main(){
    char s1[20];
    char s2[20];
    char p1[20];
    char p2[20];
    int i;
    cin.getline(s1,20);
    cin.getline(s2,20);
    int count=0;
    while (s1[count] != '\0')
    {
    count++;
    }
    int count1=0;
    while (s2[count1] != '\0')
   {
        count1++;
   }
    cout<<count<<" "<<count1<<endl;
    cout<<s1<<s2<<endl;
    swap(s1[0],s2[0]);
    cout << s1 << ' ' <<  s2 << endl;
    
    return 0;
}
