#include "JsonReader.h"

JsonReader::JsonReader(string fileName)
: _fileName(fileName)
{
  std::ifstream f(_fileName);
  _data = json::parse(f);
}

string JsonReader::getData() {
  return _data;
}
