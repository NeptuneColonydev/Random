#include <iostream>
#include <string>
using namespace std;

void refCal(float x)
{
    float i = x/68.77;
    int n = static_cast<int>(i);
    cout << "You have " << i << " keys\n";
    float y = i - n;
    i = y*68.77;
    cout << to_string(n) << " keys and " << i << " refined" << endl;
}

void mainCal(float x, string y)
{
    float i = x/3;
    if(y == "E"||y == "e")
    {
        if(i >= 68.77)
        {
            cout << "You have " << i << " refined" << endl;
            refCal(i);
        }
        else
        {
            cout << "You have " << to_string(i) << " refined" << endl;
        }
    }
    else if(y == "S"||y == "s")
    {
        if(i >= 3)
        {
            cout << "You have " << to_string(i) << " reclaimed";
            i = i/3;
            if(i >= 68.77)
            {
                cout << " or " << to_string(i) << " refined" << endl;
                refCal(i);
            }
            else
            {
                cout << " or " << to_string(i) << " refined" << endl;
            }
        }
        else
        {
            cout << "You have " << to_string(i) << " reclaimed" << endl;
        }
    }
}

void keyCal(float x)
{
    float i = 68.77*x;
    cout << "You have " << to_string(i) << " refined";
    i = i*3;
    cout << " or " << to_string(i) << " reclaimed";
    i = i*3;
    cout << " or " << to_string(i) << " scrap" << endl;
}

int main()
{
    string type = "";
    float amount = 0;

    cout << "[R]efined, R[e]claimed, [S]crap or [K]ey ";
    cin >> type;

    if(type == "R"||type == "r")
    {
        cout << "How much refined metal do you want to convert? ";
        cin >> amount;
        refCal(amount);
    }
    else if (type == "E"||type == "e")
    {
        cout << "How much reclaimed metal do you want to convert? ";
        cin >> amount;
        mainCal(amount, type);
    }
    else if (type == "S"||type == "s")
    {
        cout << "How much scrap metal do you want to convert? ";
        cin >> amount;
        mainCal(amount, type);
    }
    else if (type == "K"||type == "k")
    {
        cout << "How many keys do you want to convert? ";
        cin >> amount;
        keyCal(amount);
    }
    else
    {
        cout << "Error: Not a valid type" << endl;
    }
   
    return 0;
}
