//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//
//class Solution
//{
//public:
//    int mySqrt(int x)
//    {
////        int sqrtx = (int) (1+(x-1)/2-(x-1)*(x-1)/8);
//        int sqrtx;
//        for (int left=0, right=x, mid; left<=right;) {
//            mid = (right-left)/2+left;
//            if((long long )mid*mid<=x)
//            {
//                sqrtx=mid;
//                left = mid+1;
//            }
//            else
//            {
//                right = mid-1;
//            }
//        }
//        return sqrtx;
//    }
//};
//
//int main()
//{
//    Solution s = Solution();
//    int ans = s.mySqrt(4);
//    cout << ans;
//}
//
//
