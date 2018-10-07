#include <iostream>
#include<fstream>
#include<cstdlib>
#include<string>

using namespace std;

int main()
{
    fstream myfile("words.txt",ios::in);
    if(!myfile){
        cout<< "I couldn't find the file "<<endl;
        exit(1);

    };
    string tempstring;
    while(myfile){
        tempstring = "";
        myfile>>tempstring;
        string a ="dous";
        if(tempstring.size()<4) continue;

        if(tempstring.substr(tempstring.size()-4)==a){
            cout<<tempstring<<endl;
        }

    };

    return 0;
}
