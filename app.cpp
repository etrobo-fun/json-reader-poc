#include "ev3api.h"
#include "app.h"
#include <iostream>
#include "JsonReader.h"

#define DEBUG

#ifdef DEBUG
#define _debug(x) (x)
#else
#define _debug(x)
#endif

extern "C" void __sync_synchronize() {}
using namespace std;

void main_task(intptr_t unused) {
  JsonReader jr("scenario.json");
  cout << jr.getData() << endl;
}
