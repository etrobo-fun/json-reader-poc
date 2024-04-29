#ifndef JSONREADER_H
#define JSONREADER_H

class JsonReader {
private:
  string file_name;

public:
  JsonReader(string file_name);
  bool hasNext();
  void next(); // TODO: return some object.
}

#endif