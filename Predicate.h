//
// Created by Juan on 10/4/2022.
//

#ifndef PROJECT_1_PREDICATE_H
#define PROJECT_1_PREDICATE_H
#include <string>
#include<vector>
#include "Parameter.h"

class Predicate {
public:
    //Predicate(const std::string& id);
    void setParameters(Parameter* parameter);
    void setId(const std::string& ID);
    //std::string toStringId();
    //std::string toStringParameters();
    std::string toStringPredicate();

    std::vector<Parameter*> getParameters(){
        return parameters;
    }


private:
    std::string id;
    std::vector<Parameter*> parameters;
};


#endif //PROJECT_1_PREDICATE_H
