#include <iostream>
#include <string>
using namespace std;
//implement a function void reverse(char*str)
void reverse(char *str);
void swap (char &a , char &b);
int main()
{
    char *str;
    cout << "Hello World!" << endl;
    cin>>str;
    cout<<str;
    reverse(str);
    cout<<endl<<str;

    return 0;
}

void reverse(char *str)
{
    //cout<<str;
    int size =0;
    char tmp;
    while(str[size])
    {
        size++;
    }
    cout<<size;
    int half= size/2;
    for(int i =0;i <half;i++)
    {
        swap(str[i],str[size-i-1]);
    }
}
void swap(char &a, char &b)
{
    char temp;
    temp =a;
    a = b;
    b=temp;
}
/*
void reverse(char *str)
{
    char* end;
    char temp;
    end = str;
    while(*end)
    {
        end++;
    }
    end--;   //null ptr
    while(str<end)
    {
        temp = *str;
        *str++ = *end;
        *end-- = temp;
    }
}*/

