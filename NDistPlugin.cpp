#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "NDistPlugin.h"

void NDistPlugin::input(std::string file) {
 inputfile = file;
}

void NDistPlugin::run() {}

void NDistPlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = "";
myCommand += "NDist";
myCommand += " ";
myCommand += "-i";
myCommand += " ";
myCommand += "-in";
myCommand += " ";
myCommand += inputfile + " > "+outputfile;
 system(myCommand.c_str());
}

PluginProxy<NDistPlugin> NDistPluginProxy = PluginProxy<NDistPlugin>("NDist", PluginManager::getInstance());
