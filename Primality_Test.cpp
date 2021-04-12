#include <iostream>
using namespace std;
bool isPrime(int N){
    if(N==1)
    return false;
    for(int i=2; i*i<=N; i++){
        if(N%i==0){
            return false;
        }
    }
    return true;
}
int main() {

	int n,t;
	cin>>t;
	while(t--){
	cin>>n;
    if(isPrime(n)){
        cout<<"yes"<<"\n";
    }
    else{
        cout<<"no"<<"\n";
    }
    }
	return 0;
}
