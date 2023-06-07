int lcs(string s, string t)
{
//   Tabulation
	//Write your code here
	int n=s.size(),m=t.size();

    int dp[n+1][m+1];

    for(int i=0;i<=n;i++){

        for(int j=0;j<=m;j++){

            if(i==0 or j==0){

                dp[i][j]=0;

            }

            else if(s[i-1]==t[j-1]){

                dp[i][j]=1+dp[i-1][j-1];

            }

            else{

                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);

            }

        }

    }

    return dp[n][m];
}
