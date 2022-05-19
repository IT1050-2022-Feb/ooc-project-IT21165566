#include "customerh.h"
#include "reporth.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

customer::customer() {
	Customer_ID = "";
	Customer_Fname = "";
	Customer_Lname = "";
	Customer_Email = "";
	Customer_ContactNo = "";
	Customer_Gender = "";
	Customer_Address = "";
	Customer_DOB = "";
	Report *RPT;
};

void customer::setCustomerDetails(string CID, string C_Fname, string C_Lname, string  C_Email, string C_contactNo, string C_gender, string C_address, string C_DOB) {

	Customer_ID = CID;
	Customer_Fname = C_Fname;
	Customer_Lname = C_Lname;
	Customer_Email = C_Email;
	Customer_ContactNo = C_contactNo;
	Customer_Gender = C_gender;
	Customer_Address = C_address;
	Customer_DOB = C_DOB;
	Report = RPT;
};

void customer::DisplayCustomerDetails() {

};
void customer::EditCustomer() {

};
void customer::Filterhotels() {

};












