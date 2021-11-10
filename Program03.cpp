// Robert Mcdonald
// Git Added


#include<iostream>
#include <stdio.h>
#include<bits/stdc++.h>

using namespace std;

class Set{
//	private:
//		int A[2] = {0,1};
	
	public:	
//	Set(){
//			A[2] = {};
//	}
	
	int* Union(int a[], int b[], int m, int n)
	{
		int z = m+n;
		
		static int c[100]; 
	 
		for(int i=0; i<z; i++){
		
			if(i<m){
				c[i] = a[i];
			}
			else if(i>=m){
				c[i] = b[i-m];
			}
		}
		for(int i=0; i<z; i++){
	     	for(int j=0; j<z; j++){ 
	     		if(c[i]==c[j] && j!=i){
				 c[j]=0;
				 }
			 }
		}
	 
	 return c;
	
	}
	
	int* Intersection(int a[],int b[],int m,int n, int *e)
	{
		
		static int c[100];
		int k=0;
		
		for(int i=0; i<m; i++)
		{
			for(int j=0; j<n; j++)
			{
			  if(a[i]==b[j])
			  {
			    c[k] = a[i];
			    
			    k++;
			    
			  }
			}
		}
		
	    *e = k;
	    
	    return c;
	}
	
//	void Difference(int a[],int b[],int m,int n)
//	{
//		int c[]= {};
//		int l;
//		cout<<"the difference of the two sets is={";
//		for(int i=0;i<m;i++){
//			for(l=0;l<n;l++){
//				if (a[i]==b[1]){
//					break;
//				}
//			}
//			if (l==n){
//				c[] = a[i];
//			}
//		}		
//	}

	void print(int a[], int len){
		
		int temp;
		for(int i=0; i<len; i++){
			for(int j=0; j<len-1; j++){
				
				
				if(a[j]>a[j+1]){
					temp = a[j];
					a[j] = a[j+1];
					a[j+1] =temp;
				}
			}
		}
		
		cout<<"Result: {";
		
		for(int i=0; i<len; i++){
			
			if(i < len-1){
				cout<<a[i]<<", ";
			}
			else if(i = len-1){
				cout<<a[i];
			}
		}
		cout<<"}";
	}

};


int main()
{
	int m, n;
	
	cout<<"Enter size of Set 1: ";
	cin>>m;
	
	int a[m];
	
	cout<<"Enter elements Set 1: ";
	for(int i=0; i<m; i++){
		cin>>a[i];
	}
	
	
	cout<<"Enter size of Set 2: ";
	cin>>n;
	
	int b[n];
	
	cout<<"Enter elements Set 2: ";
	for(int i=0; i<n; i++){
		cin>>b[i];
	}
	
	Set obj;
	
//	For Uniion
	int *d, e;
	e = m+n;
	
	d = obj.Union(a,b,m,n);
	
	cout<<"Union of two sets\n";
	obj.print(d,e);	
	
//	For intersection
	int *c, z=0;
	
	c = obj.Intersection(a, b, m, n, &z);
	
	cout<<"\nIntersection of two sets\n";
	
	obj.print(c, z);
	
	return 0;
}

// Output
//
// Enter size of Set 1: 6
// Enter elements Set 1: 1
// 4
// 5
// 7
// 8
// 9
// Enter size of Set 2: 4
// Enter elements Set 2: 2
// 4
// 5
// 6
// Union of two sets
// Result: {0, 0, 1, 2, 4, 5, 6, 7, 8, 9}
// Intersection of two sets
// Result: {4, 5}
