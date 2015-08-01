#include<iostream>
#include<stdexcept>
using namespace std;
constexpr double diff=273.15;
double ctok(double c)
{


	if(c<-diff) throw runtime_error("Error!");

	return (c+diff);
}

double ktoc(double k)
{

	if(k<0) throw runtime_error("improper value entered");

	return (k-diff);
}


int main()
{
try{

	constexpr char c='c';
	constexpr char k='k';
	double celsius=0;
	double kelvin=0;
	char choice='a';
	cout<<"Enter c(ktoc) or k(ctok)"<<'\n';
	cin>>choice;

	switch(choice){
	case c:
		cin>>celsius;
		cout<<ctok(celsius)<<'\n';
		break;
	case k:
		cin>>kelvin;
		cout<<ktoc(kelvin)<<'\n';
		break;
	default:
		cout<<"unspecified entry"<<'\n';
		break;

	}
		return 0;
}
catch(runtime_error& e){
		cerr<<"error:"<<e.what()<<'\n';
		return 1;
	}

}


