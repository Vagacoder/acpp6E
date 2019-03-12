// CH16 ex07
// header file of DayOfYear

class DayOfYear {
public:
	DayOfYear();
	DayOfYear(int newMonth, int newDay);
	void input();
	void output();
	void set(int newMonth, int newDay);
	//Precondition: newMonth and newDay form a possible date.

	void set(int newMonth);
	//Precondition: 1 <= newMonth <= 12
	//Postcondition: The date is set to the first day of the given month.

	int getMonthNumber(); //Returns 1 for January, 2 for February, etc.
	int getDay();

	bool operator <(const DayOfYear b) const;

private:
	int month;
	int day;
};

