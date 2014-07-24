#include <iostream>

using namespace std;
bool isPermutation(string str1,string str2);
int main()
{
    cout << "Hello World!" << endl;
    while(1)
    {
        string str1,str2;
        cin>>str1>>str2;
        if(isPermutation(str1,str2))
        {
            cout<<str1<<" is permutation of "<<str2;
        }
        else
            cout<<str1<<" is NOT permutation of "<<str2;
    }
    return 0;
}

bool isPermutation(string str1,string str2)
{
    if(str1.length() != str2.length())
        return false;
    int size=str1.length();
    bool array[size];
    for(int i=0; i<size; i++)
    {
        array[i] = false;
    }

    for(int i = 0; i <size; i++)
        for(int j=0; j<size; j++)
        {
            if(str1[i]==str2[j])
            {
                for(int z=j; z<size; z++)
                {
                    if(!array[z] && str2[z] == str1[i])
                    {
                        array[z] = true;
                        break;
                    }
                }
            }
        }
    for(int i=0 ; i<size; i++)
    {
        if(!array[i])
            return false;
    }
    return true;
}

