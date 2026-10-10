# RTL-Designs

This repository contains a collection of Verilog/SystemVerilog RTL design examples, testbenches, and simulation artifacts for digital logic design practice.

## Repository Index

### Top-level RTL files
- `down_counter_4bit.v` — 4-bit down counter RTL design
- `down_counter_4bit_tb.v` — testbench for the down counter
- `full_adder.v` — full adder RTL design
- `full_adder_tb.v` — testbench for the full adder
- `full_adder_osu018.v` — full adder version using the OSU 0.18µm cell library
- `full_adder_tb` — generated simulation binary for the full adder testbench
- `up_counter_4bit.v` — 4-bit up counter RTL design
- `up_counter_4bit_tb.v` — testbench for the up counter
- `mux_8x1` — folder containing an 8:1 multiplexer project
- `ripple_up_counter` — folder containing the ripple up counter project
- `simple_down_counter` — folder containing the simple down counter project
- `sync_ms` — folder containing a synchronizer design project
- `up_counter` — folder containing another up counter implementation
- `obj_dir` — generated Verilator build output for top-level simulation
- `README.md` — repository overview and index
- `.gitignore` — Git ignore rules
- `full_adder.vcd` — waveform dump for the full adder simulation

### `full_adder/`
- `README.md`
- `full_adder.v`
- `full_adder_osu018.v`
- `full_adder_tb.v`
- `full_adder_tb` — generated testbench binary
- `Screenshot 2026-10-08 203247.png`
- `Screenshot 2026-10-08 203606.png`
- `Screenshot 2026-10-08 210143.png`
- `.gitignore`

### `simple_down_counter/`
- `README.md`
- `down_counter_4bit.v`
- `down_counter_4bit_tb.v`
- `up_counter_4bit.v`
- `up_counter_4bit_tb.v`
- `.gitignore`

### `up_counter/`
- `README.md`
- `up_counter_4bit.v`
- `up_counter_4bit_tb.v`
- `.gitignore`

### `mux_8x1/`
- `mux_8x1.v`
- `mux_8x1_tb.v`
- `mux_8x1.vcd`
- `obj_dir/` — generated Verilator output files
  - `Vmux_8x1_tb`
  - `Vmux_8x1_tb.cpp`
  - `Vmux_8x1_tb.h`
  - `Vmux_8x1_tb.mk`
  - `Vmux_8x1_tb__ALL.a`
  - `Vmux_8x1_tb__ALL.cpp`
  - `Vmux_8x1_tb__ALL.d`
  - `Vmux_8x1_tb__ALL.o`
  - `Vmux_8x1_tb__Syms.cpp`
  - `Vmux_8x1_tb__Syms.h`
  - `Vmux_8x1_tb__TraceDecls__0__Slow.cpp`
  - `Vmux_8x1_tb__Trace__0.cpp`
  - `Vmux_8x1_tb__Trace__0__Slow.cpp`
  - `Vmux_8x1_tb___024root.h`
  - `Vmux_8x1_tb___024root__DepSet_h565de244__0.cpp`
  - `Vmux_8x1_tb___024root__DepSet_ha4a45911__0.cpp`
  - `Vmux_8x1_tb___024root__DepSet_ha4a45911__0__Slow.cpp`
  - `Vmux_8x1_tb___024root__Slow.cpp`
  - `Vmux_8x1_tb__main.cpp`
  - `Vmux_8x1_tb__pch.h`
  - `Vmux_8x1_tb__ver.d`
  - `Vmux_8x1_tb__verFiles.dat`
  - `Vmux_8x1_tb_classes.mk`
  - `verilated.d`
  - `verilated.o`
  - `verilated_threads.d`
  - `verilated_threads.o`
  - `verilated_timing.d`
  - `verilated_timing.o`
  - `verilated_vcd_c.d`
  - `verilated_vcd_c.o`

### `ripple_up_counter/`
- `ripple_up_counter_4bit.v`
- `ripple_up_counter_4bit_tb.v`
- `ripple_up_counter_osu018.v`
- `ripple_up_counter_tb.v`
- `up_counter_dump.vcd`
- `Screenshot 2026-10-08 191846.png`
- `Screenshot 2026-10-08 191957.png`
- `obj_dir/` — generated Verilator output files
  - `Vripple_up_counter_tb`
  - `Vripple_up_counter_tb.cpp`
  - `Vripple_up_counter_tb.h`
  - `Vripple_up_counter_tb.mk`
  - `Vripple_up_counter_tb__ALL.a`
  - `Vripple_up_counter_tb__ALL.cpp`
  - `Vripple_up_counter_tb__ALL.d`
  - `Vripple_up_counter_tb__ALL.o`
  - `Vripple_up_counter_tb__Syms.cpp`
  - `Vripple_up_counter_tb__Syms.h`
  - `Vripple_up_counter_tb__TraceDecls__0__Slow.cpp`
  - `Vripple_up_counter_tb__Trace__0.cpp`
  - `Vripple_up_counter_tb__Trace__0__Slow.cpp`
  - `Vripple_up_counter_tb___024root.h`
  - `Vripple_up_counter_tb___024root__DepSet_h77eee3ca__0.cpp`
  - `Vripple_up_counter_tb___024root__DepSet_h77eee3ca__0__Slow.cpp`
  - `Vripple_up_counter_tb___024root__DepSet_hbe44dea2__0.cpp`
  - `Vripple_up_counter_tb___024root__Slow.cpp`
  - `Vripple_up_counter_tb___024unit.h`
  - `Vripple_up_counter_tb___024unit__DepSet_hcb7118e5__0__Slow.cpp`
  - `Vripple_up_counter_tb___024unit__Slow.cpp`
  - `Vripple_up_counter_tb__main.cpp`
  - `Vripple_up_counter_tb__pch.h`
  - `Vripple_up_counter_tb__ver.d`
  - `Vripple_up_counter_tb__verFiles.dat`
  - `Vripple_up_counter_tb_classes.mk`
  - `verilated.d`
  - `verilated.o`
  - `verilated_threads.d`
  - `verilated_threads.o`
  - `verilated_timing.d`
  - `verilated_timing.o`
  - `verilated_vcd_c.d`
  - `verilated_vcd_c.o`

