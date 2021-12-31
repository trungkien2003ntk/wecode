#include <iostream>
using namespace std;

int ngay, thang, nam;

bool ktraNgay(int ngay, int thang, int nam);
bool nhuan(int nam);
bool ktraT(int thang);
bool ktraN(int nam);

bool ktraNgay(int ngay, int thang, int nam) {
	if (ngay > 0) 
		if ((thang == 4 || thang == 6 || thang == 9 || thang == 11)){
			if (ngay <= 30) 
                return true;
        }		
        else
			if (thang == 2) 
				if (nhuan(nam)) {
					if (ngay <= 29) return true;
				}
				else {
					if (ngay <= 28) return true;
				}
			else
				if (ngay <= 31) return true;
	return false;
}

bool nhuan(int nam) {
	if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0)) 
		return true;
	return false;
}

bool ktraT(int thang) {
	if (thang < 1 || thang > 12) 
		return false;
	return true;
}

bool ktraN(int nam) {
	if (nam > 0) return true;
	return false;
}

int main()
{
	cin >> ngay >> thang >> nam;

	if (ktraN(nam)) 
		if (ktraT(thang)) 
			if (ktraNgay(ngay, thang, nam)) 
				cout << ngay << "/" << thang << "/" << nam << " la ngay hop le.";
			else 
				cout << ngay << "/" << thang << "/" << nam << " la ngay khong hop le.";
		else 
			cout << "Thang khong hop le.";			
	else
		cout << "Nam khong hop le.";
    return 0;
}