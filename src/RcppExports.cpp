// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/ALSroads.h"
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// fsd
double fsd(SEXP x);
RcppExport SEXP _ALSroads_fsd(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(fsd(x));
    return rcpp_result_gen;
END_RCPP
}
// ffsd
double ffsd(SEXP x);
RcppExport SEXP _ALSroads_ffsd(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(ffsd(x));
    return rcpp_result_gen;
END_RCPP
}
// quadtree
Rcpp::XPtr<lidR::QuadTree> quadtree(S4 las);
RcppExport SEXP _ALSroads_quadtree(SEXP lasSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    rcpp_result_gen = Rcpp::wrap(quadtree(las));
    return rcpp_result_gen;
END_RCPP
}
// filter_orectangle_with_index
IntegerVector filter_orectangle_with_index(SEXP xptr, double xmin, double ymin, double xmax, double ymax, double angle);
RcppExport SEXP _ALSroads_filter_orectangle_with_index(SEXP xptrSEXP, SEXP xminSEXP, SEXP yminSEXP, SEXP xmaxSEXP, SEXP ymaxSEXP, SEXP angleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type xptr(xptrSEXP);
    Rcpp::traits::input_parameter< double >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< double >::type ymin(yminSEXP);
    Rcpp::traits::input_parameter< double >::type xmax(xmaxSEXP);
    Rcpp::traits::input_parameter< double >::type ymax(ymaxSEXP);
    Rcpp::traits::input_parameter< double >::type angle(angleSEXP);
    rcpp_result_gen = Rcpp::wrap(filter_orectangle_with_index(xptr, xmin, ymin, xmax, ymax, angle));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ALSroads_fsd", (DL_FUNC) &_ALSroads_fsd, 1},
    {"_ALSroads_ffsd", (DL_FUNC) &_ALSroads_ffsd, 1},
    {"_ALSroads_quadtree", (DL_FUNC) &_ALSroads_quadtree, 1},
    {"_ALSroads_filter_orectangle_with_index", (DL_FUNC) &_ALSroads_filter_orectangle_with_index, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_ALSroads(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
