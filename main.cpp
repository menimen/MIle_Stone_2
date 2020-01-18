//
// Created by eizzker on 15/01/2020.
//
#include "MySerialServer.h"
#include "CacheManager.h"
#include "FileCacheManager.h"
#include "StringReverser.h"
#include "MyTestClientHandler.h"
#include "MyClientHandler.h"
#include "OA.h"
#include "AStar.h"
using namespace std;
int main() {
  MySerialServer* s = new MySerialServer();
  CacheManager<string, string>* cacheFile = new FileCacheManager<string, string>();
  Solver<string,string>* solver = new OA<string,string>(    new AStar<string, string>());
  CLientHandler *c = new MyClientHandler<string,string>(solver, cacheFile);
  s->open(8520, c);
    int sleeptime = 120000;
    try {
        std::this_thread::sleep_for(std::chrono::milliseconds(sleeptime));
    }
    catch (...) {
        throw "there was a problem with sleep";
    }
return 0;
}