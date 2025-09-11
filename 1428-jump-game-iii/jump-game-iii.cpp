class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        queue<int>qe;
        vector<int>vis(arr.size() , 0);
        qe.push(start);
        vis[start] = 1;
        while(!qe.empty()){
            int i = qe.front();
            qe.pop();
            if(arr[i] == 0) return true;
            int left = i - arr[i];
            int right = i + arr[i];
            if(left >= 0 && vis[left] == 0){
                vis[left] = 1;
                qe.push(left);
            }
            if(right < arr.size() && vis[right] == 0){
                vis[right] = 1;
                qe.push(right);
            }
        }
        return false;
    }
};