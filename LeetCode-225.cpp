/*************************************************************************
	> File Name: LeetCode-235.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月28日 星期五 12时34分47秒
 ************************************************************************/
class MyStack {
public:
    queue<int> q1, q2;
    MyStack() {
    }
    
    void push(int x) {
        if(q1.empty()){
            q2.push(x);
            return;
        }
        if(q2.empty()){
            q1.push(x);
            return;
        }
    }
    
    int pop() {
        int t;
        if(q1.empty()){
            if(q2.size() == 1){
                t = q2.front();
                q2.pop();
                return t;
            }
            else{
                while(q2.size() > 1){
                    q1.push(q2.front());
                    q2.pop();
                }
                t = q2.front();
                q2.pop();
                return t;
            }
        }
        if(q2.empty()){
            if(q1.size() == 1){
                t = q1.front();
                q1.pop();
                return t;
            }
            else{
                while(q1.size() > 1){
                    q2.push(q1.front());
                    q1.pop();
                }
                t = q1.front();
                q1.pop();
                return t;
            }
        }
        return 0;
    }
    
    int top() {
        if(q1.empty())
            return q2.back();
        else
            return q1.back();
    }
    
    bool empty() {
        return q1.empty() && q2.empty();
    }
};

