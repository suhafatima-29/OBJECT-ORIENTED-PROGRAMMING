#include<iostream>
using namespace std;

class interest{
	float principal,rate,time;
	public:
		interest(float p,float r,float t)
		{
			principal=p;
			rate=r;
			time=t;
		}
		
	float calculateSI(){
		return(principal*rate*time)/100;
	}
	void display(){
		cout<<"Simple interest= "<<calculateSI()<<endl;
	}
};
   int main(){
   	float p,r,t;
   	
   	cout<<"enter principal: ";
   	cin>>p;
   	cout<<"enter rate: ";
   	cin>>r;
   	cout<<"enter time: ";
   	cin>>t;
   	
   	interest obj(p,r,t);
   	
   	obj.display();
   	obj.display();
   	return 0;
   }
