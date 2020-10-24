#include "yaml-cpp/yaml.h"
#include <iostream>

using namespace std;

int main() {
    YAML::Node config = YAML::LoadFile("config.yaml");

    if (config["lastLogin"]) {
        cout << "Last logged in: " << config["lastLogin"].as<string>() << "\n";
    }

    system("pause");
}