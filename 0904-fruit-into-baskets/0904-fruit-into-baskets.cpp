class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        set<int>st;
        for(int i=0;i<fruits.size();i++){
            st.insert(fruits[i]);
        }
        if(st.size()<=2)return fruits.size();
        int maxi=0;
        int total=0;
        int j=0;
        fruits.push_back(100001);
        vector<int>f(100005);
        for(int i=0;i<fruits.size();i++){
            if(f[fruits[i]]==0 and total==2){
                maxi=max(maxi,i-j);
                
                while(j<i){
                    if(f[fruits[j]]>1){
                        f[fruits[j]]--;
                        j++;
                    }
                    else if(f[fruits[j]]==1){
                        f[fruits[j]]--;
                        j++;
                        break;
                    }
                }
                f[fruits[i]]++;
            }
            else if(f[fruits[i]]==0){
                total++;
                f[fruits[i]]++;
            }
            else{
                f[fruits[i]]++;
            }
        }
        return maxi;
    }
};