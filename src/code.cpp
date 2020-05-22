#include <Rcpp.h>
#include "PnPoly/PnPoly.hpp"

using namespace Rcpp;
using namespace wn;
Rcpp::IntegerVector pqr0();

// [[Rcpp::export]]
Rcpp::IntegerVector pqr0() {

  Point p;
  Point q;
  Point r;
  p = {0, 0};
  q = {1, 0};
  r = {1, 1};

  int ans;

  ans = isLeft(p, q, r);
  IntegerVector out = IntegerVector(1);
  out[0] = ans;
  return out;
}
