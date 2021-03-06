// Copyright 2021 Melnikova Maria dandelion.m@mail.ru

#ifndef INCLUDE_PROCESS_BUILD_HPP_
#define INCLUDE_PROCESS_BUILD_HPP_
#include <iostream>
#include <string>

#include <thread>
#include <Async++.h>
#include <boost/process.hpp>
#include <boost/program_options.hpp>

class process
{
 public:
  process();
  ~process();
  void start_process(bool Install, bool Pack, std::string Config,
                     int Time);
  void timer(int time);
  bool my_task(std::string task);
  void out_help();
 private:
  boost::process::child new_child;
};
#endif // INCLUDE_PROCESS_BUILD_HPP_

