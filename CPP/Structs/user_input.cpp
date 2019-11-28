#include <iostream>
#include <string>
#include "user_input.h"

struct Advertisement {
    int ads_shown{};
    int ads_clicked{};
};    
int calculations(){
    Advertisement ads;
    using namespace std;
    cout << "Enter ads shown: ";
    cin >> ads.ads_shown;
    cout << "Enter ads clicked: ";
    cin >> ads.ads_clicked;
    return printf("You made an average of, %d%%",((ads.ads_clicked * 100) / ads.ads_shown));    
}