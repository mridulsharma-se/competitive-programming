#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    int minu=INT_MAX;

   for(int i=0 ; i<N ; i++){
    minu = min(minu, abs(A[i]));

        
            
        
    }
    cout << minu << endl;

    return 0;
}