//finding a person
#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"enter any string"<<endl;
    cin>>str;

    for (int s = 0;s<= str.length()-1;s++  )
    {
        if (str[s] == 'a'|| str[s]=='e'||str[s]=='i'||str[s]=='o'||str[s]=='u')
        {
            cout <<"the "<<s<<" no..." <<" character of string is vowel "<<endl;
        }
        else
        {
            cout <<"the "<<s<<" no..."<<" character of string isnot vowel "<<endl;
        }

    }

}
