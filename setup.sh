#!/bin/bash

# Function to create directory structure
create_structure() {
    base_dir=$1
    shift
    for sub_dir in "$@"; do
        mkdir -p "${base_dir}/${sub_dir}/exercises"
        mkdir -p "${base_dir}/${sub_dir}/examples"
        touch "${base_dir}/${sub_dir}/notes.txt"
    done
}

# Main Topics and Subtopics
create_structure "1_Introduction" "Basics/Syntax_and_Structure" "Basics/Data_Types" "Basics/Operators" "Basics/Input_and_Output" "Control_Flow/Conditional_Statements" "Control_Flow/Looping_Statements"

create_structure "2_Functions" "Basics/Defining_and_Calling_Functions" "Basics/Scope_and_Lifetime_of_Variables" "Advanced/Recursion" "Advanced/Pointers_and_Function_Arguments"

create_structure "3_Data_Structures" "Arrays/Array_Manipulation" "Arrays/Multi-dimensional_Arrays" "Strings/String_Manipulation" "Strings/String_Functions" "Pointers/Basics_of_Pointers" "Pointers/Pointer_Arithmetic" "Structures/Defining_and_Using_Structures" "Structures/Nested_Structures"

create_structure "4_Memory_Management" "Dynamic_Allocation/malloc_and_free" "Dynamic_Allocation/calloc_and_realloc" "Memory_Leaks/Detecting_and_Avoiding"

create_structure "5_File_IO" "Basics/Reading_and_Writing_Files" "Basics/Binary_and_Text_Modes"

create_structure "6_Advanced_Topics" "Preprocessors/Macro_Definition" "Preprocessors/Conditional_Compilation" "Bit_Manipulation/Bitwise_Operators" "Bit_Manipulation/Bit_Fields"

create_structure "7_Multi-File_Programming" "Modules_and_Headers/Creating_and_Using" "Modules_and_Headers/Compilation_and_Linking"

create_structure "8_Leetcode_Algorithmic_Challenges" "Sorting_and_Searching" "Dynamic_Programming" "Graph_Algorithms" "Data_Structure_Implementations"

create_structure "9_Miscellaneous_Topics" "Error_Handling" "Variable_Arguments" "Library_Creation_and_Usage"

create_structure "10_Projects" "Simple_Projects" "Intermediate_Projects" "Advanced_Projects"
