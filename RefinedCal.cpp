#include <iostream>
#include <string>
using namespace std;

void refCal(float x)
{
    float i = x/68.77;
    cout << "You have " + to_string(i) + " keys\n";
}

void mainCal(float x, string y)
{
    float i = x/3;
    if(y == "E"||y == "e")
    {
        if(i >= 68.77)
        {
            cout << "You have " + to_string(i) + "refined";
            i = i/68.77;
            cout << " or " + to_string(i) + " keys\n";
        }
        else
        {
            cout << "You have " + to_string(i) + " refined\n";
        }
    }
    else if(y == "S"||y == "s")
    {
        if(i >= 3)
        {
            cout << "You have " + to_string(i) + "reclaimed";
            i = i/3;
            if(i >= 68.77)
            {
                cout << " or " + to_string(i) + " refined";
                i = i/68.77;
                cout << " or " + to_string(i) + " keys\n";
            }
            else
            {
                cout << " or " + to_string(i) + " refined\n";
            }
        }
        else
        {
            cout << "You have " + to_string(i) + " reclaimed\n";
        }
    }
}

void keyCal(float x)
{
    float i = 68.77/x;
    cout << "You have " + to_string(i) + " refined";
    i = i*3;
    cout << " or " + to_string(i) + " reclaimed";
    i = i*3;
    cout << " or " + to_string(i) + " scrap\n";
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
        cout << "Error: Not a valid type";
    }
    
    return 0;
}
