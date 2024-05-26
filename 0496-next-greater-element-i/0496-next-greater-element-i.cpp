class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        stack<int>st;
        unordered_map<int,int>mp;
        for(int i = nums2.size()-1;i>=0;i--){
            while(!st.empty() && nums2[i]>=st.top()){
                st.pop();
            }
            if(!st.empty()){
                 mp[nums2[i]] = st.top();
            }
            else{
                mp[nums2[i]] = -1;
            }
            st.push(nums2[i]);
        }
        for(auto e : nums1){
            ans.push_back(mp[e]);
        }
        return ans;
    }
};