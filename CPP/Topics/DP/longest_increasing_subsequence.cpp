/*
https://www.geeksforgeeks.org/longest-increasing-subsequence-dp-3/

curr_pos// currentPos in array
prev_element // previousElement in array
n//total no of array elements
a1 a2 a3 ... an // array

int dp[n][n]={-1};
rec(curr_pos ,prev_elment){
    if(dp[curr_pos][ prev_element]!= -1)return dp[curr_pos][ prev_element];
    if(curr_pos == n+1){
        return 0; // BASE CASE
    }
    ans= 0;
    if(prev_element  < a[curr_pos]){
        ans+=max(rec(curr_pos +1 , curr_pos)+1, ans);
    }
    ans= max(rec(curr_pos+1, prev_element),ans);
    dp[curr_pos][ prev_element]=ans;

    return ans;
}
//exponential time complexity   converted to O(n^2 ) after memoization


*/