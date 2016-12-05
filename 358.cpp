#include <iostream>

using namespace std;

int main() {
	
	int n, m;
	cin >> n >> m;
	int a[n][m];
	int mxx = 0;
	int s = 0;
	int s1 = 0;
	int index = 0; 
	for(int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
	   	}
  }

  	for (int i = 0; i < n; i++) {
  		s = 0;
		for(int j = 0; j < m; j++) {
			s += a[i][j];
	    }
	    for(int j = 0; j < m; j++) {
	    	if( a[i][j] > mxx) {
	    		mxx = a[i][j];
	    		index = i;
	    	} else {
		    	if( a[i][j] == mxm) {
	    			if( s1 > s) {
	    				s1 = s;
	    				index = i;
	       	   		} else {
	       				if(s == s1) {
	       					if(index > i)
	       						index = i; 	
	       				}
	       			}
	       		}
	       	}		 
		}

}

	cout <<index;
	break;
return 0;
}

	