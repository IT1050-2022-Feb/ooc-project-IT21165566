//customer.h
#include<iostream>
#include<string>
#include "reporth.h"
#include "Rating.h"
#include "Review.h"


using namespace std;
class customer
{
private:
    string Customer_ID;
    string Customer_Fname;
    string Customer_Lname;
    string Customer_Email;
    string Customer_ContactNo;
    string Customer_Gender;
    string Customer_Address;
    string Customer_DOB;
    Report  *RPT[2];
    ratings *rating[2];
    review *rview[2];


public:
    customer();//constructor
    void setCustomerDetails(string CID, string C_Fname, string C_Lname, string C_Email, string C_contactNo, string C_gender, string C_address, string C_DOB);
    void DisplayCustomerDetails();
    void EditCustomer();
    void Filterhotels();
    ~customer();//destructor
};