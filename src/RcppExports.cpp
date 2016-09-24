// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_bbbcp_gibbs
List rcpp_bbbcp_gibbs(IntegerVector x, IntegerVector n, List prior, List control);
RcppExport SEXP binomialbcp_rcpp_bbbcp_gibbs(SEXP xSEXP, SEXP nSEXP, SEXP priorSEXP, SEXP controlSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type n(nSEXP);
    Rcpp::traits::input_parameter< List >::type prior(priorSEXP);
    Rcpp::traits::input_parameter< List >::type control(controlSEXP);
    __result = Rcpp::wrap(rcpp_bbbcp_gibbs(x, n, prior, control));
    return __result;
END_RCPP
}
