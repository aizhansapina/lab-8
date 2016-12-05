#include <iostream>

using namespace std;

int main() {
	
	int n, m;
	cin >> n >> m;
	int a[n][m];
	int mx = 0;
	int index = 0;
	int index1 = 0;

	for( int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}


	for (int i = 0; i < n; i++) {
		for ( int j = 0; j < m; j++) {
			if (mx < a[i][j]) {
				mx = a[i][j];
				index = i;
				index1 = j;
			}
		}
	}
	cout <<mx<<endl<<index<<" "<<index1;

return 0;
}
	

				