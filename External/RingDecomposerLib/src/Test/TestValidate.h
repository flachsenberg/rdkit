/*
 * This file is part of the RingDecomposerLib, licensed
 * under BSD New license (see LICENSE in the root directory).
 * Copyright (c) 2016
 * University of Hamburg, ZBH - Center for Bioinformatics
 * Niek Andresen, Florian Flachsenberg, Matthias Rarey
 * 
 * Please cite:
 * 
 * Kolodzik, A.; Urbaczek, S.; Rarey, M.
 * Unique Ring Families: A Chemically Meaningful Description
 * of Molecular Ring Topologies.
 * J. Chem. Inf. Model., 2012, 52, pp 2013-2021
 * 
 * Flachsenberg, F.; Andresen, N.; Rarey, M.
 * RingDecomposerLib: An Open-Source Implementation of
 * Unique Ring Families and other Cycle Bases.
 * SUBMITTED
 */

#ifndef TEST_TESTVALIDATE_H
#define TEST_TESTVALIDATE_H

#include "RDLdimacs.h"
#include "RingDecomposerLib.h"

void RDL_validate(RDL_data* URFdata, RDL_DimacsGraph* dimacs_graph, int timeout,
                  int* urf_result, int* basis_result);


#endif
