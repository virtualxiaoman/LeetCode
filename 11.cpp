//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution {
//public:
//    int maxArea(vector<int>& height) {
//    int max_area = 0, current_area = 0;
//    int left_p = 0, right_p = (int)height.size()-1;
//    while(left_p < right_p)
//    {
//        if(height[left_p]<=height[right_p])
//        {
//            current_area = height[left_p] * (right_p - left_p);
//            left_p++;
//        }
//        else
//        {
//            current_area = height[right_p] * (right_p - left_p);
//            right_p--;
//        }
//        max_area = max(max_area, current_area);
//    }
//    return max_area;
//    }
//};
//
//int main()
//{
//    vector<int> height = {1,8,6,2,5,4,8,3,7};
//    Solution solution = Solution();
//    int area = solution.maxArea(height);
//    cout << area << endl;
//    return 0;
//};
//
