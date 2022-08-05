#ifndef NDISTPLUGIN_H
#define NDISTPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>

class NDistPlugin : public Plugin
{
public: 
 std::string toString() {return "NDist";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
