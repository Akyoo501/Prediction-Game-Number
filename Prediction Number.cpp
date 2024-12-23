#include <iostream>
using namespace std;

int main(){
	int i;
	cout<<"Predict your numbers to win: ";
	cin>>i;
	cout<<endl;
	if(i==3 || i==57 || i==753){
		cout<<"Your Win";
	}
	
	else{
		cout<<"You Fail";
	}
	return 0;
	}
