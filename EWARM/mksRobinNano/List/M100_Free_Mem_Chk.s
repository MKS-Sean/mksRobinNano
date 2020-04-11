///////////////////////////////////////////////////////////////////////////////
//
// IAR ANSI C/C++ Compiler V7.10.1.6676/W32 for ARM       14/Feb/2020  17:05:33
// Copyright 1999-2014 IAR Systems AB.
//
//    Cpu mode     =  thumb
//    Endian       =  little
//    Source file  =  
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\Middlewares\Third_Party\Marlin\M100_Free_Mem_Chk.cpp
//    Command line =  
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\Middlewares\Third_Party\Marlin\M100_Free_Mem_Chk.cpp
//        -D USE_HAL_DRIVER -D STM32F103xE -D STM32F10X_HD -D USE_HAL_LIB -D
//        MKS_ROBIN_NANO -D TFT35 -lC
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM\mksRobinNano/List\
//        -lA
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM\mksRobinNano/List\
//        --diag_suppress Pa050 -o
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM\mksRobinNano/Obj\
//        --no_unroll --no_inline --no_tbaa --no_scheduling --debug
//        --endian=little --cpu=Cortex-M3 -e --char_is_signed --fpu=None
//        --dlib_config "C:\Program Files (x86)\IAR Systems\Embedded Workbench
//        7.0\arm\INC\c\DLib_Config_Full.h" -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../Inc\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../Src\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../Drivers/STM32F1xx_HAL_Driver/Inc\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../Middlewares/Third_Party/FatFs/src/drivers\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../Middlewares/ST/STM32_USB_Host_Library/Core/Inc\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../Middlewares/ST/STM32_USB_Host_Library/Class/MSC/Inc\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../Drivers/CMSIS/Device/ST/STM32F1xx/Include\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../Middlewares/Third_Party/FatFs/src\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../Drivers/CMSIS/Include\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../Drivers/BSP/variant\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../Drivers/BSP/Components/at24cxx\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../Drivers/BSP/Components/w25qxx\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../Drivers/BSP/Components/lcd\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../Drivers/STM32F10x_StdPeriph_Driver/inc\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../Drivers/libstmf4/include\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../Middlewares/arduino/stm32/cores/arduino\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../User/ui\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../User/ui/Multi_language\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM/../User/ui/QRENCODE\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM\..\Middlewares\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM\..\Middlewares\GUI\
//        -I
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM\..\Middlewares\Third_Party\Marlin\
//        -Om --eec++ -I "C:\Program Files (x86)\IAR Systems\Embedded Workbench
//        7.0\arm\CMSIS\Include\"
//    List file    =  
//        E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\EWARM\mksRobinNano/List\M100_Free_Mem_Chk.s
//
///////////////////////////////////////////////////////////////////////////////

        RTMODEL "__CPP_Language", "EC++"
        RTMODEL "__SystemLibrary", "DLib"
        RTMODEL "__dlib_file_descriptor", "1"
        AAPCS BASE,INTERWORK
        PRESERVE8
        REQUIRE8

        #define SHT_PROGBITS 0x1


        SECTION `.iar_vfe_header`:DATA:NOALLOC:NOROOT(2)
        SECTION_TYPE SHT_PROGBITS, 0
        DATA
        DC32 0

        SECTION __DLIB_PERTHREAD:DATA:REORDER:NOROOT(0)
        SECTION_TYPE SHT_PROGBITS, 0

        SECTION __DLIB_PERTHREAD_init:DATA:REORDER:NOROOT(0)
        SECTION_TYPE SHT_PROGBITS, 0

        END
