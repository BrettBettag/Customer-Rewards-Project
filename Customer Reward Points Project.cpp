#include <iostream>
#include <iomanip>
using namespace std;

//function prototype
double getRewardsPoints(double purchase, double rate);
int main()
{
   //Initialize variables
   char type = ' ' ;
   double purchase = 0.0;
   double points = 0.0;

   // Membership types
   cout << " Membership type: " << endl;
   cout << " Standard = S " << endl;
   cout << " Plus = P " << endl;
   cout << " Premium = M " << endl;
   cout << " Type: ";
   cin >> type;

   // valid your membership
   if (toupper(type) !='S' && toupper(type) !='P' && toupper(type) !='M')

   {
       cout << " Invalid member type" << endl;
       return 0;

   }
   // Monthly purchase amount
   cout << "Monthly purchase amount";
   cin >> purchase;

   // checking if purchase is valid
   if (purchase < 0 )
   {
       cout << "Error" << endl;

   }
   return 0;
   // Determine amount of points
   if (toupper(type)== 'S')
   {
       if (purchase < 75)
           cout << " Points: " << getRewardsPoints(purchase, 0.05);

       else if (purchase >=75 && purchase < 150)
           cout << "Points: " << getRewardsPoints(purchase, 0.075);
       else
           cout << "Points: " << getRewardsPoints(purchase, 0.1);
   }
   else if (toupper(type)== 'P')
   {
       if (purchase < 150)
          cout << "Points: " << getRewardsPoints(purchase, 0.06);
       else
          cout << "Points: " << getRewardsPoints(purchase, 0.13);
   }
   else if (toupper(type)== 'M')
   {
       if (purchase < 200)
           cout << "Points: " << getRewardsPoints(purchase, 0.04);
       else
          cout << "Points: " << getRewardsPoints(purchase, 0.15);
   }
   // Display the amount of points

   cout << fixed << setprecision (0);
   cout << " Amount of points:" << points << endl;
   system("pause");
   return 0;
}
    //function definitions
   double getRewardsPoints(double purchase, double rate )
   {
       double rewardsPoints = 0.0;
       rewardsPoints= purchase * rate;
       return rewardsPoints;

   // end of getRewardsPoints
