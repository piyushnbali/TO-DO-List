#include <iostream>
#include<vector>
#include<ctime>
#include<string>
using namespace std;
class manager
{   public:
    vector<string> tasks;
    vector<int> Dtsaved;
    vector<int> hour;
    vector<int>::iterator it;
    vector<int> min;
};
class propeties:public manager
{   public:
    void add(string s);
    void update();
    void del();
    void display();
};



void propeties::add(string s)
{   int hours,minutes;
    tasks.push_back(s);
    cout<<"\nEnter time"<<endl;
    cout<<"\nHours=";
    cin>>hours;
    cout<<"\nminutes=";
    cin>>minutes;
    hour.push_back(hours);
    min.push_back(minutes);
    }
void propeties::display()
{
          cout<<"\n\n*************ALL TASKS*******************************************************************";
    for(int i=0;i<tasks.size();i++)
        {
          cout<<"\n\t"<<i+1<<". "<<"\t"<<tasks[i]<<"\t"<<hour[i]<<":"<<min[i]<<endl;
        cout<<"\n********************************************************************************************"<<endl;}
    }
void propeties::update()
{ int taskno,t;
  string s;
  display();
  cout<<"\nwhich one do you want to update?"<<endl;
  cin>>taskno;
  cout<<"\nEnter new task"<<endl;
  cin>>s;
  tasks[taskno-1]=s;
  cout<<"\nEnter new time hour"<<endl;
  cin>>t;
  hour[taskno-1]=t;
  cout<<"\nEnter new time minutes"<<endl;
  cin>>t;
  min[taskno-1]=t;

}
void propeties::del()
{
    display();
    int taskno;
    char a;
    cout<<"\nWhich task you want to delete?"<<endl;
    cin>>taskno;
    taskno=taskno-1;

    cout<<"\nAre you sure you want to delete?y/n"<<endl;
    cin>>a;
    if(a=='y')
    {tasks.erase(tasks.begin()+taskno);
     hour.erase(hour.begin()+taskno);
      min.erase(min.begin()+taskno);}
    else{return;}

}

int main()
{
    //time_t now = time(0);
    //tm *ltm = localtime(&now);
    int options;
    string task;
    propeties p;
    while(true)
    {
        cout<<"\nEnter 1.New task   2.Display   3.Update 4.Delete 5.Report 6.Exit"<<endl;
        cin>>options;
        switch(options){
            case 1:  cout<<"\nEnter task"<<endl;
                     cin>>task;
                     p.add(task);
                     break;
            case 2: p.display();
                    break;
            case 3: p.update();
                   break;
            case 4: p.del();
                break;
            case 5: return 0;


        }

    }










}
