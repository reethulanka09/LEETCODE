class Solution {
public:
    string largestGoodInteger(string num) {
        string ans;
        int m=-1;
        int k=3;
        int i=0,j=k-1;
        while(j<num.size()){
            set<char>st;
            string ss;
            ss+=num[i];
            ss+=num[i+1];
            ss+=num[j];
            st.insert(num[i]);
            st.insert(num[i+1]);
            st.insert(num[j]);
            if(st.size()==1){
                m=max(m,stoi(ss));
            }
            i++;
            j++;
        }
        if(m<0) {
            ans="";
        }
        else if(m==0){
            ans+="000";
        }
        else ans=to_string(m);
        return ans;
    }
};