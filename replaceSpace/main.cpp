#include <iostream>
#include <string>

using namespace std;
string replaceSpace(string &str, int size);
int main()
{
    cout << "Hello World!" << endl;
    string str= "Mr John Smith     ";
    replaceSpace(str,13);
    cout<<str;
    return 0;
}
string replaceSpace(string &str, int size)
{
    string result;
    for(int i=0; i< size;i++)
    {
        result.insert(i,str.at(i));
        if(str[i]== ' ')
        {
            str.append("%20");
            while(str[i]==' ')
            {
                i++;
            }
        }
    }
    return result;
}
