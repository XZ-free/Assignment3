#include <iostream>
#include <fstream>
#include <sstream>
#include "particle.h"

// PL4/particle.cxx
// An example using a class 
// Caterina Doglioni and Niels Walet, last updated 09/01/2023

void particle::print_data()
{
  std::cout.precision(3); // 2 significant figures
  std::cout<<"Particle: [type,m,p,E] = ["<<type<<","<< mass
	   <<","<<momentum<<","<<energy<<"]"<<std::endl;
  return;
}