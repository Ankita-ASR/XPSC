class Solution {
  public: 
    int lenOfLongestSubarr(vector<int>& arr, int k) {
          int n=arr.size();
        int m=0;
        int sum=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==k){
                m=i+1;
            }
            if(mp.find(sum-k)!=mp.end()){
                m=max(m,i-mp[sum-k]);
            }
            if(mp.find(sum)==mp.end()){
                mp[sum]=i;
            }
        }
        return m;
    }
};