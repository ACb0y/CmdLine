//
// Created by ACb0y on 2022/3/13.
//

#pragma once

#include <string>

namespace MyFlag {

typedef void(*Usage)();

void BoolVar(bool* value, std::string name, bool defaultValue = false);
void Int64Var(int64_t* value, std::string name, int64_t defaultValue, bool required = false);
void StringVar(std::string* value, std::string name, std::string defaultValue, bool required = false);

void SetUsage(Usage usage);
void Parse(int argc, char * argv[]);

}
