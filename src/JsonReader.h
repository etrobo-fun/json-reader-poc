#ifndef JSONREADER_H
#define JSONREADER_H

#include <fstream>
#include <string>
#include "json.hpp"

using json = nlohmann::json;
using namespace std;

class JsonReader {
private:
  string _fileName;
  json _data;

public:
  JsonReader(string fileName);
  // bool hasNext();
  // void next(); // TODO: return some object.
  string getData();
};

#endif