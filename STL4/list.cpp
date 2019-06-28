#include <iostream> 
#include <list>
using namespace std;

void test01() {
  list<int> mlist1;
  list<int> mlist2(10,5);
  list<int> mlist3(mlist2);
  list<int> mlist4(mlist2.begin(),mlist2.end());

  for(list<int>::iterator it=mlist4.begin();it!=mlist4.end();++it) {
    cout<<(*it)<<" ";
  }
  cout<<endl;
}
void test02() {
  list<int> mlist;
  mlist.push_back(100);
  mlist.push_front(200);
  mlist.insert(mlist.begin(),300);
  mlist.insert(mlist.end(),400);
  list<int>::iterator it=mlist.begin();
  it++;
  it++;
  mlist.insert(it,500);


  //删除
  mlist.pop_back();
  mlist.pop_front();

  mlist.erase(mlist.begin(),mlist.end());
  mlist.remove(200);//删除匹配的所有值
}
int main() {
  test01();
  return 0;
}
