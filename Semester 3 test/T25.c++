#include <iostream>
#include <string>
#include <iomanip>

union Employee {
        int employeeID;
            char employeeName[21];
                char dateOfBirth[11];
                    char dateOfJoining[11];
                        float salary;
};

int main() {
        Employee emp;
        
            std::cin >> emp.employeeID;
                std::cin.ignore(); // Clear newline from input buffer
                    std::cin.getline(emp.employeeName, 21);
                        std::cin.getline(emp.dateOfBirth, 11);
                            std::cin.getline(emp.dateOfJoining, 11);
                                std::cin >> emp.salary;
                                
                                    std::cout << "ID : " << emp.employeeID << std::endl;
                                        std::cout << "Name : " << emp.employeeName << std::endl;
                                            std::cout << "DOB : " << emp.dateOfBirth << std::endl;
                                                std::cout << "DOJ : " << emp.dateOfJoining << std::endl;
                                                    std::cout << "Salary : " << std::fixed << std::setprecision(1) << emp.salary << std::endl;
                                                    
                                                        return 0;
}
