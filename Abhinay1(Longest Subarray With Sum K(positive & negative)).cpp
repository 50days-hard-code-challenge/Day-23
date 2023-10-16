#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& a, int k){
    // Write your code here
    /*int n = a.size(); 

    int len = 0;
    for (int i = 0; i < n; i++) { 
        int s=0;
        for (int j = i; j < n; j++) { 
            s+=a[j];
            
            
            if (s == k)
                len = max(len, j - i + 1);
        }
    }
    return len;*/

    map<int,int>mpp;
    long long sum=0;
    int maxlen=0;
    for(int i=0;i<a.size();i++){
        sum+=a[i];
        if(sum==k){
            maxlen=max(maxlen,i+1);

        }
        long long rem=sum-k;
        if(mpp.find(rem)!=mpp.end()){
            maxlen=max(maxlen,i-mpp[rem]);
        }
        if(mpp.find(sum)==mpp.end()){
            mpp[sum]=i;
        }

    }
    return maxlen;  
    
}
