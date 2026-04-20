class Solution {
public:

    string encode(vector<string>& strs) {
        if (strs.size() == 0) {
            return "";
        }

        string res;
        vector<int> lengths;

        for (string str : strs) {
            lengths.push_back(str.length());
        }

        for (int len : lengths) {
            res += to_string(len) + ",";
        }

        res += "#";

        for (string str : strs) {
            res += str;
        }

        return res;
        
    }

    vector<string> decode(string s) {
        if (s.empty()) return {};
        vector <int> sizes;
        vector<string> res;

        int i =0;

        while (s[i]!='#'){

            string str = "";
            while(s[i]!=','){
                str += s[i];
                i++;
            }
            sizes.push_back(stoi(str));
            i++;
        }
        i++;
        for (int size: sizes){
            res.push_back(s.substr(i,size));
            i+=size;
        }
        return res;

    }
};
