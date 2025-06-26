// This file is part of EestiBSD ( eestibsd.github.io )
/*!
Copyright(c) 2025, The EestiBSD Project
*/
// Written by DiabloBlanco ( https://github.com/diabloblanko :: https://codeberg.org/diabloblanco)
#include <stdio.h>
#include "eestibsd-version.h"
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#define VERSION 1
#define WRITTEN_FOR "1 Keila"
void version() {
    printf("EestiBSD-version" VERSION "Written by Diabloblanco for EestiBSD" WRITTEN_FOR "\n"); }
void gethelp() {
    printf(
        "Eestibsd-version usage:\n"
//        "NOTE:: E, for example means that in version name word EestiBSD is included. Same for C(codename(Keila, fex)), V(version(1, fex)) and B(build(TEST, fex))\n"
        "-f      :: Full(default)    \n"
        "-c      :: Codename        \n"
        "-v      :: EestiBSD Version\n"
        "-n      :: Like -f, but without build\n"
        "-e      :: Eestibsd-version version"); 
int main(int argc, char** argv) {
    int c;
    while ((c = getopt (argc, argv, "ehfcvn")) != -1)
        switch(c) {
            case 'e':
                 version();
                 break;
                
            case 'h':
                gethelp();
                break;
            case 'f':
                fullv(); break;
            case 'c':
                codename(); break;
            case 'v':
                eversion(); break;
            case 'n':
                noversion(); break;
             case '?':
                if (optopt == 'b') {
                      fprintf(stderr, "Requires an argument.\n");
                      }
 
                else if (isprint (optopt))
                      fprintf (stderr, "Unknown option `-%c'.\n", optopt);
                else
                      fprintf (stderr,
                     "Unknown option character `\\x%x'.\n",
                     optopt);
                    return 1;
          default:
             fullv(); }

}