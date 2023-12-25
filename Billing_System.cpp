#include<iostream>
#include<stdio.h>

using namespace std;
int main(){
 int returnbill();
 int feedback;
    int totalbill= returnbill();
    cout<<"Your total amount is ="<<totalbill<<"Rs"<<endl;
    cout<<"Thank you for your order\n";
    cout<<"please give your Feedback:\n";
    cin>>feedback;
    cout<<"Thank your for your feedback\n";
    // cout<<"Upi,Card,Cash all type of transacation accepted."<<endl;
    }

    int returnbill() {
cout<<"**********************************************************************************************************************"<<endl;
     cout<<"\t\t\t\t\t\tWelcome to Online Food Order Platform\n";
    cout<<"\t\t\t\t\t\t-----------Order YOur Food-----------\n";
    cout<<"***********************************************************************************************************************"<<endl;
    cout<<"-----Please follow below instruction-----\n";
    cout<<"step 1:please press s to start your order\n";
    cout<<"step 2:select the order one by one\n";
    cout<<"***********************************************************************************************************************"<<endl;
     
   

    first:
    char ans;
    char start;
    cin>>start;
    int item;
    int amount=0;
    if( start == 's' || start=='S'){
        choice:
        cout<<"-----select your food-----\n";
        cout<<"-----select yout food 1,2,3,4,5,6,7,8,9,10 according to your choice-----\n";
        orderagain:
        cout<<"(1)chilli Paneer:250rs\n";
        cout<<"(2)cheese burger:150rs\n";
        cout<<"(3)sp. sandwich:200rs\n";
        cout<<"(4)Paneer sandwich:150rs\n";
        cout<<"(5)hot chocalate milkshake:100rs\n";
        cout<<"(6)thick chocalate shake:200rs\n";
        cout<<"(7)Cold coffee:60rs\n";
        cout<<"(8)Hot coffee:80rs\n";
        cout<<"(9)SP.Tea:50rs\n";
        cout<<"(10)SP.surpise Dish:350rs\n";
        cin>>item;
        if (item==1)
        {
            amount=amount+250;
            /* code */
        }
        else if (item==2)
        {
            amount=amount+150;
            
        }
        else if (item==3)
        {
            amount=amount+200;
            
        }
        else if (item==4)
        {
            amount=amount+150;
            
        }
        else if (item==5)
        {
            amount=amount+100;
            
        }
         else if (item==6)
        {
            amount=amount+200;
            
        }
         else if (item==7)
        {
            amount=amount+60;
            
        }
         else if (item==8)
        {
            amount=amount+80;
            
        }
         else if (item==9)
        {
            amount=amount+50;
            
        }
         else if (item==10)
        {
            amount=amount+350;
            
        }

        else{
            cout<<"you enter wrong item ,please try again \n";
            goto choice;
        }
        cout<<"add to more item  press 'Y' for yes and 'N' for no\n";
        cin>>ans;
        if(ans == 'y' || ans == 'Y'){
            goto orderagain;

        }
        else{
            return amount;
        }
        
    }
    else{
        printf("Your input is wrong , please enter the letter 's' \n");
        goto first;
    }



}