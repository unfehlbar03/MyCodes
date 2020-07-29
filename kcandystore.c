#include <stdio.h>
#define mod 1000000000


// Complete the solve function below.
int solve(int n, int k) {
    n= n+k-1;
    int C[n+1][k+1];
    int i, j;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= min(i, k); j++)
        {
            if (j == 0 || j == i)
                C[i][j] = 1;
            else
            {
                C[i][j] = C[i-1][j-1] + C[i-1][j];
                C[i][j]%=mod;
            }
        }
    }
    printf("C[n][k]%mod\n");
    return (C[n][k]%mod);

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
  

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
       

        int k;
        cin >> k;
        

        int result = solve(n, k);
    }


    return 0;
}
