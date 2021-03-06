#ifndef COMPILER_H
#define COMPILER_H

#include "features.h"

#include <string>
#include <memory>
#include <vector>

class Environment;

class Compiler
{
public:
  static shared<Compiler> create(shared<Environment> environment);
  void compile(std::string sourceUnit, std::string output);
  void addIncludeDirectory(std::string directory);
  void addObjectDirectory(std::string directory);
  void addLib(std::string path);
  void addLibDirectory(std::string directory);
  void link(std::string output);
  std::string getName();
  std::string getObjectSuffix();
  std::string getExecutableSuffix();
  void obtainPreEnvironmentScript();

private:
  shared<Environment> environment;
  std::vector<std::string> includeDirectories;
  std::vector<std::string> libDirectories;
  std::vector<std::string> objectDirectories;
  std::vector<std::string> libs;
  std::string name;
  std::string preEnvironmentScript;

};

#endif
