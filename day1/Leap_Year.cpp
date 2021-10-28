#include <iostream>
using namespace std;

int main(int argc,char const *argv[])
{
    uint16_t l_year_ui16;
    while(1)
    {
        cout << "请输入年份：" << endl;
        cin >> l_year_ui16;
        uint8_t l_Reminder_ui8 = l_year_ui16%4;
        if(l_Reminder_ui8 != 0)
        {
            cout << "输入的年份不是闰年" << endl;
        }
        else
        {
            cout << "输入的年份是闰年" << endl;
        }
    }
    system("pause");
    return 0;
    
}