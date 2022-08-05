#ifndef NEEDLEMANWUNSCHPLUGIN_H
#define NEEDLEMANWUNSCHPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>

class NeedlemanWunschPlugin : public Plugin
{
public: 
 std::string toString() {return "NeedlemanWunsch";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