// E:\code\Robin_Nano_SVN\branches\robin_nano35Դ��\robin_nano35_v1.0.4_source\Middlewares\Third_Party\Marlin\M100_Free_Mem_Chk.cpp
//    1 /**
//    2  * Marlin 3D Printer Firmware
//    3  * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
//    4  *
//    5  * Based on Sprinter and grbl.
//    6  * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
//    7  *
//    8  * This program is free software: you can redistribute it and/or modify
//    9  * it under the terms of the GNU General Public License as published by
//   10  * the Free Software Foundation, either version 3 of the License, or
//   11  * (at your option) any later version.
//   12  *
//   13  * This program is distributed in the hope that it will be useful,
//   14  * but WITHOUT ANY WARRANTY; without even the implied warranty of
//   15  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//   16  * GNU General Public License for more details.
//   17  *
//   18  * You should have received a copy of the GNU General Public License
//   19  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
//   20  *
//   21  */
//   22 
//   23 /**
//   24  * M100 Free Memory Watcher
//   25  *
//   26  * This code watches the free memory block between the bottom of the heap and the top of the stack.
//   27  * This memory block is initialized and watched via the M100 command.
//   28  *
//   29  * M100 I   Initializes the free memory block and prints vitals statistics about the area
//   30  *
//   31  * M100 F   Identifies how much of the free memory block remains free and unused. It also
//   32  *          detects and reports any corruption within the free memory block that may have
//   33  *          happened due to errant firmware.
//   34  *
//   35  * M100 D   Does a hex display of the free memory block along with a flag for any errant
//   36  *          data that does not match the expected value.
//   37  *
//   38  * M100 C x Corrupts x locations within the free memory block. This is useful to check the
//   39  *          correctness of the M100 F and M100 D commands.
//   40  *
//   41  * Also, there are two support functions that can be called from a developer's C code.
//   42  *
//   43  *    uint16_t check_for_free_memory_corruption(const char * const ptr);
//   44  *    void M100_dump_routine(const char * const title, const char *start, const char *end);
//   45  *
//   46  * Initial version by Roxy-3D
//   47  */
//   48 #define M100_FREE_MEMORY_DUMPER     // Enable for the `M110 D` Dump sub-command
//   49 #define M100_FREE_MEMORY_CORRUPTOR  // Enable for the `M100 C` Corrupt sub-command
//   50 
//   51 #include "MarlinConfig.h"
//   52 
//   53 #if ENABLED(M100_FREE_MEMORY_WATCHER)
//   54 
//   55 #define TEST_BYTE ((char) 0xE5)
//   56 
//   57 extern char command_queue[BUFSIZE][MAX_CMD_SIZE];
//   58 
//   59 extern char* __brkval;
//   60 extern size_t  __heap_start, __heap_end, __flp;
//   61 extern char __bss_end;
//   62 
//   63 #include "Marlin.h"
//   64 #include "gcode.h"
//   65 #include "hex_print_routines.h"
//   66 
//   67 //
//   68 // Utility functions
//   69 //
//   70 
//   71 #define END_OF_HEAP() (__brkval ? __brkval : &__bss_end)
//   72 int check_for_free_memory_corruption(const char * const title);
//   73 
//   74 // Location of a variable on its stack frame. Returns a value above
//   75 // the stack (once the function returns to the caller).
//   76 char* top_of_stack() {
//   77   char x;
//   78   return &x + 1; // x is pulled on return;
//   79 }
//   80 
//   81 // Count the number of test bytes at the specified location.
//   82 int16_t count_test_bytes(const char * const ptr) {
//   83   for (uint16_t i = 0; i < 32000; i++)
//   84     if (((char) ptr[i]) != TEST_BYTE)
//   85       return i - 1;
//   86 
//   87   return -1;
//   88 }
//   89 
//   90 //
//   91 // M100 sub-commands
//   92 //
//   93 
//   94 #if ENABLED(M100_FREE_MEMORY_DUMPER)
//   95   /**
//   96    * M100 D
//   97    *  Dump the free memory block from __brkval to the stack pointer.
//   98    *  malloc() eats memory from the start of the block and the stack grows
//   99    *  up from the bottom of the block. Solid test bytes indicate nothing has
//  100    *  used that memory yet. There should not be anything but test bytes within
//  101    *  the block. If so, it may indicate memory corruption due to a bad pointer.
//  102    *  Unexpected bytes are flagged in the right column.
//  103    */
//  104   void dump_free_memory(const char *ptr, const char *sp) {
//  105     //
//  106     // Start and end the dump on a nice 16 byte boundary
//  107     // (even though the values are not 16-byte aligned).
//  108     //
//  109     ptr = (char *)((uint16_t)ptr & 0xFFF0); // Align to 16-byte boundary
//  110     sp  = (char *)((uint16_t)sp  | 0x000F); // Align sp to the 15th byte (at or above sp)
//  111 
//  112     // Dump command main loop
//  113     while (ptr < sp) {
//  114       print_hex_word((uint16_t)ptr);      // Print the address
//  115       SERIAL_CHAR(':');
//  116       for (uint8_t i = 0; i < 16; i++) {  // and 16 data bytes
//  117         if (i == 8) SERIAL_CHAR('-');
//  118         print_hex_byte(ptr[i]);
//  119         SERIAL_CHAR(' ');
//  120       }
//  121       safe_delay(25);
//  122       SERIAL_CHAR('|');                   // Point out non test bytes
//  123       for (uint8_t i = 0; i < 16; i++) {
//  124         char ccc = (char)ptr[i]; // cast to char before automatically casting to char on assignment, in case the compiler is broken
//  125         if (&ptr[i] >= (const char*)command_queue && &ptr[i] < (const char*)(command_queue + sizeof(command_queue))) { // Print out ASCII in the command buffer area
//  126           if (!WITHIN(ccc, ' ', 0x7E)) ccc = ' ';
//  127         }
//  128         else { // If not in the command buffer area, flag bytes that don't match the test byte
//  129           ccc = (ccc == TEST_BYTE) ? ' ' : '?';
//  130         }
//  131         SERIAL_CHAR(ccc);
//  132       }
//  133       SERIAL_EOL();
//  134       ptr += 16;
//  135       safe_delay(25);
//  136       idle();
//  137     }
//  138   }
//  139 
//  140 void M100_dump_routine(const char * const title, const char *start, const char *end) {
//  141   SERIAL_ECHOLN(title);
//  142   //
//  143   // Round the start and end locations to produce full lines of output
//  144   //
//  145   start = (char*)((uint16_t) start & 0xFFF0);
//  146   end   = (char*)((uint16_t) end   | 0x000F);
//  147   dump_free_memory(start, end);
//  148 }
//  149 
//  150 #endif // M100_FREE_MEMORY_DUMPER
//  151 
//  152 /**
//  153  * M100 F
//  154  *  Return the number of free bytes in the memory pool,
//  155  *  with other vital statistics defining the pool.
//  156  */
//  157 void free_memory_pool_report(char * const ptr, const int16_t size) {
//  158   int16_t max_cnt = -1, block_cnt = 0;
//  159   char *max_addr = NULL;
//  160   // Find the longest block of test bytes in the buffer
//  161   for (int16_t i = 0; i < size; i++) {
//  162     char *addr = ptr + i;
//  163     if (*addr == TEST_BYTE) {
//  164       const int16_t j = count_test_bytes(addr);
//  165       if (j > 8) {
//  166         SERIAL_ECHOPAIR("Found ", j);
//  167         SERIAL_ECHOLNPAIR(" bytes free at ", hex_address(addr));
//  168         if (j > max_cnt) {
//  169           max_cnt  = j;
//  170           max_addr = addr;
//  171         }
//  172         i += j;
//  173         block_cnt++;
//  174       }
//  175     }
//  176   }
//  177   if (block_cnt > 1) {
//  178     SERIAL_ECHOLNPGM("\nMemory Corruption detected in free memory area.");
//  179     SERIAL_ECHOPAIR("\nLargest free block is ", max_cnt);
//  180     SERIAL_ECHOLNPAIR(" bytes at ", hex_address(max_addr));
//  181   }
//  182   SERIAL_ECHOLNPAIR("check_for_free_memory_corruption() = ", check_for_free_memory_corruption("M100 F "));
//  183 }
//  184 
//  185 #if ENABLED(M100_FREE_MEMORY_CORRUPTOR)
//  186   /**
//  187    * M100 C<num>
//  188    *  Corrupt <num> locations in the free memory pool and report the corrupt addresses.
//  189    *  This is useful to check the correctness of the M100 D and the M100 F commands.
//  190    */
//  191   void corrupt_free_memory(char *ptr, const uint16_t size) {
//  192     ptr += 8;
//  193     const uint16_t near_top = top_of_stack() - ptr - 250, // -250 to avoid interrupt activity that's altered the stack.
//  194                    j = near_top / (size + 1);
//  195 
//  196     SERIAL_ECHOLNPGM("Corrupting free memory block.\n");
//  197     for (uint16_t i = 1; i <= size; i++) {
//  198       char * const addr = ptr + i * j;
//  199       *addr = i;
//  200       SERIAL_ECHOPAIR("\nCorrupting address: ", hex_address(addr));
//  201     }
//  202     SERIAL_EOL();
//  203   }
//  204 #endif // M100_FREE_MEMORY_CORRUPTOR
//  205 
//  206 /**
//  207  * M100 I
//  208  *  Init memory for the M100 tests. (Automatically applied on the first M100.)
//  209  */
//  210 void init_free_memory(char *ptr, int16_t size) {
//  211   SERIAL_ECHOLNPGM("Initializing free memory block.\n\n");
//  212 
//  213   size -= 250;    // -250 to avoid interrupt activity that's altered the stack.
//  214   if (size < 0) {
//  215     SERIAL_ECHOLNPGM("Unable to initialize.\n");
//  216     return;
//  217   }
//  218 
//  219   ptr += 8;       // move a few bytes away from the heap just because we don't want
//  220                   // to be altering memory that close to it.
//  221   memset(ptr, TEST_BYTE, size);
//  222 
//  223   SERIAL_ECHO(size);
//  224   SERIAL_ECHOLNPGM(" bytes of memory initialized.\n");
//  225 
//  226   for (int16_t i = 0; i < size; i++) {
//  227     if (ptr[i] != TEST_BYTE) {
//  228       SERIAL_ECHOPAIR("? address : ", hex_address(ptr + i));
//  229       SERIAL_ECHOLNPAIR("=", hex_byte(ptr[i]));
//  230       SERIAL_EOL();
//  231     }
//  232   }
//  233 }
//  234 
//  235 /**
//  236  * M100: Free Memory Check
//  237  */
//  238 void gcode_M100() {
//  239   SERIAL_ECHOPAIR("\n__brkval : ", hex_address(__brkval));
//  240   SERIAL_ECHOPAIR("\n__bss_end : ", hex_address(&__bss_end));
//  241 
//  242   char *ptr = END_OF_HEAP(), *sp = top_of_stack();
//  243 
//  244   SERIAL_ECHOPAIR("\nstart of free space : ", hex_address(ptr));
//  245   SERIAL_ECHOLNPAIR("\nStack Pointer : ", hex_address(sp));
//  246 
//  247   // Always init on the first invocation of M100
//  248   static bool m100_not_initialized = true;
//  249   if (m100_not_initialized || parser.seen('I')) {
//  250     m100_not_initialized = false;
//  251     init_free_memory(ptr, sp - ptr);
//  252   }
//  253 
//  254   #if ENABLED(M100_FREE_MEMORY_DUMPER)
//  255     if (parser.seen('D'))
//  256       return dump_free_memory(ptr, sp);
//  257   #endif
//  258 
//  259   if (parser.seen('F'))
//  260     return free_memory_pool_report(ptr, sp - ptr);
//  261 
//  262   #if ENABLED(M100_FREE_MEMORY_CORRUPTOR)
//  263 
//  264     if (parser.seen('C'))
//  265       return corrupt_free_memory(ptr, parser.value_int());
//  266 
//  267   #endif
//  268 }
//  269 
//  270 int check_for_free_memory_corruption(const char * const title) {
//  271   SERIAL_ECHO(title);
//  272 
//  273   char *ptr = END_OF_HEAP(), *sp = top_of_stack();
//  274   int n = sp - ptr;
//  275 
//  276   SERIAL_ECHOPAIR("\nfmc() n=", n);
//  277   SERIAL_ECHOPAIR("\n&__brkval: ", hex_address(&__brkval));
//  278   SERIAL_ECHOPAIR("=",             hex_address(__brkval));
//  279   SERIAL_ECHOPAIR("\n__bss_end: ", hex_address(&__bss_end));
//  280   SERIAL_ECHOPAIR(" sp=",          hex_address(sp));
//  281 
//  282   if (sp < ptr)  {
//  283     SERIAL_ECHOPGM(" sp < Heap ");
//  284     // SET_INPUT_PULLUP(63);           // if the developer has a switch wired up to their controller board
//  285     // safe_delay(5);                  // this code can be enabled to pause the display as soon as the
//  286     // while ( READ(63))               // malfunction is detected.   It is currently defaulting to a switch
//  287     //   idle();                       // being on pin-63 which is unassigend and available on most controller
//  288     // safe_delay(20);                 // boards.
//  289     // while ( !READ(63))
//  290     //   idle();
//  291     safe_delay(20);
//  292     #ifdef M100_FREE_MEMORY_DUMPER
//  293       M100_dump_routine("   Memory corruption detected with sp<Heap\n", (char*)0x1B80, (char*)0x21FF);
//  294     #endif
//  295   }
//  296 
//  297   // Scan through the range looking for the biggest block of 0xE5's we can find
//  298   int block_cnt = 0;
//  299   for (int i = 0; i < n; i++) {
//  300     if (ptr[i] == TEST_BYTE) {
//  301       int16_t j = count_test_bytes(ptr + i);
//  302       if (j > 8) {
//  303         // SERIAL_ECHOPAIR("Found ", j);
//  304         // SERIAL_ECHOLNPAIR(" bytes free at ", hex_address(ptr + i));
//  305         i += j;
//  306         block_cnt++;
//  307         SERIAL_ECHOPAIR(" (", block_cnt);
//  308         SERIAL_ECHOPAIR(") found=", j);
//  309         SERIAL_ECHOPGM("   ");
//  310       }
//  311     }
//  312   }
//  313   SERIAL_ECHOPAIR("  block_found=", block_cnt);
//  314 
//  315   if (block_cnt != 1 || __brkval != 0x0000)
//  316     SERIAL_ECHOLNPGM("\nMemory Corruption detected in free memory area.");
//  317 
//  318   if (block_cnt == 0)       // Make sure the special case of no free blocks shows up as an
//  319     block_cnt = -1;         // error to the calling code!
//  320 
//  321   SERIAL_ECHOPGM(" return=");
//  322   if (block_cnt == 1) {
//  323     SERIAL_CHAR('0');       // if the block_cnt is 1, nothing has broken up the free memory
//  324     SERIAL_EOL();             // area and it is appropriate to say 'no corruption'.
//  325     return 0;
//  326   }
//  327   SERIAL_ECHOLNPGM("true");
//  328   return block_cnt;
//  329 }
//  330 
//  331 #endif // M100_FREE_MEMORY_WATCHER
//  332 
//  333 
// 
//
// 
//
//
//Errors: none
//Warnings: 2
