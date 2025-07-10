#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>

using namespace std;
using namespace chrono;

int main(){

while(true){
    auto now = system_clock::now(); //We take current time from system
    time_t currentTime = system_clock::to_time_t(now);

    tm* local_time = localtime(&currentTime); //convert current time into local time

    system("cls"); // screen clear for window

    // system("clear") //screen clear for mac

    cout<<put_time(local_time, "%H:%M:%S")<<endl; //time format
    std::this_thread:: sleep_for(chrono::seconds(1)); //stop for 1 second and then print

}



    return 0;
}