//
// Created by Juan on 10/4/2022.
//

#ifndef PROJECT_1_PARAMETER_H
#define PROJECT_1_PARAMETER_H
#include <string>

class Parameter {
public:
    Parameter(const std::string& string);
    ~Parameter();
    //void setString(const std::string& string);
    std::string toString();

private:
    std::string string;
};


#endif //PROJECT_1_PARAMETER_H
