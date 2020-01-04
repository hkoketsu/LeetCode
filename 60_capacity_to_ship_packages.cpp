class Solution {
public:
    int shipWithinDays(vector<int>& weights, int D) {
        int minCapacity = 0, maxCapacity = 0;
        for (int w : weights) {
            minCapacity = max(minCapacity, w);
            maxCapacity += w;
        }
        while (minCapacity < maxCapacity) {
            int mid = (minCapacity + maxCapacity) / 2;
            int shipDays = countShippingDays(weights, mid);
            if (shipDays <= D)
                maxCapacity = mid;
            else
                minCapacity = mid+1;
        }
        return maxCapacity;
    }
    
    int countShippingDays(vector<int>& weights, int capacity) {
        int days = 1, load = 0;
        for (int w : weights) {
            if (load + w <= capacity) {
                load += w;
            } else {
                days++;
                load = w;
            }
        }
        return days;
    }
};