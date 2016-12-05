#include <iostream>

using namespace std;

int main() {

	int n, m;
	cin >> n >> m;
	long long A[n][m];
	int t = 0;
		
		for (int i = 0; i < n; i++) {
			for ( int j = 0; j < m; j++) {
			A[i][j] = t;
			t++; 
			} 
			} 
			for (int i = 0; i < n; i++) {
			if (i % 2 == 0) { 
			 	for (int j = 0; j < m; j++) {   
			cout <<A[i][j]<<" "; 
			} 
		}
		else if (i % 2 != 0) {
			for (int j = m - 1; j >= 0; j--) {
               cout <<A[i][j]<<" ";
              }
            }
        
                   cout <<endl;
                }

          return 0;
    } 


			