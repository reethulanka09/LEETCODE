class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        string ans;
        int p1=num1.find('+');
        int p2=num2.find('+');
        string a = num1.substr(0, p1);                 
        string b = num1.substr(p1 + 1, num1.size() - p1 - 2);
        string c = num2.substr(0, p2);                 
        string d = num2.substr(p2 + 1, num2.size() - p2 - 2);
        int a_val=stoi(a);
        int b_val=stoi(b);
        int c_val=stoi(c);
        int d_val=stoi(d);
        long long r = a_val*c_val - b_val*d_val;
        long long k= a_val*d_val + b_val*c_val;
        return to_string(r) + '+' + to_string(k) + 'i';
    }
};