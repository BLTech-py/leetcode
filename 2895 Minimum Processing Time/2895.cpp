class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        sort(processorTime.begin(), processorTime.end());
        sort(tasks.begin(), tasks.end(), greater<int>());
        int ans = 0;

        for (int i = 0; i < processorTime.size(); i++){
            ans = max(ans, processorTime[i] + tasks[i*4]);
        }

        return ans;
    }
};
