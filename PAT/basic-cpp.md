# PAT (Basic Level) Practice （中文）

### 1001 害死人不偿命的(3n+1)猜想

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int step = 0;
    while (n != 1) {
        if (n % 2) {
            n = (3 * n + 1) / 2;
        } else {
            n = n / 2;
        }
        step++;
    }
    cout << step;
}
```

### 1002 写出这个数

```cpp
#include <iostream>
using namespace std;

int main() {
    string chinese[] = {"ling", "yi", "er", "san", "si",
                        "wu", "liu", "qi", "ba", "jiu"};
    string num;
    cin >> num;

    int sum = 0;
    for (auto ch : num) {
        sum += ch - '0';
    }

    string res;
    for (char digit : to_string(sum)) {
        res += (chinese[digit - '0'] + " ");
    }
    cout << res.substr(0, res.size() - 1) << endl;
}
```

### 1003 我要通过！

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> strs;
    for (int i = 0; i < n; i++) {
        string tmp;
        cin >> tmp;
        strs.push_back(tmp);
    }

    for (int i = 0; i < n; i++) {
        vector<int> a;
        int counter = 0;
        bool flag = true;
        bool p_flag = false;
        for (auto ch : strs[i]) {
            if (ch == 'A') {
                counter++;
            } else if (ch == 'P') {
                a.push_back(counter);
                counter = 0;
            } else if (p_flag and ch == 'T') {
                a.push_back(counter);
                counter = 0;
            } else {
                flag = false;
                break;
            }
        }
        if (a[0] * a[1] != counter or a[1] == 0) {
            flag = false;
        }
        if (flag) {
            cout << "YES";
        } else {
            cout << "NO";
        }
        if (i != n - 1) {
            cout << endl;
        }
    }
}
```

### 1004 成绩排名

```cpp
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct stu {
    string name;
    string id;
    int score;
};

bool cmp(stu a, stu b) {
    return a.score >= b.score;
}

int main(void) {
    int n;
    cin >> n;
    vector<stu> arr;
    for (int i = 0; i < n; i++) {
        stu tmp;
        cin >> tmp.name >> tmp.id >> tmp.score;
        arr.push_back(tmp);
    }

    sort(arr.begin(), arr.end(), cmp);

    cout << arr[0].name << " " << arr[0].id << endl;
    cout << arr[n - 1].name << " " << arr[n - 1].id << endl;
}
```

### 1005 继续(3n+1)猜想

```cpp

```
