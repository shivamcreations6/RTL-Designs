# RTL-Designs

This repository contains a collection of Verilog/SystemVerilog RTL design examples, testbenches, and simulation artifacts for digital logic design practice.

## Repository Structure

This repo is mainly organized as separate RTL design experiments, each in its own subfolder.

- `full_adder`
  - Contains the full adder design, its logic-level implementation, verification setup, and waveform/screenshots showing the carry/sum behavior.

- `mux_8x1`
  - Holds the 8-to-1 multiplexer RTL, testbench/simulation results, and generated waveform artifacts.

- `ripple_up_counter`
  - Focuses on a ripple-style 4-bit up counter design, with simulation outputs and screenshots of the counter progression.

- `simple_down_counter`
  - A smaller counter example for downward counting, with the design and validation setup grouped together.

- `sync_ms`
  - Contains synchronizer designs for clock-domain crossing / metastability handling, including simulation traces and generated outputs.

- `up_counter`
  - A straightforward 4-bit up-counter implementation with its testbench and verification artifacts.

- `obj_dir`
  - Generated build and simulation artifacts created by Verilator for the RTL testbench runs.

## Summary

This repository is a collection of digital design experiments covering:
- arithmetic circuits like full adders and counters
- multiplexing logic
- synchronous design patterns
- waveform generation and simulation validation
- project folders for independent RTL design examples

You can browse the folders above to find the relevant module, testbench, or simulation output for each design.
