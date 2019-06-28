//评委打分案例
//创建5个选手(姓名 得分),10个评委对5个选手进行打分
//打分规则:去掉最高分   去掉最低分  取出平均分
//按得分对5个选手进行排名

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;
//创建一个选手类
class Player
{
  public:
    Player(string name,int sorce) {
      this->mname=name;
      this->msorce=sorce;
    }
    Player(){}
  public:
    string mname;
    int msorce;
};
//创建选手
void Create_Player(vector<Player>& v) {
  string nameseed="ABCDE";
  for(int i=0;i<5;++i) {
    Player p;
    p.mname="选手";
    p.mname+=nameseed[i];
    p.msorce=0;
    v.push_back(p);
  }
}
void PrintSorce(int val) {
  cout<<val<<" ";
}
//进行打分
void Set_Sorce(vector<Player>& v) {
  for(vector<Player>::iterator it=v.begin();it!=v.end();++it) {
    //对当前学生进行打分
    deque<int> dsorce;
    for(int i=0;i<10;++i) {
      int sorce=rand()%41+60;
      dsorce.push_back(sorce);
    }
    sort(dsorce.begin(),dsorce.end());
    //for_each(dsorce.begin(),dsorce.end(),PrintSorce);
    //去除最高分和最低分
    dsorce.pop_front();
    dsorce.pop_back();
    //求平均分
    int totalsorce=0;
    for(deque<int>::iterator dit=dsorce.begin();dit!=dsorce.end();++dit) {
      totalsorce+=(*dit);
    }
    int avgsorce=totalsorce/dsorce.size();
    //放进去
    (*it).msorce=avgsorce;
  }
}
//排序规则
bool mycompare(const Player& p1,const Player& p2) {
  return p1.msorce>p2.msorce;
}
//得到排名
void Print_Rank(vector<Player>& v) {
  sort(v.begin(),v.end(),mycompare);
  //打印
  for(vector<Player>::iterator it=v.begin();it!=v.end();++it) {
    cout<<"姓名:"<<(*it).mname<<"得分:"<<(*it).msorce<<endl;
  }
}
int main()
{
  vector<Player> vplist;
  Create_Player(vplist);
  Set_Sorce(vplist);
  Print_Rank(vplist);
  return 0;
}
