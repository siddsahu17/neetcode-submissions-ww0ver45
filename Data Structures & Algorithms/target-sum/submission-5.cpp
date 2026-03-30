class Solution {
public:
    int findTargetSumWays(vector<int>& arr, int d) {
        int n = arr.size();
        int tsm = 0;
        for(int i=0;i<n; i++){
            tsm +=arr[i];
        }
        if((tsm+d)%2!=0 || tsm<d) return 0;
        int s= (tsm+d)/2;
        vector<vector<int>>v(n+1, vector<int>(s+1,0));
        
         for(int i=0; i<=n; i++){
             v[i][0]=1;
         } 
         
         for(int i=1; i<=n;i++){
             for(int j=0; j<=s;j++){
                 v[i][j]=v[i-1][j];
                 if(j>=arr[i-1]){
                     v[i][j] +=v[i-1][j-arr[i-1]];
                 }
             }
         }
         
         return v[n][s];
    }
};
