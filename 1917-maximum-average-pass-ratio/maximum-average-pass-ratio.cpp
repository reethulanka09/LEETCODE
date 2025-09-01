class Solution {
    struct Compare {
        bool operator()(pair<int,double> &a, pair<int,double> &b) {
            return a.second < b.second;
        }
    };
public:
    double gain(int pass, int total) {
        return (double)(pass + 1) / (total + 1) - (double)pass / total;
    }
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        double ans = 0;
        priority_queue<pair<int,double>, vector<pair<int,double>>, Compare> pq;
        for (int i = 0; i < classes.size(); i++) {
            pq.push({i, gain(classes[i][0], classes[i][1])});
        }
        while (extraStudents > 0) {
            auto p = pq.top();
            pq.pop();
            int idx = p.first;
            classes[idx][0]++;
            classes[idx][1]++;
            pq.push({idx, gain(classes[idx][0], classes[idx][1])});
            extraStudents--;
        }
        for (auto &c : classes) {
            ans += (double)c[0] / c[1];
        }
        return ans / classes.size();
    }
};
