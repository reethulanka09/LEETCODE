class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int ind1 = 0 , ind2 = 0;
        int i = 0, j = numbers.size() - 1;
        while(i < j){
            if(numbers[i] + numbers[j] == target){
                ind1 = i+1;
                ind2 = j+1;
                break;
            }
            else if(numbers[i] + numbers[j] > target){
                j--;
            }
            else{
                i++;
            }
        }
        return {ind1,ind2};
    }
};