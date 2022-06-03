#include <iostream>
#include <iomanip>
#include <cmath>
// [C_MM42-中] 求(-1)^(n+1)*[1/(2n-1)]的和
using namespace std;
int main(){
    int n;
    double S = 0;
    cin >> n;
    for(int i=1; i<=n; i++)// 1 - 1/3 + 1/5 - 1/7 + ... + (-1)n+1×1/(2n-1)
        S = S + pow(-1.0,(i+1)*1.0) * 1/(2*i-1);
    cout << fixed << setprecision(3) << S << endl;
	return 0;
}
