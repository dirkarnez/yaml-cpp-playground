#include <iostream>
#include "yaml-cpp/node/node.h"
#include "yaml-cpp/yaml.h"

using namespace std;

int main() {
    YAML::Node config = YAML::LoadFile("../../config.yaml");

    if (config["name"]) {
        cout << "name: " << config["name"].as<string>() << "\n";
    }

    system("pause");
}