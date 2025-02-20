//#include <iostream>
//#include <vector>
//#include <unordered_map>
//#include <algorithm>
//
//using namespace std;
//
//class Solution1
//{
//public:
//    vector<vector<string>> groupAnagrams(vector<string> &strs)
//    {
//        vector<vector<int>> str_count(strs.size(), vector<int>(26, 0));
//        int char_i = 0;
//        for (auto &str: strs) {
//            for (auto s: str) {
//                int ss = s - 'a';
//                str_count[char_i][ss]++;
//            }
//            ++char_i;
//        }
////        for(const auto &count: str_count)
////        {
////            for(auto c: count)
////            {
////                cout << c;
////            }
////            cout << endl;
////        }
//        // 对c的每一个进行比较，如果相同则加入到一个vector中
//        vector<vector<string>> result;
//        vector<int> used(str_count.size(), 0);
//        for (int i = 0; i < str_count.size(); ++i) {
//            if (used[i]) continue;
//            vector<string> temp;
//            // 要求j不在used里面
//            for (int j = i + 1; j < str_count.size(); ++j) {
//                if (used[j]) continue;
//                if (str_count[i] == str_count[j]) {
//                    temp.push_back(strs[j]);
//                    used[j] = 1;
//                }
//            }
//            temp.push_back(strs[i]);
//            result.push_back(temp);
//        }
//        return result;
//    }
//};
//
////class Solution {
////public:
////    vector<vector<string>> groupAnagrams(vector<string>& strs) {
////        unordered_map<string, vector<string>> mp;
////        for (string& str: strs) {
////            string key = str;
////            sort(key.begin(), key.end());
////            mp[key].emplace_back(str);
////        }
////        vector<vector<string>> ans;
////        for (auto it = mp.begin(); it != mp.end(); ++it) {
////            ans.emplace_back(it->second);
////        }
////        return ans;
////    }
////};
//
//class Solution {
//public:
//    vector<vector<string>> groupAnagrams(vector<string>& strs) {
//        vector<vector<string>> ans;
//        unordered_map<string, int> mp;
//
//        for (auto& str : strs)
//        {
//            string s = str;
//            sort(s.begin(), s.end());
//
//            if (mp.count(s))
//            {
//                int ind = mp[s];
//                ans[ind].push_back(str);
//            }
//            else
//            {
//                mp[s] = ans.size();
//                ans.push_back({str});
//            }
//        }
//
//        return ans;
//    }
//};
//
//int main()
//{
//    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
//    Solution solution;
//    vector<vector<string>> result = solution.groupAnagrams(strs);
//    for(const auto &vec: result)
//    {
//        for(const auto &str: vec)
//        {
//            cout << str << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//
//}
//
//
//
//
