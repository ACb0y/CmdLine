//
// Created by ACb0y on 2022/3/18.
//

#include <stdio.h>
#include <iostream>
#include "flag.h"

std::string type;
int64_t len;

void usage() {
  std::cout << "usage " << std::endl;
}

int main(int argc, char * argv[]) {

  MyFlag::Int64Var(&len, "len", 10);
  MyFlag::StringVar(&type, "type", "test");
  MyFlag::SetUsage(usage);
  MyFlag::Parse(argc,argv);
  std::cout << "type = " << type << std::endl;
  std::cout << "len = " << len << std::endl;

  return 0;
}
