#include <iostream>
#include <stack>
using namespace std;

void test01() {
  //初始化
  stack<int> s1;
  stack<int> s2(s1);
  //stack操作
  s1.push(10);
  s1.push(20);
  s1.push(30);
  s1.push(100);
  cout<<"栈顶元素"<<s1.top()<<endl;
  s1.pop();//弹出栈顶元素
  
  //打印栈容器的数据
  while(!s1.empty()) {
    cout<<s1.top()<<endl;
    s1.pop();
  }
  cout<<s1.size() <<endl;
}

int main()
{
  test01();
  return 0;
}
