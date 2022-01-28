#include <iostream>
using namespace std;

int main() {
	int t;
    cout << "Cases : ";
	cin >> t;
	while(t--){
	    int n, k;
        cout << "n and k : ";
	    cin >> n >> k;
	    if(k%3 == 0){
	        for(int i=1; i<=n; i++) cout << i << " ";
	        cout << endl;
	        continue;
	    }
	    else if(k%3 == 1){
	        for(int i=1; i<=n; i+=2){
	            cout << i << " ";
	        }
	        for(int i=2; i<=n; i+=2){
	            cout << i << " ";
	        }
	        cout << endl;
	        continue;
	    }
	    else if(k%3 == 2){
	        int odd[100], even[100];
	        for(int i=1; i<n; i+2){
	            odd[i] = i;
	        }
	        for(int i=2; i<=n; i+2){
	            even[i] = i;
	        }
	        for(int i=0; i<n; i++){
	            if(i%2 == 1) cout << odd[i] << " ";
	        }
	        for(int i=0; i<n; i++){
	            if(i%2 == 0) cout << even[i] << " ";
	        }
	        cout << endl;
	    }
	}
	return 0;
}
