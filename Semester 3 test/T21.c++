#include <iostream>
#include <string>

class DayOfWeek {
private:
    int dayNumber;
        
public:
    void initialize() {
        std::cin >> dayNumber;
    }
            
    void printDay() {
        std::string dayName;
                            
        switch (dayNumber) {
            case 1:
                dayName = "Sunday";
                break;
            case 2:
                dayName = "Monday";
                break;
            case 3:
                dayName = "Tuesday";
                break;
            case 4:
                dayName = "Wednesday";
                break;
            case 5:
                dayName = "Thursday";
                break;
            case 6:
                dayName = "Friday";
                break;
            case 7:
                dayName = "Saturday";
                break;
            case 0:
                dayName = "Weekend";
                break;
            default:
                dayName = "Invalid";
                break;
            }
                                    
            std::cout << dayName << std::endl;
        }
};

int main() {
    DayOfWeek day;
    day.initialize();
    day.printDay();
    return 0;
}