#include <iostream>
#include <vector>
#include <climits>//INT_MAX用

using namespace std;

int main() {
    //N個あるのかを入力
    int n;
    cin >> n;
    
    //すべての正の整数を配列とforループを用いて入力
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    //max_count(2で割ることができる)
    int max_count = INT_MAX; 
    for (int num : nums) {
        int count = 0;
        while (num % 2 == 0) {
            num /= 2;
            ++count; 
        }
        max_count = min(max_count, count);
    }
    
    cout << max_count << endl;
    return 0;
}
