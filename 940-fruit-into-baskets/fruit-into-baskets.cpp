class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int,int>mpp;
        int i=0,j=0,m=0;
        while(j<fruits.size()){
            mpp[fruits[j]]++;
            if(mpp.size()>2){
                m=max(m,j-i);
                mpp[fruits[i]]--;
                if(mpp[fruits[i]]==0) mpp.erase(fruits[i]);
                i++;
            }
            j++;
        }
        m=max(m,j-i);
        return m;
    }
};