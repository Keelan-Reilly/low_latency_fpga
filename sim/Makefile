# Example Makefile entries
VERILATOR = verilator
TOP       = tb_top
SVSRC     = ../hdl/*.sv
CPPSRC    = main.cpp file_reader.cpp
TB        = V$(TOP)

all: sim

sim:
	$(VERILATOR) --cc --sv --exe --build \
	  --top-module $(TOP) $(SVSRC) $(CPPSRC) -O3 --trace
	./obj_dir/V$(TOP) +PACKET_FILE=../messages/sample.mem
