/*
 * draft.cpp
 *
 *  Created on: 26 Jul, 2015
 *      Author: nathanael
 */
//first attempt at a calculator

#include<iostream>
#include<stdexcept>
using namespace std;

/*int main()
{
	int rval=0;
	int lval=0;
	char op='a';
	int res=0;
	cin>>lval>>op>>rval;
	switch(op){
	case '+':
		res=lval+rval;
		break;
	case '-':
		res=lval-rval;
		break;
	default:
		cout<<"unspecified operation";
		break;
	}
	cout<<"Result="<<res<<'\n';
	return 0;
}*/

//second attempt

void error(string s)
{
	throw runtime_error(s);
}

int main()
{
	cout<<"Enter the expression:"<<'\n';
	cout<<"add x to end the expression"<<'\n';
	int lval=0;
	int rval=0;
	cin>>lval;
	if(!cin) error("no first operand");
	for(char op;cin>>op;){
		if(op!='x') cin>>rval;
		if(!cin) error("no second operand");
		switch(op){
		case '+':
			lval+=rval;
			break;
		case '-':
			lval-=rval;
			break;
		case '*':
			lval*=rval;
			break;
		case '/':
			lval/=rval; //exception here
			break;
		default:
			cout<<"result:"<<lval<<'\n';
			return 0;
		}
	}

error("bad expression");
}
