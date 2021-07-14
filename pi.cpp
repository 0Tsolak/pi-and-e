#include "hider.hpp"


int main(){
 	long double x=1, k=-1, result=0;
	int accuracy;
	string number;
	cout << "What number do you want to calculate e or pi?"<<endl;
	cin>>number;
	cout<<endl;
	assert(number=="e" || number=="pi");
	cout << "What accuracy do you want?"<<endl;
	cin >> accuracy;
	cout << endl;
	if(number=="pi"){
		for(int i=0; i<=accuracy; i++){
			result+=(pow(k,i)*(1/x));
			x+=2;
		}
		result=result*4;
		cout<<"Pi = "<< result<< endl;
	}
	if(number=="e"){
		for(int i=0; i<=accuracy; i++){
			result+=(1/factorial(i));
			
		}
		cout<<"e = "<<result<<endl;
	}
}

