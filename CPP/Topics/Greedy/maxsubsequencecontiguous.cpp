/* O(N)
*/
int64_t maxSubSum4(const vector<int64_t> & a){
    int64_t maxSum=0,thisSum=0;

    for (int i =0; i< a.size(); i++){
        thisSum+= a[i];
        
        if(thisSum > maxSum){
            maxSum=thisSum;
        }else if (thisSum <0){
            thisSum=0;
        }
    }
    return maxSum;
}
/* O(NlogN)
*/
int64_t maxSubSum3(const vector<int64_t> &a, int left , int right){
    if(left==right){
        if (a[left] > 0)
            return a[left];
        else 
            return 0;
    }
    int64_t center = (left + right )/2;
    int64_t maxLeft= maxSubSum3(a,left,center);
    int64_t maxRight= maxSubSum3(a,center+1, right)


    int64_t leftBorder=0,rightBorder=0,
        maxLeftBorder=0,maxRightBorder=0;   //checks if contiguous with negative beats only positive sub parts.
    for (int i=left; i <= center; i++){
        leftBorder+=a[i];
        if (leftBorder > maxLeftBorder){
            maxLeftBorder=leftBorder;
        }
    }
    for (int i=center+1; i <= right; i++){
        rightBorder+=a[i];
        if (rightBorder > maxRightBorder){
            maxRightBorder=rightBorder;
        }
    }
    return max({maxRight,maxLeft,maxLeftBorder+maxRightBorder});
}
