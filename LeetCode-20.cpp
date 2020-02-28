/*************************************************************************
	> File Name: LeetCode-20.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 12时28分07秒
 ************************************************************************/
class Solution {
public:
    bool isValid(string s) {
        if(s.size() % 2) return false;
        vector<char> vecStack;
        char c;
        for(auto i : s) {
            if(i == '}' || i == ')' || i== ']') {
                if (!vecStack.empty()) c = vecStack[vecStack.size()-1];
                else return false;
                if(i == '}' && c != '{') return false;
                if(i == ')' && c != '(') return false;
                if(i == ']' && c != '[') return false;
                vecStack.pop_back();
            }
            else vecStack.push_back(i);
        }
        return vecStack.empty();
    }
};

