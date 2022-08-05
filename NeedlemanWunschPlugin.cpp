#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "NeedlemanWunschPlugin.h"

void NeedlemanWunschPlugin::input(std::string file) {
 inputfile = file;
}

void NeedlemanWunschPlugin::run() {}

void NeedlemanWunschPlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = "";
myCommand += "NeedlemanWunsch";
myCommand += " ";
myCommand += "-i";
myCommand += " ";
myCommand += "-in";
myCommand += " ";
myCommand += inputfile + " > "+outputfile;
 system(myCommand.c_str());
}

PluginProxy<NeedlemanWunschPlugin> NeedlemanWunschPluginProxy = PluginProxy<NeedlemanWunschPlugin>("NeedlemanWunsch", PluginManager::getInstance());
