#include <iostream>
#include <string>
using namespace std;

float round(float var)
{
    float value = (int)(var * 100 + .5);
    return (float)value / 100;
}

void refCal(float ref, float curRef)
{
    float i = ref/curRef;
    int n = static_cast<int>(i);
    cout << "You have " << round(i) << " keys\n";
    float key = i - n;
    i = curRef*key;
    cout << n << " keys and " << round(i) << " refined" << endl;
}

void mainCal(float metal, string type, float curRef)
{
    float i = metal/3;
    if(type == "E"||type == "e")
    {
        if(i >= curRef)
        {
            cout << "You have " << round(i) << " refined" << endl;
            refCal(i, curRef);
        }
        else
        {
            cout << "You have " << round(i) << " refined";
        }
    }
    else if(type == "S"||type == "s")
    {
        if(i >= 3)
        {
            cout << "You have " << round(i) << " reclaimed";
            i = i/3;
            if(i >= curRef)
            {
                cout << " or " << round(i) << " refined" << endl;
                refCal(i, curRef);
            }
            else
            {
                cout << " or " << round(i) << " refined";
            }
        }
        else
        {
            cout << "You have " << round(i) << " reclaimed";
        }
    }
}

void keyCal(float key, float curRef, float curKey)
{
    float i = curRef*key;
    float prce = i * curKey;
    cout << "You have " << round(i) << " refined.\nPrice: " << round(prce);
    i = i*3;
    cout << " or " << round(i) << " reclaimed";
    i = i*3;
    cout << " or " << round(i) << " scrap" << endl;
}

int main()
{
    string type = "";
    float amount = 0;
    float curRef = 0;
    float curKey = 0;

    cout << "\nCurrent refined to key conversion rate: \n";
    cin >> curRef;
    cout << "Current key price: \n";
    cin >> curKey;
    cout << "[R]efined, R[e]claimed, [S]crap or [K]ey" << endl;
    cin >> type;

    if(type == "R"||type == "r")
    {
        cout << "How much refined metal do you want to convert? ";
        cin >> amount;
        refCal(amount, curRef);
    }
    else if (type == "E"||type == "e")
    {
        cout << "How much reclaimed metal do you want to convert? ";
        cin >> amount;
        mainCal(amount, type, curRef);
    }
    else if (type == "S"||type == "s")
    {
        cout << "How much scrap metal do you want to convert? ";
        cin >> amount;
        mainCal(amount, type, curRef);
    }
    else if (type == "K"||type == "k")
    {
        cout << "How many keys do you want to convert? ";
        cin >> amount;
        keyCal(amount, curRef, curKey);
    }
    else
    {
        cout << "Error: Not a valid type";
    }
   
    return EXIT_SUCCESS;
}
