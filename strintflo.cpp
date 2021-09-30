#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t;
	cin>>n>>t;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ind;
	bool hai=true;

	for(int i=0;i<n;i++){
		if(t!=a[i]){
			hai=false;
	}

	if(hai==false){

		for(int i=0;i<n;i++){
			if(t==a[i]){
				ind=i;
			}
		}

		cout<<ind;
	}
	

}
