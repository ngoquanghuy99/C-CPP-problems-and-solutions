#include <iostream>
 
using namespace std;
int cd(int n)
{
    int sum = 0 ;
    for (int i = 1; i < n; i ++)
        if (n % i == 0)
            sum += i ;
		if (sum == n)
        cout << sum << " " ;
    return 0 ;
}
int main()
{
    int n;
    cin >> n ;
    for (int i = 1; i <= n; i ++)
        cd(i) ;
    return 0;
}
