#include <iostream>

using namespace std;

class Alarm
{
public:
    void alarmOn()
    {
        cout << "Security alarm is on" << endl;
    }
    void alarmOff()
    {
        cout << "Security alarm is off" << endl;
    }
};

class Ac
{
public:
    void acOn() { cout << "AC is on" << endl; }
    void acOff() { cout << "AC is off" << endl; }
};

class Tv
{
public:
    void tvOn() { cout << "TV is on" << endl; }
    void tvOff() { cout << "TV is off" << endl; }
};

class HomeAutomationFacade
{
public:
    void goToWork()
    {
        ac.acOff();
        tv.tvOff();
        alarm.alarmOn();
    }
    void comeHome()
    {
        alarm.alarmOff();
        ac.acOn();
        tv.tvOn();
    }

private:
    Alarm alarm;
    Ac ac;
    Tv tv;
};

int main()
{
    HomeAutomationFacade hf;
    hf.goToWork();
    hf.comeHome();
}