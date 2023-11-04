class Solution {
public:

    int findIndex(const std::vector<int>& vec, int element, int start) {
        for (size_t i = start; i < vec.size(); ++i) {
            if (vec[i] == element) {
                return static_cast<int>(i); // Convert the size_t index to int
            }
        }
        // If the element is not found, return -1 to indicate that it wasn't found
        return -1;
    }
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        vector<int> temp = nums;
        sort(temp.begin(), temp.end());
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            // cout<< temp[left]<<"  "<<temp[right]<<endl;
            if (temp[left] + temp[right] == target) {
                break;
            }
            else if (temp[left] + temp[right] < target) {
                left = left + 1;
            }
            else {
                right = right - 1;
            }
        }
        if (left < right) {
            int start_index = 0;
            int l = findIndex(nums, temp[left], start_index);
            if (temp[left] == temp[right]) start_index = l + 1;
            int r = findIndex(nums, temp[right], start_index);
            result.push_back(l);
            result.push_back(r);
        }

        return result;

    }
};