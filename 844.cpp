#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        bool ans;
        string s_new = transform(s);
        string t_new = transform(t);
//        cout << "---" << endl;
//        cout << s_new << "-" << t_new << "-" << endl;
        if (s_new == t_new)
            return true;
        else
            return false;
    }

    string transform(string x) {
        int x_size = x.size();
        int left = 0, right = 0;
        for (; right < x_size; right++) {
            if (x[right] == '#') {
                // 退格
                if (left > 0)
                    left--;
            } else {
                x[left] = x[right];
                left++;
            }
        }

//        for (int temp = 0; temp < left; temp++) {
//            cout << x[temp] << ' ';
//        }
//        cout << left - 1 << "\n";
        string result;
        if (left - 1 >= 0) {
            result = x.substr(0, left);  // 起始位置与长度，注意left=0的情况，此时说明退回去了
        } else {
            result = ' ';
        }
        return result;
    }
};

int main() {
    string s = "a#c", t = "b";
    Solution sol = Solution();
    bool ans = sol.backspaceCompare(s, t);
    cout << ans;
}