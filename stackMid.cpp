#include<iostream>
#include<queue>
using namespace std;

class Stack{
public:
      queue<int>q;

    int push(int x){
        int s=0;
        s=q.size();
        q.push(x);
        for(int i=0;i<s;i++){
            q.push(q.front());
            q.pop();

        }

    }
    void pop(){
        q.pop();
        
    }
    int top(){
        return q.front();
    }


}
int main(){
    Stack<int>st;
    Stack<int>s;

    st.push(1);
    st.push(3);
    st.push(6);
    st.push(2);
    st.push(5);
    st.push(9);
    int cnt=0;
    while(!st.empty()){
        s.push(st.top());
        st.pop();
        cnt++;
    }
    cnt=cnt/2;
    while(cnt--){
        s.pop();
    }
    cout<<s.top()<<endl;

    


}