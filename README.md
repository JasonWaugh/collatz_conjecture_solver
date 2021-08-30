# collatz_conjecture_solver
This repository contains two program folders. each console application will solve for the longest collatz conjecture sequence given an upper limit, one optimizing memory usage, the other CPU run time.

Compiled with 
       g++ (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0

Program 1: Memory Optimized Solver

  This program will accept an upper limit value to which the solver will reach before identifying the maximum conjecture sequence length and entry value pair.

Program Profile using Valgrind

  Memory usage evaluation carried out with Valrind, solving for a upper limit of 5 000 000

      --------------------------------------------------------------------------------
      Command:            ./simple 5000000
      Massif arguments:   --time-unit=ms
      ms_print arguments: massif.out.3854
      --------------------------------------------------------------------------------


          KB
      71.01^          :::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::#
           |          :                                                            #
           |          :                                                            #
           |          :                                                            #
           |          :                                                            #
           |          :                                                            #
           |          :                                                            #
           |          :                                                            #
           |          :                                                            #
           |          :                                                            #
           |          :                                                            #
           |          :                                                            #
           |          :                                                            #
           |          :                                                            #
           |          :                                                            #
           |          :                                                            #
           |          :                                                            #
           |          :                                                            #
           |          :                                                            #
           |          :                                                            #
         0 +----------------------------------------------------------------------->s
           0                                                                   2.762

      Number of snapshots: 4
       Detailed snapshots: [2 (peak)]

      --------------------------------------------------------------------------------
        n       time(ms)         total(B)   useful-heap(B) extra-heap(B)    stacks(B)
      --------------------------------------------------------------------------------
        0              0                0                0             0            0
        1            404           72,712           72,704             8            0
        2          2,762           72,712           72,704             8            0
      99.99% (72,704B) (heap allocation functions) malloc/new/new[], --alloc-fns, etc.
      ->99.99% (72,704B) 0x48F2A99: ??? (in /usr/lib/x86_64-linux-gnu/libstdc++.so.6.0.28)
        ->99.99% (72,704B) 0x4011B89: call_init.part.0 (dl-init.c:72)
          ->99.99% (72,704B) 0x4011C90: call_init (dl-init.c:30)
            ->99.99% (72,704B) 0x4011C90: _dl_init (dl-init.c:119)
              ->99.99% (72,704B) 0x4001139: ??? (in /usr/lib/x86_64-linux-gnu/ld-2.31.so)
                ->99.99% (72,704B) 0x1: ???
                  ->99.99% (72,704B) 0x1FFF000176: ???
                    ->99.99% (72,704B) 0x1FFF00017F: ???

      --------------------------------------------------------------------------------
        n       time(ms)         total(B)   useful-heap(B) extra-heap(B)    stacks(B)
      --------------------------------------------------------------------------------
        3          2,762                0                0             0            0


        Memory usage evaluation carried out with Valrind, solving for a upper limit of 1 000 000


      --------------------------------------------------------------------------------
      Command:            ./simple 1000000
      Massif arguments:   --time-unit=ms
      ms_print arguments: massif.out.3850
      --------------------------------------------------------------------------------


          KB
      71.01^                                  :::::::::::::::::::::::::::::::::::::#
           |                                  :                                    #
           |                                  :                                    #
           |                                  :                                    #
           |                                  :                                    #
           |                                  :                                    #
           |                                  :                                    #
           |                                  :                                    #
           |                                  :                                    #
           |                                  :                                    #
           |                                  :                                    #
           |                                  :                                    #
           |                                  :                                    #
           |                                  :                                    #
           |                                  :                                    #
           |                                  :                                    #
           |                                  :                                    #
           |                                  :                                    #
           |                                  :                                    #
           |                                  :                                    #
         0 +----------------------------------------------------------------------->ms
           0                                                                     843

      Number of snapshots: 4
       Detailed snapshots: [2 (peak)]

      --------------------------------------------------------------------------------
        n       time(ms)         total(B)   useful-heap(B) extra-heap(B)    stacks(B)
      --------------------------------------------------------------------------------
        0              0                0                0             0            0
        1            407           72,712           72,704             8            0
        2            843           72,712           72,704             8            0
      99.99% (72,704B) (heap allocation functions) malloc/new/new[], --alloc-fns, etc.
      ->99.99% (72,704B) 0x48F2A99: ??? (in /usr/lib/x86_64-linux-gnu/libstdc++.so.6.0.28)
        ->99.99% (72,704B) 0x4011B89: call_init.part.0 (dl-init.c:72)
          ->99.99% (72,704B) 0x4011C90: call_init (dl-init.c:30)
            ->99.99% (72,704B) 0x4011C90: _dl_init (dl-init.c:119)
              ->99.99% (72,704B) 0x4001139: ??? (in /usr/lib/x86_64-linux-gnu/ld-2.31.so)
                ->99.99% (72,704B) 0x1: ???
                  ->99.99% (72,704B) 0x1FFF000176: ???
                    ->99.99% (72,704B) 0x1FFF00017F: ???

      --------------------------------------------------------------------------------
        n       time(ms)         total(B)   useful-heap(B) extra-heap(B)    stacks(B)
      --------------------------------------------------------------------------------
        3            843                0                0             0            0


      --------------------------------------------------------------------------------





Program 2: CPU Optimized Solver

    Simple maximum_collatz_sequence collatz conjecture sequence identifier optimized for cpu performance time using a vector caching procedure to store all recorded
    sequence lengths.

    This program will accept an upper limit value to which the solver will reach before identifying the maximum conjecture sequence length and entry value pair


Program Profile using Valgrind


  Memory usage evaluation carried out with Valrind, solving for a upper limit of 1 000 000

      --------------------------------------------------------------------------------
      Command:            ./cpu 1000000
      Massif arguments:   --time-unit=ms
      ms_print arguments: massif.out.3867
      --------------------------------------------------------------------------------


          MB
      7.702^                                                             ::::::::::#
           |                                                             :         #
           |                                                             :         #
           |                                                             :         #
           |                                                             :         #
           |                                                             :         #
           |                                                             :         #
           |                                                             :         #
           |                                                             :         #
           |                                                             :         #
           |                                                             :         #
           |                                                             :         #
           |                                                             :         #
           |                                                             :         #
           |                                                             :         #
           |                                                             :         #
           |                                                             :         #
           |                                                             :         #
           |                                                             :         #
           |                                                             :         #
         0 +----------------------------------------------------------------------->ms
           0                                                                     490

      Number of snapshots: 6
       Detailed snapshots: [3 (peak)]

      --------------------------------------------------------------------------------
        n       time(ms)         total(B)   useful-heap(B) extra-heap(B)    stacks(B)
      --------------------------------------------------------------------------------
        0              0                0                0             0            0
        1            402           72,712           72,704             8            0
        2            418        8,076,240        8,072,704         3,536            0
        3            486        8,076,240        8,072,704         3,536            0
      99.96% (8,072,704B) (heap allocation functions) malloc/new/new[], --alloc-fns, etc.
      ->99.06% (8,000,000B) 0x109CE1: __gnu_cxx::new_allocator<unsigned long>::allocate(unsigned long, void const*) (new_allocator.h:114)
      | ->99.06% (8,000,000B) 0x109C1B: std::allocator_traits<std::allocator<unsigned long> >::allocate(std::allocator<unsigned long>&, unsigned long) (alloc_traits.h:444)
      |   ->99.06% (8,000,000B) 0x109B5B: std::_Vector_base<unsigned long, std::allocator<unsigned long> >::_M_allocate(unsigned long) (stl_vector.h:343)
      |     ->99.06% (8,000,000B) 0x1099D6: std::_Vector_base<unsigned long, std::allocator<unsigned long> >::_M_create_storage(unsigned long) (stl_vector.h:358)
      |       ->99.06% (8,000,000B) 0x1097E8: std::_Vector_base<unsigned long, std::allocator<unsigned long> >::_Vector_base(unsigned long, std::allocator<unsigned long> const&) (stl_vector.h:302)
      |         ->99.06% (8,000,000B) 0x10960C: std::vector<unsigned long, std::allocator<unsigned long> >::vector(unsigned long, std::allocator<unsigned long> const&) (stl_vector.h:508)
      |           ->99.06% (8,000,000B) 0x109400: main (collatz_conjecture_CPU_optimized.cpp:124)
      |
      ->00.90% (72,704B) in 1+ places, all below ms_print's threshold (01.00%)

        --------------------------------------------------------------------------------
        n       time(ms)         total(B)   useful-heap(B) extra-heap(B)    stacks(B)
      --------------------------------------------------------------------------------
        4            486           72,712           72,704             8            0
        5            490                0                0             0            0


        Memory usage evaluation carried out with Valrind, solving for a upper limit of 5 000 000

      --------------------------------------------------------------------------------
      Command:            ./cpu 5000000
      Massif arguments:   --time-unit=ms
      ms_print arguments: massif.out.3871
      --------------------------------------------------------------------------------


          MB
      38.22^                                      :::::::::::::::::::::::::::::::::#
           |                                      :                                #
           |                                      :                                #
           |                                      :                                #
           |                                      :                                #
           |                                      :                                #
           |                                      :                                #
           |                                      :                                #
           |                                      :                                #
           |                                      :                                #
           |                                      :                                #
           |                                      :                                #
           |                                      :                                #
           |                                      :                                #
           |                                      :                                #
           |                                      :                                #
           |                                      :                                #
           |                                      :                                #
           |                                      :                                #
           |                                      :                                #
         0 +----------------------------------------------------------------------->ms
           0                                                                     808

      Number of snapshots: 6
       Detailed snapshots: [3 (peak)]

      --------------------------------------------------------------------------------
        n       time(ms)         total(B)   useful-heap(B) extra-heap(B)    stacks(B)
      --------------------------------------------------------------------------------
        0              0                0                0             0            0
        1            416           72,712           72,704             8            0
        2            430       40,074,192       40,072,704         1,488            0
        3            802       40,074,192       40,072,704         1,488            0
      100.00% (40,072,704B) (heap allocation functions) malloc/new/new[], --alloc-fns, etc.
      ->99.81% (40,000,000B) 0x109CE1: __gnu_cxx::new_allocator<unsigned long>::allocate(unsigned long, void const*) (new_allocator.h:114)
      | ->99.81% (40,000,000B) 0x109C1B: std::allocator_traits<std::allocator<unsigned long> >::allocate(std::allocator<unsigned long>&, unsigned long) (alloc_traits.h:444)
      |   ->99.81% (40,000,000B) 0x109B5B: std::_Vector_base<unsigned long, std::allocator<unsigned long> >::_M_allocate(unsigned long) (stl_vector.h:343)
      |     ->99.81% (40,000,000B) 0x1099D6: std::_Vector_base<unsigned long, std::allocator<unsigned long> >::_M_create_storage(unsigned long) (stl_vector.h:358)
      |       ->99.81% (40,000,000B) 0x1097E8: std::_Vector_base<unsigned long, std::allocator<unsigned long> >::_Vector_base(unsigned long, std::allocator<unsigned long> const&) (stl_vector.h:302)
      |         ->99.81% (40,000,000B) 0x10960C: std::vector<unsigned long, std::allocator<unsigned long> >::vector(unsigned long, std::allocator<unsigned long> const&) (stl_vector.h:508)
      |           ->99.81% (40,000,000B) 0x109400: main (collatz_conjecture_CPU_optimized.cpp:124)
      |
      ->00.18% (72,704B) in 1+ places, all below ms_print's threshold (01.00%)

      --------------------------------------------------------------------------------
        n       time(ms)         total(B)   useful-heap(B) extra-heap(B)    stacks(B)
      --------------------------------------------------------------------------------
        4            802           72,712           72,704             8            0
        5            808                0                0             0            0
