#include <iostream>
#include <iomanip>
using namespace std;

void displayStandard(double monthlyPurchase)
{
    double rewardPoints;
   if(monthlyPurchase<75) 
   {
       rewardPoints=(5*monthlyPurchase)/100; 
   }
   else if(75<=monthlyPurchase && monthlyPurchase<=149.99) 
   {
       rewardPoints=(7.5*monthlyPurchase)/100; 
   }
   else if(150<=monthlyPurchase) 
   {
       rewardPoints=(10*monthlyPurchase)/100; 
   }
  
   cout<<"\nReward Points :: "<<fixed<<setprecision(0)<<rewardPoints;
}

void displayPlus(double monthlyPurchase)
{
    double rewardPoints;
   if(monthlyPurchase<150) 
   {
       rewardPoints=(6*monthlyPurchase)/100; 
   }
   else if(monthlyPurchase>=150) 
   {
       rewardPoints=(13*monthlyPurchase)/100; 
   }
   cout<<fixed;
   
   cout<<"\nReward Points :: "<<setprecision(0)<<rewardPoints;
}

void displayPremium(double monthlyPurchase)
{
    double rewardPoints;
   if(monthlyPurchase<200) 
   {
       rewardPoints=(4*monthlyPurchase)/100;
   }
   else if(monthlyPurchase>=200) 
   {
       rewardPoints=(15*monthlyPurchase)/100;
   }
   cout<<fixed;
   
   cout<<"\nReward Points :: "<<setprecision(0)<<rewardPoints;
}

int main()
{
    double membershipType = 0.0, monthlyPurchase = 0.0;
    double rewardPoints;
    
    cout << "(1 = Standard, 2 = Plus, 3 = Premium) Enter membership type: ";
    cin >> membershipType;
    if (membershipType >=1 && membershipType <=3){
        cout << "Enter your monthly purchase amount: ";
        cin >> monthlyPurchase;
    }
    else
        cout << "Error";
        
       if (membershipType == 1){
        displayStandard(monthlyPurchase);
    }
    else 
        if(membershipType == 2){
            displayPlus(monthlyPurchase);
        }
    else 
        if(membershipType == 3){
            displayPremium(monthlyPurchase);
        }
    return 0;
}