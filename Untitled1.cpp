  		#include <iostream>
        #include <cstdlib>
        #include <ctime>
        #define max 30
        using namespace std;
        void random(int a[])
        {
        	srand(time(NULL));
        	for (int i = 0;i<=max; i++)
        	{
        		a[i] = 0 - rand();
        		cout << a[i] << "\t";
        	}
        }
        int main()
        {
        	int a[max];
        	random(a);
         system("pause");
         int *pa, x;
         cin>>x;
		 pa = (int*) malloc(20); 
		 pa = &a[x];
		 pa = pa + 5;
		 cout<<pa;
         }