### `sync_ms/`
- `dump.vcd`
- `sync2_stage`
- `sync2_stage.v`
- `sync2_stage_osu018.v`
- `sync3_stage.v`
- `sync3_stage_osu018.v`
- `sync_tb.v`
- `obj_dir/` — generated Verilator output files
  - `Vsync_tb`
  - `Vsync_tb.cpp`
  - `Vsync_tb.h`
  - `Vsync_tb.mk`
  - `Vsync_tb__ALL.a`
  - `Vsync_tb__ALL.cpp`
  - `Vsync_tb__ALL.d`
  - `Vsync_tb__ALL.o`
  - `Vsync_tb__Syms.cpp`
  - `Vsync_tb__Syms.h`
  - `Vsync_tb__TraceDecls__0__Slow.cpp`
  - `Vsync_tb__Trace__0.cpp`
  - `Vsync_tb__Trace__0__Slow.cpp`
  - `Vsync_tb___024root.h`
  - `Vsync_tb___024root__DepSet_hc0629d12__0.cpp`
  - `Vsync_tb___024root__DepSet_hc0629d12__0__Slow.cpp`
  - `Vsync_tb___024root__DepSet_he4c55d8d__0.cpp`
  - `Vsync_tb___024root__Slow.cpp`
  - `Vsync_tb__main.cpp`
  - `Vsync_tb__pch.h`
  - `Vsync_tb__ver.d`
  - `Vsync_tb__verFiles.dat`
  - `Vsync_tb_classes.mk`
  - `verilated.d`
  - `verilated.o`
  - `verilated_threads.d`
  - `verilated_threads.o`
  - `verilated_timing.d`
  - `verilated_timing.o`
  - `verilated_vcd_c.d`
  - `verilated_vcd_c.o`

### `obj_dir/`
This directory contains generated Verilator-derived C++/header files and simulation artifacts for the top-level designs.
- `Vfull_adder.cpp`
- `Vfull_adder.h`
- `Vfull_adder.mk`
- `Vfull_adder__Syms.cpp`
- `Vfull_adder__Syms.h`
- `Vfull_adder__TraceDecls__0__Slow.cpp`
- `Vfull_adder__Trace__0.cpp`
- `Vfull_adder__Trace__0__Slow.cpp`
- `Vfull_adder___024root.h`
- `Vfull_adder___024root__DepSet_h40f955c0__0.cpp`
- `Vfull_adder___024root__DepSet_h40f955c0__0__Slow.cpp`
- `Vfull_adder___024root__DepSet_ha678bca3__0.cpp`
- `Vfull_adder___024root__DepSet_ha678bca3__0__Slow.cpp`
- `Vfull_adder___024root__Slow.cpp`
- `Vfull_adder___024unit.h`
- `Vfull_adder___024unit__DepSet_hda2b645c__0__Slow.cpp`
- `Vfull_adder___024unit__Slow.cpp`
- `Vfull_adder__main.cpp`
- `Vfull_adder__pch.h`
- `Vfull_adder_classes.mk`
- `Vfull_adder_tb`
- `Vfull_adder_tb.cpp`
- `Vfull_adder_tb.h`
- `Vfull_adder_tb.mk`
- `Vfull_adder_tb__ALL.a`
- `Vfull_adder_tb__ALL.cpp`
- `Vfull_adder_tb__ALL.d`
- `Vfull_adder_tb__ALL.o`
- `Vfull_adder_tb__Syms.cpp`
- `Vfull_adder_tb__Syms.h`
- `Vfull_adder_tb__TraceDecls__0__Slow.cpp`
- `Vfull_adder_tb__Trace__0.cpp`
- `Vfull_adder_tb__Trace__0__Slow.cpp`
- `Vfull_adder_tb___024root.h`
- `Vfull_adder_tb___024root__DepSet_h04dbcc2c__0.cpp`
- `Vfull_adder_tb___024root__DepSet_h04dbcc2c__0__Slow.cpp`
- `Vfull_adder_tb___024root__DepSet_he362bcaf__0.cpp`
- `Vfull_adder_tb___024root__DepSet_he362bcaf__0__Slow.cpp`
- `Vfull_adder_tb___024root__Slow.cpp`
- `Vfull_adder_tb___024unit.h`
- `Vfull_adder_tb___024unit__DepSet_h366ece28__0__Slow.cpp`
- `Vfull_adder_tb___024unit__Slow.cpp`
- `Vfull_adder_tb__main.cpp`
- `Vfull_adder_tb__pch.h`
- `Vfull_adder_tb__ver.d`
- `Vfull_adder_tb__verFiles.dat`
- `Vfull_adder_tb_classes.mk`
- `verilated.d`
- `verilated.o`
- `verilated_threads.d`
- `verilated_threads.o`
- `verilated_timing.d`
- `verilated_timing.o`
- `verilated_vcd_c.d`
- `verilated_vcd_c.o`

## Summary
This repository is a collection of digital design experiments covering:
- arithmetic circuits like full adders and counters
- multiplexing logic
- synchronous design patterns
- waveform generation and simulation validation
- project folders for independent RTL design examples

You can browse the folders above to find the relevant module, testbench, or simulation output for each design.
