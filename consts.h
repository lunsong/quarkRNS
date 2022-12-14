/***************************************************************************
 * consts.h 
 *
 * This file contains definitions of constants used in the procedures.
 *
 **************************************************************************/
#if 0
#ifndef RES
#define RES 4
#endif

#if RES == 1
#define MDIV 41
#define SDIV 71
#elif RES == 2
#define MDIV 51
#define SDIV 101
#elif RES == 3
#define MDIV 65
#define SDIV 129
#elif RES == 4
#define MDIV 101
#define SDIV 201
#elif RES == 5
#define MDIV 151
#define SDIV 301
#elif RES == 6
#define MDIV 201
#define SDIV 401
#else
#define MDIV 301
#define SDIV 601
#endif
#endif

int SDIV;
double SMAX;

#define DM (1.0/(MDIV-1.0))          /* spacing in mu direction */ 
#define RDIV 900                     /* grid point in RK integration */ 
//#define SMAX 0.9999                  /* maximum value of s-coordinate */  
//#define DS (SMAX/(SDIV-1.0))         /* spacing in s-direction */
//#define LMAX 10                     /* max. term in Legendre poly. */
#define C 2.9979e10                  /* speed of light in vacuum */
#define G 6.6732e-8                  /* gravitational constant */ 
#define KAPPA (1.0e-15*C*C/G)        /* scaling factor */
#define KSCALE (KAPPA*G/(C*C*C*C))   /* another scaling factor */
#define MSUN 1.987e33                /* Mass of Sun */
#define SQ(x) ((x)*(x))              /* square macro */
#define MB 1.66e-24                  /* baryon mass */
#define RMIN 1.0e-15                 /* use approximate TOV equations when
                                        computing spherical star and r<RMIN */
#define UNUSED (-1.11e30)            /* Used in the Ridder zero-finder */ 
#ifndef PI
#define PI 3.1415926535              /* what else */
#endif

#define M_MAX 6         /* Maximum l=m mode considered */
#define BOUND 1         /* Excludes last grid point, since we set everything
                           to zero there */
#define MAXIT 30        /* Maximum number of iterations in rtsec_G */ 
#include <float.h>
#include <limits.h>


#ifndef DBL_EPSILON
#define DBL_EPSILON 1e-15
#endif
