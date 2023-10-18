class Solution {
public:

    int search(vector<int>& arr, int target) {
        int n=arr.size();
        int l=0,r=n-1,mid;

        while(l<=r){
            mid=l+(r-l)/2;
            if(arr[mid]==target)return mid;
            
             else if(arr[mid]>=arr[l]){
                if(target>=arr[l] && target<=arr[mid])r=mid-1;
                else l=mid+1;
            }
            else {
                if(target>=arr[mid] && target<=arr[r]){
                    l=mid+1;
                }else r=mid-1;
            }
            
        }
        return -1;
    }
};
