#include "iostream"
using namespace std;

int main() {
   int month_num;
   cout << "�������·ݣ�" << endl;
   cin >> month_num;
   char month_arr[12][10] = {
      "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"
   };

   if (month_num >= 1 && month_num <= 12) {
      cout << month_arr[month_num - 1] << endl;
   }
   else {
      cout << "���벻�Ϸ�" << endl;
   }

}

