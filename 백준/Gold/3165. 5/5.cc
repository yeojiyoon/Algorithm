#include <iostream>
#include <string> 
#include <algorithm>  

using namespace std;

long long cnt(long long n, long long k){
	while(1){
		string str=to_string(n); 
		if(str.back()=='5') return cnt(n/10,k-1)*10+5;  
		if(k<=count(begin(str), end(str), '5')) return n;  
		++n; 
	}
}

int main() {
	long long N, K;
	cin>>N>>K;
	cout<<cnt(N+1, K); 
}