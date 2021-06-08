// PAPER 1 QUESTION 2
//PROGRAM TO FIND MEDIAN IN A STREAM OF INTEGERS
#include<bits/stdc++.h>
using namespace std;
  
void Getmedians(double arr[], int n)
{
    priority_queue<double> s;
    priority_queue<double,vector<double>,greater<double> > g;
  
    double median = arr[0];
    s.push(arr[0]);
  
    cout << median << endl;
    for (int i=1; i < n; i++)
    {
        double x = arr[i];
        if (s.size() > g.size())
        {
            if (x < median)
            {
                g.push(s.top());
                s.pop();
                s.push(x);
            }
            else
                g.push(x);
  
            median = (s.top() + g.top())/2.0;
        }
        else if (s.size()==g.size())
        {
            if (x < median)
            {
                s.push(x);
                median = (double)s.top();
            }
            else
            {
                g.push(x);
                median = (double)g.top();
            }
        }
        else
        {
            if (x > median)
            {
                s.push(g.top());
                g.pop();
                g.push(x);
            }
            else
                s.push(x);
  
            median = (s.top() + g.top())/2.0;
        }
  
        cout << median << endl;
    }
}
  
int main()
{
    double arr[] = {5, 15, 1, 3};
    int totalsize = sizeof(arr)/sizeof(arr[0]);
    Getmedians(arr, totalsize);
    return 0;
}
