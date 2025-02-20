//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Solution1 {
//public:
//    int maxProfit(vector<int> &prices)
//    {
//        int ans=0;
//        int n = prices.size();
//        int min_v = 1e4, max_v = 0;
//        for (int i = 0; i < n; i++) {
//            min_v = 1e4;
//            max_v = 0;
//            min_v = min(min_v, prices[i]);
//            for (int j = n - 1; j > i; j--)
//            {
//                max_v = max(max_v, prices[j]);
//            }
//            ans = max(ans, max_v - min_v);
//        }
//        return ans>0?ans:0;
//    }
//};
//
//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int ans=0,min_current=1e4;
//        for(auto x:prices)
//        {
//            min_current = min(min_current, x);
//            ans = max(ans, x - min_current);
//        }
//        return ans;
//    }
//};
//
//int main()
//{
//    vector<int> prices = {7,1,5,3,6,4};
//    Solution s = Solution();
//    int ans = s.maxProfit(prices);
//    cout <<ans;
//    return 0;
//}