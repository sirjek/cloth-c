#ifndef CLOTH_H
#define CLOTH_H

#include <stdint.h>
#include "heap.h"
#include "gsl_rng.h"
#include "gsl_randist.h"


struct network_params{
  long n_nodes;
  long n_channels;
  int sigma_topology;
  long capacity_per_channel;
  double faulty_node_prob;
  unsigned int network_from_file;
  char nodes_filename[256];
  char channels_filename[256];
  char edges_filename[256];
};

struct payments_params{
  double payment_mean;
  long n_payments;
  double sigma_amount;
  unsigned int payments_from_file;
  char payments_filename[256];
};

struct simulation{
  uint64_t current_time; //milliseconds
  struct heap* events;
  gsl_rng* random_generator;
};

#endif
