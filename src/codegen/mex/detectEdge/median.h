/*
 * median.h
 *
 * Code generation for function 'median'
 *
 */

#ifndef MEDIAN_H
#define MEDIAN_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "omp.h"
#include "detectEdge_types.h"

/* Function Declarations */
extern real_T b_median(const emlrtStack *sp, const emxArray_real_T *x);

#ifdef __WATCOMC__

#pragma aux b_median value [8087];

#endif

extern void median(const emlrtStack *sp, const emxArray_real_T *x,
                   emxArray_real_T *y);

#endif

/* End of code generation (median.h) */
