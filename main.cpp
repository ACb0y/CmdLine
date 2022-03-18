//
// Created by ACb0y on 2022/3/18.
//

#include "CmdLine.h"
#include <iostream>
#include <stdio.h>

std::string type;
std::string name;
int64_t len;
int64_t age;
bool flag;

void usage() {
  std::cout << "usage " << std::endl;
}

int main(int argc, char * argv[]) {

  CmdLine::BoolOpt(&flag, "flag");
  CmdLine::Int64Opt(&len, "len", 10);
  CmdLine::StrOpt(&type, "type", "test");
  CmdLine::StrOptRequired(&name, "name");
  CmdLine::Int64OptRequired(&age, "age");
  CmdLine::SetUsage(usage);
  CmdLine::Parse(argc,argv);
  
  std::cout << "type = " << type << std::endl;
  std::cout << "len = " << len << std::endl;
  std::cout << "flag = " << flag << std::endl;
  std::cout << "name = " << name << std::endl;
  std::cout << "age = " << age << std::endl;

  return 0;
}
