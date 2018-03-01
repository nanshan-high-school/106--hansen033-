#include <iostream>
using namespace std;

int main()
{
	int year, yearT, day, w, m, date, dbf, dafeb;
	//年 1990後幾年 1990後總天 1號前有幾個 月(變) 日 1前空(day before first) 2月有幾天
	cout << "y";
	cin >> year;
	yearT = year - 1990;
	day = yearT * 365;
	for (int m = 1990 ; m < year + 1 ; m ++){
		if (year % 400 == 0){
			day ++;
		} else if (year % 100 == 0){
		} else if (year % 4 == 0){
			day ++;
		}
	}
	w = day % 7;
	
	if(year % 400 == 0){
			dafeb = 29;
		} else if (year % 100 == 0){
			dafeb = 28;
		} else if (year % 4 == 0) {
			dafeb = 29;
		} else {
			dafeb = 28;
		}
	
	for (m = 1 ; m <= 12 ; m++){
		switch (m){
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				cout << "\n" << m << "月" << "\n";
				cout << "一  二  三  四  五  六  日\n";
				for (dbf = 0 ; dbf <= w - 1 ; dbf ++){
					cout << "  　";
				}
				for (date = 0 ; date < 31 ; date ++){
					if ((date + w) % 7 == 0){
						cout << "\n";
					}
				cout << date + 1;
				if (date < 9){
					cout << "   ";
				} else if (date >= 9){
					cout << "  ";
				}
				}
				day += 31;
				w = day % 7;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				cout << "\n" << m << "月" << "\n";
				cout << "一  二  三  四  五  六  日\n";
				for (dbf = 0 ; dbf <= w - 1 ; dbf ++){
					cout << "  　";
				}
				for (date = 0 ; date < 30 ; date ++){
					if ((date + w) % 7 == 0){
						cout << "\n";
					}
				cout << date + 1;
				if (date < 9){
					cout << "   ";
				} else if (date >= 9){
					cout << "  ";
				}
				}
				day += 30;
				w = day % 7;
				break;
			case 2:
				cout << "\n" << m << "月" << "\n";
				cout << "一  二  三  四  五  六  日\n";
				for (dbf = 0 ; dbf <= w ; dbf ++){
					cout << "   ";
				}
				for (date = 0 ; date < dafeb ; date ++){
					if ((date + w) % 7 == 0){
						cout << "\n";
					}
					cout << date + 1;
					if (date < 9){
						cout << "   ";
					} else if (date >= 9){
						cout << "  ";
					}
				}
				day += dafeb;
				w = day % 7;
				break;
			default:
				cout << "error!!";
		}
	}
	return 0;
} 
