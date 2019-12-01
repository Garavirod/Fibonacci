#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100;
vector<long long> memo_fibo(MAX_N, -1); // -1 denota que no fue calculado
 
long long fibonacci(long long n){
	if (n == 0 || n == 1) {
		// fibo(0) = 0, fibo(1) = 1
		return n;
	}
	if (memo_fibo[n] == -1) {
		// Este fibonacci nunca se calculo
		// Me guardo el resultado
		memo_fibo[n] = fibonacci(n-1) + fibonacci(n-2);
		return memo_fibo[n];
	} else {
		return memo_fibo[n];
	}
}

int main(int argc, char const *argv[])
{
    cout<<fibonacci(8)<<endl;
    return 0;
}
