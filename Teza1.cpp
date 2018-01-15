#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char a[100];
int i;
cout<<"Sirul este : ";
cin.get(a,99);
for(i=0;i<strlen(a);i++)
if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
cout<<a[i];
cout<<endl;
}
