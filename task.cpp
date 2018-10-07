#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <utility>

using namespace std;
int main()
{


	string line;
	string word;
	ifstream file("babyname2012.txt");

	if(file.is_open())
	{
    cout<<"Enter the name you want."<<endl;
		cin>>word;
		int Rank=0;
		string name;


		for(int i=1;i<=1000;i++){
             file>> name;



			if(word!=name  ){
				Rank++;
				cout<< Rank;}
            else{

                break;}

		}
		cout<< word << " is ranked "<<Rank <<" in popularity among boys"<<endl;
		cout<< word << " is ranked "<<Rank <<" in popularity among girls "<<endl;
		file.close();
	}



    return 0;
}
