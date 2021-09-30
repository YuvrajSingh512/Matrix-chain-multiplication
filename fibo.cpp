#include <iostream>
#include<cstring>
using namespace std;
static int count = 0;

int fibo(int n, int cache[]){
    count++;
    if(cache[n] >=0){
        return cache[n];
    }
    cache[n] = fibo(n-1,cache) + fibo(n-2,cache);
    return cache[n];
}

int fibo(int n){
    int cache[n+1];
    memset(cache,-1,sizeof(cache));
    cache[0]=0;
    cache[1]=1;
    return fibo(n,cache);
}

int main() {
	// your code goes here
	int n;
	cin >> n;
	cout << fibo(n);
	cout << endl << count;
	return 0;
}
