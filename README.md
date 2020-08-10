# Stress_Testing_Bash_Script

### what is Stress Testing?
Stress Testing is a way to check your solution for an algorithmic problem with the Correct Solution/ Brute Solution, on a number of random Testcases.

It will generate some random testcases, and find out correct solution ( here from brute.cpp ) and then find out your solution (here from 1.cpp);
and then compare these solution one by one for all the testcases.

If your solution fails on a particular testcase, then it will return WA status, along with the testcase on which it failed.

### How to Run?
- **Step 1-** Download this repository manually or by using git clone on terminal.
- **step 2-** Write your brute solution/ Correct solution in file `brute.cpp`
- **step 3-** Write your solution in file `1.cpp`
- **step 4-** Do modification to generate testcases in file `gen.cpp`
- **step 5-** Open the terminal and go the directory containing above three files + stress.sh file.
- **step 6-** Run `bash stress.sh your_solution_file_name.cpp number_of_testcases`

              Example for above scenario::  bash stress.sh 1.cpp 10


![](https://user-images.githubusercontent.com/42353548/89758485-89b6cf00-db05-11ea-863f-bed6943615c4.png)

![](https://user-images.githubusercontent.com/42353548/89758485-89b6cf00-db05-11ea-863f-bed6943615c4.png).
