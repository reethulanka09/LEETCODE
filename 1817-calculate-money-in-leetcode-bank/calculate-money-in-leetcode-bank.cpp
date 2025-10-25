class Solution {
public:
     int triSum(int n) { 
        return (n * (n + 1)) >> 1;
    }

    int totalMoney(int days) {
        int Weeks = days / 7;
        int Days = days % 7;       
        return triSum(days) - 42 * triSum(Weeks - 1) - 6 * Weeks * Days;
    }
};