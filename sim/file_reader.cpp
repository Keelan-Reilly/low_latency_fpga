// sim/file_reader.cpp
// Loads sample.mem into Verilog memory via DPI (if used), or can be used by C++ harness.
#include <vector>
#include <string>
#include <fstream>
#include <cstdint>
#include <sstream>

std::vector<uint8_t> load_mem(const std::string& path) {
    std::vector<uint8_t> data;
    std::ifstream file(path);
    std::string line;
    while (std::getline(file, line)) {
        if (line.empty() || line[0] == '#') continue;
        uint8_t byte = static_cast<uint8_t>(std::stoul(line, nullptr, 16));
        data.push_back(byte);
    }
    return data;
}