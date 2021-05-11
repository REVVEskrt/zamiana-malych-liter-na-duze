#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
char ciag;
cout << "wprowadz wyraz z malych liter: ";
cin>>ciag;

while(ciag!='.')
{
	if(ciag>95)
	  	cout<<(char)(ciag-32);
        cin>>ciag;
}
cout<<"wyraz wpisany z duzych liter: " << ciag <<endl;

return 0;
}
