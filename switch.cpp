 #include<iostream>
using namespace std;
int main(){
	char button;
	cout<<"Input a character:"<<endl;
	
	cin>>button;
	switch(button){
		
		case 'a':
			cout<<"hi"<<endl;
			break;
			case 'b':
				cout<<"hello"<<endl;
				break;
				case 'c':
					cout<<"namaste"<<endl;
					break;
					
					default:
						cout<<"exit"<<endl;
					break;
	}
}
