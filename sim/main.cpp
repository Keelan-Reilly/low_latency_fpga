#include "Vtb_top.h"
#include "verilated.h"
int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vtb_top* top = new Vtb_top;
    while (!Verilated::gotFinish()) top->eval();
    delete top;
    return 0;
}