class Solution {
public:
    bool isPrime(int n){
        if(n<=1) return false;
        for(int i=2;i<n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        int fp=0,lp=0;
        for(int i=0;i<nums.size();i++){
            if(isPrime(nums[i])){
                fp=i;
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(isPrime(nums[i])){
                lp=i;
                break;
            }
        }
        cout<<lp<<" "<<fp<<" ";
        return lp-fp;
    }
};