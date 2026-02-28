class Solution {
public:
    int evalRPN(vector<string>& s) {
        stack<int>st;
        int a,b;
        for(int i=0;i<s.size();i++){
            if(s[i]!="+" and s[i]!="-" and s[i]!="*" and s[i]!="/"){
                st.push(stoi(s[i]));
            }
            else{
                a=st.top();
                    st.pop();
                    b=st.top();
                    st.pop();
                if(s[i]=="+"){
                    st.push(a+b);
                }
                else if(s[i]=="-"){
                    st.push(b-a);
                }
                else if(s[i]=="*"){
                    st.push(a*b);
                }
                else{
                    if(a!=0){
                        st.push(b/a);
                    }
                }
            }
        }
        return st.top();
    }
};