#include "Review.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

review::review() {
	Review_ID = "";
	Review_date = "";
	Review_description = "";

};
void review::setReview(string R_ID, string R_date, string R_description) {

	Review_ID = R_ID;
	Review_date = R_date;
	Review_description = R_description;

};
void review::Displayreview() {

};
void review::addreview() {

};