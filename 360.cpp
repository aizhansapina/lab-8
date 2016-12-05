#include <iostream>

using namespace std;

int main() {

	int n, m;
	cin >> n >> m;
	int a[n][m];
	int mx = 0;
	int mx1 = 0;
	int mx2 = 0;
	int index = 0;
	int s = 0; 	
	for( int i = 0; i < n; i++) {
		for ( int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
   	}

   	for( int i = 0; i < n; i++) {
   		for(int j = 0; j < m; j++) {
   			if(mx < a[i][j]) {
   				mx = a[i][j];
   			}
   		}
   	}

   	for(int i = 0; i < n; i++) {
   		mx1 = 0;
   		for(int j = 0; j < m; j++) {
   			 if(mx1 < a[i][j]) {
   			 	mx1 = a[i][j];
   			 }
   		}
   		if(mx1 == mx) {
   			s++;	
   		
   		}
   	}

   	
cout <<s<<endl; 

	for(int i = 0; i < n; i++) {
		mx2 = 0;
		for(int  j = 0; j < m; j++) {
			if( mx2 < a[i][j]) {
				mx2 = a[i][j];
			}
		}
		if( mx2 == mx) {
			cout <<i<<" ";
		}
	}	

return 0;
}

	
 	