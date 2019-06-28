#include <iostream>
#include <set>
using namespace std;

void test01() {
  set<int> s1;
  s1.insert(7);
  s1.insert(2);
  s1.insert(4);
  s1.insert(5);
  s1.insert(1);

  for(set<int>::iterator it=s1.begin();it!=s1.end();++it) {
    cout<<(*it)<<"  ";
    cout<<endl;
  }
}

int main() {
  test01();
  return 0;
}
