#include <iostream>

using namespace std;

int main() {

	int n, m;
	cin >> n >> m;
	int a[n][m]; 
	int mx = 0;
	int mx1 = 0;
	int s = 0;
	for (int i = 0; i < n; i++) {
		for( int j = 0; j < m; j++) {
			cin >> a[i][j];
	   	}
   	}

   	
   	for(int i = 0; i < n; i++) {
   		for ( int j = 0; j < m; j++) {
   			if(mx < a[i][j]) {
   				mx = a[i][j];
   		   	}
   	   }
  	}
  	for(int i = 0; i < n; i++) {
  		mx1 = 0;
  		for(int j = 0; j < m; j++) {
  			if( mx1 < a[i][j]) {
  				mx1 = a[i][j];
  			}
  		}
  		if(mx == mx1) {
  			s++;
  		}
   }



	cout << s;
	return 0;
}

		