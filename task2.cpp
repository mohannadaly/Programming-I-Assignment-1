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
    int choice, quantity;
    char pizzaSize;
    string extraToppings, topping, anotherItem;
    float total = 0.0;
    while(true)
    {
        extraToppings = "No";
        cout<<"Welcome to our Pizza restaurant!!!\n";
        cout<<"Please select one of items\n";
        cout<<"1- SUPER SUPREME - S=50 /M=75.5/ L=100\n";
        cout<<"2- CHICKEN SUPREME - S=45/ M=73.88/ L=97.99\n";
        cout<<"3- MARGHERITA - S=35/ M=70/ L=95\n";
        cout<<"4- CHEESE LOVERS - S=60.96/ M=87.75/ L=113.16\n";
        cout<<"5- SEA FOOD LOVERS - S= 64.47/ M=94.30/ L=123.25\n";
        cin >> choice;
        if(choice == 1){
            cout<<"You selected SUPER SUPREME"<<endl;
        }else if(choice == 2){
            cout<<"You selected CHICKEN SUPREME"<<endl;
        }else if(choice == 3){
            cout<<"You selected MARGHERITA"<<endl;
        }else if(choice == 4){
            cout<<"You selected CHEESE LOVERS"<<endl;
        }else if(choice == 5){
            cout<<"You selected SEA FOOD LOVERS"<<endl;
        }else{
            cout<<"Invalid choice, please try again"<<endl;
            continue;
        }
        cout<<"Enter your quantity"<<endl;
        cin >> quantity;
        cout<<"Enter your size"<<endl;
        cin >> pizzaSize;
        switch(choice){
            case 1: {
                if(pizzaSize == 'S' || pizzaSize == 's') total += quantity*50;
                else if(pizzaSize == 'M' || pizzaSize == 'm') total += quantity*75.5;
                else if(pizzaSize == 'L' || pizzaSize == 'l') total += quantity*100;
                else{
                    cout<<"Invalid choice, please try again"<<endl;
                    total = 0;
                    continue;
                }
                break;
            }
            case 2: {
                if(pizzaSize == 'S' || pizzaSize == 's') total += quantity*45;
                else if(pizzaSize == 'M' || pizzaSize == 'm') total += quantity*73.88;
                else if(pizzaSize == 'L' || pizzaSize == 'l') total += quantity*97.99;
                else{
                    cout<<"Invalid choice, please try again"<<endl;
                    total = 0;
                    continue;
                }
                break;
            }
            case 3: {
                if(pizzaSize == 'S' || pizzaSize == 's') total += quantity*35;
                else if(pizzaSize == 'M' || pizzaSize == 'm') total += quantity*70;
                else if(pizzaSize == 'L' || pizzaSize == 'l') total += quantity*95;
                else{
                    cout<<"Invalid choice, please try again"<<endl;
                    total = 0;
                    continue;
                }
                break;
            }
            case 4: {
                if(pizzaSize == 'S' || pizzaSize == 's') total += quantity*60.96;
                else if(pizzaSize == 'M' || pizzaSize == 'm') total += quantity*87.75;
                else if(pizzaSize == 'L' || pizzaSize == 'l') total += quantity*113.16;
                else{
                    cout<<"Invalid choice, please try again"<<endl;
                    total = 0;
                    continue;
                }
                break;
            }
            case 5: {
                if(pizzaSize == 'S' || pizzaSize == 's') total += quantity*64.47;
                else if(pizzaSize == 'M' || pizzaSize == 'm') total += quantity*94.30;
                else if(pizzaSize == 'L' || pizzaSize == 'l') total += quantity*123.25;
                else{
                    cout<<"Invalid choice, please try again"<<endl;
                    total = 0;
                    continue;
                }
                break;
            }
        }
        cout<<"Do you want extra toppings?"<<endl;
        cin >> extraToppings;
        if(extraToppings == "Yes" || extraToppings == "yes" || extraToppings == "YES"){
            cout<<"Please select one ( mushroom = 10, onion =5 , sausage =10)"<<endl;
            cin >> topping;
        }
        if(extraToppings == "Yes"){
            if(topping == "mushroom" || topping == "sausage"){
                total += quantity*10;
            }else if(topping == "onion"){
                total += quantity*5;
            }else{
            cout<<"Invalid choice, please try again"<<endl;
            total = 0;
            continue;
        }
        }
        cout<<"Do you want another item?"<<endl;
        cin >> anotherItem;
        if(anotherItem == "No" || anotherItem == "no" || anotherItem == "NO"){
            break;
        }
    }
    cout<<"Thank you for using our application your bill = "<<total<<endl;
    return 0;
}
