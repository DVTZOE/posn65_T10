#include <bits/stdc++.h>
using namespace std ;

int demoGrade()
{
    int k , m , f ;
    cin >> k >> m >> f  ;
    cout << "Total : " <<  k + m + f ;
    return 0;
}
int calcGrade()
{
    string grade[] = {"F","F","F","F","F","F","F","F","F","F","D","D+","C","C+","B","B+","A","A","A","A","A"} ;
    int score ;
    cin >> score ;
    cout << "Grade : " <<  grade[(int)score/5] ;
    return 0 ;
}
int evemodd()
{
    int x ;
    cin >> x  ;
    cout << x << " is " <<  ((x%2 == 0)?"an Even number.":"an Odd number.") ;
    return 0 ;
}
int leapyear()
{
    int year ;
    cin >> year ;
    bool leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ;
    if (leap)
    {
      cout << year << " is a leap year. " ;
    }
    else
    {
      cout << year << " is not a leap year. " ;
    }
    return 0;
}
int buffetPromotion ()
{
    int n ;
    cin >> n  ;
    cout << 249 * (n-(n/4)) ;
    return 0 ;
}
int colaPromotion  ()
{
    int cola ;
    cin >> cola ;
    cola = cola/20 ;
    int bottle , cap = cola ;
    while(true)
    {
      if (cap < 4 && bottle < 2)
      {
        cout << cola ;
        break;
      }
      else
      {
        cola += (cap/4);
        cola += (bottle/2);
        cap -= (cap/4)*4;
        bottle -= (bottle/2)*4 ;
      }
    }
    return 0 ;
}
int main()
{
    colaPromotion () ;
}
