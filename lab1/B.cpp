#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(true){
		cout<<n<<endl;
		if(n>1){
			if(n%2==1){
				n=3*n+1;
			}
        	else{
        		n=n/2;
			}
		}
		else if(n==1){
			return n;
		}
	}
	return 0;
}
	
