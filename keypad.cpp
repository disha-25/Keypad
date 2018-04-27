#include<iostream>
#include<string>
using namespace std;



 string helper(int num)
  {
    string mapping[] = {"" , "" , "abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz"};
    return mapping[num];
  }

void printKeypad(int num, string output= "") {
  int k=0;

  if(num == 0 || num == 1)
  {
    cout<<output<<endl;
    return;
  }
   string y = helper(num%10);
  for(int i=0;i<y.size();i++)
  {
    string last=y[i]+output;
    printKeypad(num/10,last);

  }
}

int main()
{
    int num;
    string output = "";
    cout<<"Enter numbers"<<endl;
    cin>>num;
    cout<<"possible pairs are"<<endl;
    printKeypad(num,output);


}
