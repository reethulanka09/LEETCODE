class Solution {
public:
    bool reorderedPowerOf2(int n) {
        vector<string>vec;
        long long p=1;
        while(p<=1000000000){
            string r = to_string(p);
            sort(r.begin(),r.end());
            vec.push_back(r);
            p*=2;
        }
        map<string,int>mpp;
        for(int i=0;i<vec.size();i++){
            mpp[vec[i]]++;
        }
        string ans = to_string(n);
        sort(ans.begin(),ans.end());
        for(auto i:mpp){
            if(i.first==ans) return true;
        }
        return false;
    }
};