/*
Mohanad Ayman Aly
20180296
Mostafa Adel Mohamed
20180279
*/
#include <iostream>

using namespace std;

int main()
{
    int choice, unit;
    float quantity;
    while(true)
    {
    cout<<"Unit Converter\n";
    cout<<"Choose an option\n";
    cout<<"1. Temperature\n";
    cout<<"2. Mass\n";
    cout<<"3. Length\n";
    cin >> choice;
    switch(choice)
    {
    case 1:{
        cout<<"Choose your unit\n";
        cout<<"1. Celsius\n";
        cout<<"2. Fahrenheit\n";
        cout<<"3. Kelvin\n";
        cin>>unit;
        if(unit > 3 || unit < 1){
            cout<<"Invalid choice, please try again"<<endl;
            continue;
        }
        cout<<"Enter temperature: ";
        cin>>quantity;
        switch(unit)
        {
            case 1:{
                cout<<"Temperature in Fahrenheit: "<<(quantity*9/5)+32<<endl;
                cout<<"Temperature in Kelvin: "<<quantity+273.15<<endl;
                break;
            }
            case 2:{
                quantity = (quantity-32)*5/9;
                cout<<"Temperature in Celsius: "<<quantity<<endl;
                cout<<"Temperature in Kelvin: "<<quantity+273.15<<endl;
                break;
            }
            case 3:{
                quantity = quantity-273.15;
                cout<<"Temperature in Celsius: "<<quantity<<endl;
                cout<<"Temperature in Fahrenheit: "<<(quantity*9/5)+32<<endl;
                break;
            }
        }
        break;
        }
    case 2:{
        cout<<"Choose your unit\n";
        cout<<"1. Kilogram\n";
        cout<<"2. Gram\n";
        cout<<"3. Pound\n";
        cout<<"4. Ton\n";
        cin>>unit;
        if(unit > 4 || unit < 1){
            cout<<"Invalid choice, please try again"<<endl;
            continue;
        }
        cout<<"Enter mass: ";
        cin>>quantity;
        switch(unit)
        {
            case 1:{
                cout<<"Mass in grams: "<<quantity*1000<<endl;
                cout<<"Mass in pounds: "<<quantity*2.205<<endl;
                cout<<"Mass in tons: "<<quantity*0.001<<endl;
                break;
            }
            case 2:{
                quantity = quantity / 1000;
                cout<<"Mass in kilograms: "<<quantity<<endl;
                cout<<"Mass in pounds: "<<quantity*2.205<<endl;
                cout<<"Mass in tons: "<<quantity*0.001<<endl;
                break;
            }
            case 3:{
                quantity = quantity / 2.205;
                cout<<"Mass in kilograms: "<<quantity<<endl;
                cout<<"Mass in grams: "<<quantity*1000<<endl;
                cout<<"Mass in tons: "<<quantity*0.001<<endl;
                break;
            }
            case 4:{
                quantity = quantity / 0.001;
                cout<<"Mass in kilograms: "<<quantity<<endl;
                cout<<"Mass in grams: "<<quantity*1000<<endl;
                cout<<"Mass in pounds: "<<quantity*2.205<<endl;
                break;
            }
        }
        break;
        }
    case 3:{
        cout<<"Choose your unit\n";
        cout<<"1. Meter\n";
        cout<<"2. Centimeter\n";
        cout<<"3. Kilometer\n";
        cout<<"4. Foot\n";
        cout<<"5. Yard\n";
        cin>>unit;
        if(unit > 5 || unit < 1){
            cout<<"Invalid choice, please try again"<<endl;
            continue;
        }
        cout<<"Enter length: ";
        cin>>quantity;
        switch(unit)
        {
            case 1:{
                cout<<"Mass in centimeters: "<<quantity*100<<endl;
                cout<<"Mass in kilometers: "<<quantity*0.001<<endl;
                cout<<"Mass in feet: "<<quantity*3.281<<endl;
                cout<<"Mass in yards: "<<quantity*1.094<<endl;
                break;
            }
            case 2:{
                quantity = quantity / 100;
                cout<<"Mass in meters: "<<quantity<<endl;
                cout<<"Mass in kilometers: "<<quantity*0.001<<endl;
                cout<<"Mass in feet: "<<quantity*3.281<<endl;
                cout<<"Mass in yards: "<<quantity*1.094<<endl;
                break;
            }
            case 3:{
                quantity = quantity / 0.001;
                cout<<"Mass in meters: "<<quantity<<endl;
                cout<<"Mass in centimeters: "<<quantity*100<<endl;
                cout<<"Mass in feet: "<<quantity*3.281<<endl;
                cout<<"Mass in yards: "<<quantity*1.094<<endl;
                break;
            }
            case 4:{
                quantity = quantity / 3.281;
                cout<<"Mass in meters: "<<quantity<<endl;
                cout<<"Mass in centimeters: "<<quantity*100<<endl;
                cout<<"Mass in kilometers: "<<quantity*0.001<<endl;
                cout<<"Mass in yards: "<<quantity*1.094<<endl;
                break;
            }
            case 5:{
                quantity = quantity / 1.094;
                cout<<"Mass in meters: "<<quantity<<endl;
                cout<<"Mass in centimeters: "<<quantity*100<<endl;
                cout<<"Mass in kilometers: "<<quantity*0.001<<endl;
                cout<<"Mass in feet: "<<quantity*3.281<<endl;
                break;
            }
        }
        break;
        }
    default:{
        cout<<"Invalid choice, please try again"<<endl;
        continue;
        }
    }
    break;
    }
    return 0;
}
