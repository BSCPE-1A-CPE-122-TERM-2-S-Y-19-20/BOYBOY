#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x,y,num;
	
	cout<<"two binary number:\n";
	
	for(;;){
		cin>>x;
		cin>>y;
		if(x>=2){
			x=0;
			y=0;
			cout<<"error input\n";continue;
		}
		if(y>=2){
			x=0;
			y=0;
			cout<<"error input\n";continue;
		}
		else{
		break;
		}
	}
	
	cout<<"what logic gate you will use?\n[1]and\n[2]or\n[3]nand\n[4]nor\n[5]not\n[6]xor\n[7]xnor\n";
	for(;;){
	
		cin>>num;
	
		if(num==1){
			
			cout<<x*y;
			
			break;
			
		}
		
		if(num==2){
			
			if(x==1){
				cout<<x;
				break;
			}
			if(y==1){
				cout<<y;
				break;
			}
			else{
				cout<<x;
				break;
			}
			
		}
		
		if(num==3){
			
			if(x+y==2){
				cout<<"0";
				break;
			}
			
			else{
				cout<<"1";
				break;
			}
			
		}
		
		if(num==4){
			
			if(x+y==0){
				cout<<"1";
				break;
			}
			
			else{
				cout<<"0";
				break;
			}
		}
		
		if(num==5){
			for(;;){
			
				if(x==1){
					cout<<"x=0\n";
					break;
				}
				else{
					cout<<"x=1\n";
					break;
				}				
			}
			for(;;){
			
				if(y==1){
					cout<<"y=0\n";
					break;
				}
				else{
					cout<<"y=1\n";
					break;
				}				
			}
			break;
		}
		
		if(num==6){
			
				if(x==1){
				cout<<"0";
				break;
			}
			if(y==1){
				cout<<"0";
				break;
			}
			else{
				cout<<"1";
				break;
			}
		}
		
		if(num==7){
			
			cout<<x*y;
			
			break;
		}
		
		else{
			num=0;
			cout<<"error input\n";
			continue;
		}
	}
	return 0;
}
