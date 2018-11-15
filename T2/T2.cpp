#include <iostream>
using namespace std;

class data
{
private:
int year;
int month;
int day;
string str_month[12]={"jan","feb","mar","apr","may","jun","jul","aug","sep","oct","nov","dec"};
int days_in_month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
string str_day[7]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
public:
  bool is_valid_data(int year,int month,int day)
  {
    if((month>0 && month <12) && (day>0 && day<8))
    {
      if(day<=days_in_month[month] && day>0)
      return true;
      else
      return false;
    }
    else
    return false;
  }
  string get_dayof_week(int year,int month,int day)
  {
      if (day<8 && day>0)
      return str_day[day-1];
  }
  data(int y,int m,int d)
  {
      year=y;month=m;day=d;
  }
  void set_data(int y,int m,int d)
  {
     year=y; month=m; day=d;
  }
  int get_year()
  {
     return year;
  }
  int get_month()
  {
     return month;
  }
  int get_day()
  {
     return day;
  }
/*  void print()
  {
    cout << "" << '\n';
  }*/
};
int main(int argc, char const *argv[])
{
  data obj1(1992,9,5);
  int year,month,day;
  cin>>year>>month>>day;
  obj1.set_data(year,month,day);

  if(obj1.is_valid_data(year,month,day)==true){
cout<<"year = "<<obj1.get_year()<<endl;
cout<<"month = "<<obj1.get_month()<<endl;
cout<<"day = "<<obj1.get_day()<<endl;
cout<<obj1.get_dayof_week(year,month,day)<<endl;
}
else
cout<<"Invalid date \n";
  return 0;
}
