#include <iostream>
#include <queue>
using namespace std;


void test01() {
  queue<int> q;
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.pop();
  while(q.size()>0) {
      cout<<q.front()<<endl;
      q.pop();
  }
}
int main() {
  test01();
  return 0;
}
