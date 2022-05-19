
#include<string>
using namespace std;

class review {

private:
	string Review_ID;
	string Review_date;
	string Review_description;
private:
	review();//constructor
	void setReview(string R_ID, string R_date, string R_descriptionn);
	void Displayreview();
	void addreview();
	~review();//destructor	  
};