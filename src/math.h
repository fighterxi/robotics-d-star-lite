/**
 * Math.
 *
 * @package		DStarLite
 * @author		Aaron Zampaglione <azampagl@gmail.com>
 * @copyright	Copyright (C) 2011 Aaron Zampaglione
 * @license		MIT
 */
#ifndef DSTARLITE_MATH_H
#define DSTARLITE_MATH_H

//#include <math.h>
//#include <float.h>
#include <cmath>
#include <cfloat>

namespace DStarLite
{
	class Math
	{
		public:

			/*
			 * @var  double  INFINITY
			 */
			static const double INFINITY;

			/*
			 * @var  double  PI
			 */
			static const double PI;

			/*
			 * @var  double  SQRT2
			 */
			static const double SQRT2;

			/**
			 * Determines if two doubles are close based on a precision.
			 *
			 * @param   double              first double
			 * @param   double              second duble
			 * @param   double [optional]   precision
			 * @return  bool
			 */
			static bool close(double a, double b, double precision = 0.00001);

			/**
			 * Convert degrees to radians.
			 *
			 * @param   double   degrees
			 * @return  double   radians
			 */
			static double deg2rad(double degrees);

			/**
			 * Convert degrees to a signed degree (-180 < degrees <= 180)
			 *
			 * @param   double   degrees
			 * @return  double   degrees
			 */
			static double deg2signed(double degrees);

			/**
			 * Convert radians to degrees.
			 *
			 * @param   double   radians
			 * @return  double   degrees
			 */
			static double rad2deg(double radians);

			/**
			 * Convert radians to a signed radians value (-PI < degrees <= PI)
			 *
			 * @param   double   radians
			 * @return  double   radians
			 */
			static double rad2signed(double radians);
	};
};


#endif // DSTARLITE_MATH_H