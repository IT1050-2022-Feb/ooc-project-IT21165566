//Rating.h
#include<string>
using namespace std;

class ratings {

private:
	string Rating_ID;
	string Rating_value;

public:
	ratings();//constructor

	void setRating(string R_ID, string R_value);
	void Displayrating();
	void addrating();
	~ratings();//destuctor

};