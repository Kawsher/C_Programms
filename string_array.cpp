#include <iostream>
#include <string>
#include<stdio.h>
#define SIZE 2
using namespace std;

int main()
{
string tmp[2];
for(int i=0;i<2;i++)
{
    cout<<"Element:";
    cin>>tmp[i];
}

char a[100] = tmp[1].c_str();

return 0;
}

