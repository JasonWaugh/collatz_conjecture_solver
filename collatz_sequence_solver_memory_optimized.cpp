#include <iostream>
#include <chrono>
#include <vector>
#include <sstream>
using namespace std;
/*

  Simple maximum_collatz_sequence collatz conjecture sequence identifier

  This program will accept an upper limit value to which the solver will reach before identifying the maximum conjecture sequence length and entry value pair.

  created: 28 August 2021
  by: Jason Waugh

  There is a CPU performance definition {EVALUATE_PERFORMANCE} available for using the std::chrono to evaluate solve time and print results.
  

*/



// Define the EVALUATE PERFORMANCE to compile program for performance evaluation in terms of run time for solver
// #define EVALUATE_PERFORMANCE 1



std::pair<uint32_t, uint32_t> FindLongestCollatzSequence(uint64_t solver_upper_limit)
{
    // Initial max sequence length for the entry number of 2
    uint64_t max_sequence_index = 2;
    uint64_t max_sequence_length = 2;

    // Solver starts at entry point 2
    for(uint64_t i = 2 ; i < (solver_upper_limit + 1) ; i++)
    {
        uint64_t sequence_step = 0;
        uint64_t sequence_number = i;
        
        // Assuming all entry values will settle at 1
        while(sequence_number != 1)
        {
            if(sequence_number%2)
            {
                sequence_number = (((sequence_number*3) + 1));
                sequence_step++;

                // A further performance enhancer could specify that every odd number in the sequence will always calculate to an even number 
                // Therefor we could write this instead:
                //      sequence_number = ((sequence_number*3)+1) / 2;
                //      sequence_step+=2;


            }else{
                sequence_number = sequence_number / 2;
                sequence_step++;
            }
        }
        // update maximum value pairs
        if(sequence_step > max_sequence_length)
        {
            max_sequence_length = sequence_step;
            max_sequence_index = i;
        }
    }
    return std::make_pair(max_sequence_index, max_sequence_length);
}


int main(int argc, char *argv[])
{

    
    // Command line input parsing for Collatz conjecture Upper Bound
    // conversion from command line input char* to uint64_t
    uint64_t upper_bound_argument = atoi(argv[1]);
    

    
    #ifdef EVALUATE_PERFORMANCE


    auto clock_start = std::chrono::high_resolution_clock::now();;
    auto maximum_collatz_sequence = FindLongestCollatzSequence(upper_bound_argument);
    auto clock_end = std::chrono::high_resolution_clock::now();
    auto clock_duration = std::chrono::duration_cast<std::chrono::milliseconds>(clock_end - clock_start).count();
    std::cout << " Maximum sequence entry value : " << maximum_collatz_sequence.first << " : " << maximum_collatz_sequence.second;
    std::cout << " \n Solver Executation time : " << clock_duration << " milliseconds\n";

    #else
        FindLongestCollatzSequence(upper_bound_argument);
    #endif
}
