#include <iostream>
#include <string>

using namespace std;

int main() {
    string S, t;
    cin >> S;

    for (int i = 0; i < S.size(); ++i) {
        t.push_back(S.at(S.size() - i - 1));
        if (t == "resare" || t == "esare" || t == "remaerd" || t == "maerd") {
            t = "";
        }
    }

    cout << (t.empty() ? "YES" : "NO") << endl;
    return 0;
}
