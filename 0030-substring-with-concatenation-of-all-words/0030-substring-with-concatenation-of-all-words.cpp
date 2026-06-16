class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> ans;

        int n = s.size();
        int m = words.size();
        int len = words[0].size();

        unordered_map<string, int> freq;
        for (string &word : words) {
            freq[word]++;
        }

        for (int offset = 0; offset < len; offset++) {
            unordered_map<string, int> window;
            int left = offset;
            int count = 0;

            for (int right = offset; right + len <= n; right += len) {
                string word = s.substr(right, len);

                if (freq.count(word)) {
                    window[word]++;
                    count++;

                    while (window[word] > freq[word]) {
                        string leftWord = s.substr(left, len);
                        window[leftWord]--;
                        left += len;
                        count--;
                    }

                    if (count == m) {
                        ans.push_back(left);

                        string leftWord = s.substr(left, len);
                        window[leftWord]--;
                        left += len;
                        count--;
                    }
                } else {
                    window.clear();
                    count = 0;
                    left = right + len;
                }
            }
        }

        return ans;
    }
};