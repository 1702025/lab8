#include<iostream>
using namespace std;


class result
{
public:
  result()
  {
    for(int x=0;x<10;x++)
    students[x][0]=x+1;
  }
  void set(int x,int y,int marks)
  {
    students[x][y]=marks;
  }

  int ind_avg(int row)
  {
     row--;
      return (students[row][1]+students[row][2]+students[row][3])/3;
  }
  int max(int max)
  {
    max--;
    if(students[max][1]>students[max][2] && students[max][1]>students[max][3])
    return students[max][1];
    if(students[max][2]>students[max][1] && students[max][2]>students[max][3])
    return students[max][2];
    if(students[max][3]>students[max][1] && students[max][3]>students[max][2])
    return students[max][3];
  }

private:
  int students[10][4];
};

int main(int argc, char const *argv[])
{
  result class1;

int data,total=0,falana;
  for(int row=0;row<10;row++)
  {
    cout<<"Student "<<row+1<<endl;
    for(int col=1;col<4;col++)
    {
       cout<<"Enter marks of test"<<col<<" = ";
       cin>>data;
       if(data<0 || data>100)
      {
        cout<<"In-valid value please re-enter data"<<endl;
        col--;
      }
       else
       {class1.set(row,col,data);}
    }
  }

  //for(int row=0;row<10;row++)
  //cout<<"Individual average of the student "<<row+1<<" = "<<class1.ind_avg(row)<<endl;
  cout<<"Enter student of which average is required"<<endl;
  cin>>falana;
  cout<<"Average of "<<falana<<" = "<<class1.ind_avg(falana)<<" and highest test marks are "<<class1.max(falana)<<endl;
 for(int row=0;row<10;row++)
 {
   total=total+class1.ind_avg(row);
 }
 cout<<"Average of whole Class =  "<<total/10<<endl<<endl<<endl;



  return 0;
}
