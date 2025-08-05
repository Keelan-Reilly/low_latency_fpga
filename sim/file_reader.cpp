#include <fstream>
#include <vector>
#include <string>

// Read a .mem file where each line is one hex byte (no “0x” prefix).
// Returns a vector of uint8_t.
std::vector<uint8_t> read_memfile(const std::string &path) {
    std::ifstream f(path);
    std::vector<uint8_t> data;
    std::string line;
    while (std::getline(f, line)) {
        if (line.empty()) continue;
        data.push_back(static_cast<uint8_t>(std::stoul(line, nullptr, 16)));
    }
    return data;
}
