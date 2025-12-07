# Push Swap

Push_swap is a project designed to learn how to sort data efficiently while making use of the stack data structure in C. The main goal is to sort a stack of integers using a minimal number of operations.

## Table of Contents

- [Introduction](#introduction)
- [Installation](#installation)
- [Usage](#usage)
- [Operations](#operations)
- [Examples](#examples)
- [License](#license)

## Introduction

The Push Swap project is aimed at mastering the basics of stack manipulation and understanding sorting algorithms. It will teach you to think critically about how to solve problems algorithmically.

## Installation

To get started with Push_swap, clone the repository:
```bash
git clone https://github.com/adriancanosaiz/push_swap.git
cd push_swap
```

Compile the project using make:
```bash
make
```

## Usage

After compilation, you can execute the program with the following syntax:
```bash
./push_swap [list of integers]
```

## Operations

The following operations are implemented:
- sa: swap the first two elements of stack A.
- sb: swap the first two elements of stack B.
- ss: sa and sb at the same time.
- pa: push the top element of stack B to stack A.
- pb: push the top element of stack A to stack B.
- ra: rotate stack A upwards.
- rb: rotate stack B upwards.
- rr: ra and rb at the same time.
- rra: reverse rotate stack A downwards.
- rrb: reverse rotate stack B downwards.
- rrr: rra and rrb at the same time.

## Examples

Here is an example of how to sort numbers using Push_swap:
```bash
./push_swap 3 2 1
```
This will output the series of operations needed to sort the input numbers.

## License

This project is licensed under the MIT License. See the LICENSE file for more details.