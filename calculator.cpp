#include<iostream>
using namespace std;
int main(){
	
	int n1,n2;
	cout<<"Input two numbers,n1,n2"<<endl;
	cin>>n1>>n2;
	
	char op;
	cout<<"Input an operator:";
	cin>>op;
	
	switch(op){
		
		case '+':
			cout<<n1+n2;
			break;
			case '-':
				
			cout<<n1-n2;
			break;
			
			case '*':
				cout<<n1*n2;
				break;
				
				case '%':
					cout<<n1%n2;
					break;
					
					
			default:
				cout<<"exit"<<endl;
				break;
	}
}
