// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// intersectSorted
arma::uvec intersectSorted(const arma::uvec& vec1, const arma::uvec& vec2);
RcppExport SEXP WCM_intersectSorted(SEXP vec1SEXP, SEXP vec2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::uvec& >::type vec1(vec1SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type vec2(vec2SEXP);
    rcpp_result_gen = Rcpp::wrap(intersectSorted(vec1, vec2));
    return rcpp_result_gen;
END_RCPP
}
// unionSorted
arma::uvec unionSorted(const arma::uvec& vec1, const arma::uvec& vec2);
RcppExport SEXP WCM_unionSorted(SEXP vec1SEXP, SEXP vec2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::uvec& >::type vec1(vec1SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type vec2(vec2SEXP);
    rcpp_result_gen = Rcpp::wrap(unionSorted(vec1, vec2));
    return rcpp_result_gen;
END_RCPP
}
// setDiffSorted
arma::uvec setDiffSorted(const arma::uvec& vec1, const arma::uvec& vec2);
RcppExport SEXP WCM_setDiffSorted(SEXP vec1SEXP, SEXP vec2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::uvec& >::type vec1(vec1SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type vec2(vec2SEXP);
    rcpp_result_gen = Rcpp::wrap(setDiffSorted(vec1, vec2));
    return rcpp_result_gen;
END_RCPP
}
// complementSorted
arma::uvec complementSorted(const arma::uvec& inds, int maxInd);
RcppExport SEXP WCM_complementSorted(SEXP indsSEXP, SEXP maxIndSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::uvec& >::type inds(indsSEXP);
    Rcpp::traits::input_parameter< int >::type maxInd(maxIndSEXP);
    rcpp_result_gen = Rcpp::wrap(complementSorted(inds, maxInd));
    return rcpp_result_gen;
END_RCPP
}
// intToUVec
arma::uvec intToUVec(unsigned int uint, int length);
RcppExport SEXP WCM_intToUVec(SEXP uintSEXP, SEXP lengthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type uint(uintSEXP);
    Rcpp::traits::input_parameter< int >::type length(lengthSEXP);
    rcpp_result_gen = Rcpp::wrap(intToUVec(uint, length));
    return rcpp_result_gen;
END_RCPP
}
// zeroOneVecToInt
int zeroOneVecToInt(const arma::uvec& zeroOneVec);
RcppExport SEXP WCM_zeroOneVecToInt(SEXP zeroOneVecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::uvec& >::type zeroOneVec(zeroOneVecSEXP);
    rcpp_result_gen = Rcpp::wrap(zeroOneVecToInt(zeroOneVec));
    return rcpp_result_gen;
END_RCPP
}
// intPow
unsigned int intPow(int base, int exponent);
RcppExport SEXP WCM_intPow(SEXP baseSEXP, SEXP exponentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type base(baseSEXP);
    Rcpp::traits::input_parameter< int >::type exponent(exponentSEXP);
    rcpp_result_gen = Rcpp::wrap(intPow(base, exponent));
    return rcpp_result_gen;
END_RCPP
}
// permutations
arma::umat permutations(int n);
RcppExport SEXP WCM_permutations(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(permutations(n));
    return rcpp_result_gen;
END_RCPP
}
// orderStats
arma::mat orderStats(arma::mat M);
RcppExport SEXP WCM_orderStats(SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(orderStats(M));
    return rcpp_result_gen;
END_RCPP
}
// ism
double ism(const arma::mat& X, const arma::mat& Y, const arma::uvec& xInds0, const arma::uvec& xInds1, const arma::uvec& yInds0, const arma::uvec& yInds1);
RcppExport SEXP WCM_ism(SEXP XSEXP, SEXP YSEXP, SEXP xInds0SEXP, SEXP xInds1SEXP, SEXP yInds0SEXP, SEXP yInds1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type xInds0(xInds0SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type xInds1(xInds1SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type yInds0(yInds0SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type yInds1(yInds1SEXP);
    rcpp_result_gen = Rcpp::wrap(ism(X, Y, xInds0, xInds1, yInds0, yInds1));
    return rcpp_result_gen;
END_RCPP
}
// ismNaive
double ismNaive(const arma::mat& X, const arma::mat& Y, const arma::uvec& xInds0, const arma::uvec& xInds1, const arma::uvec& yInds0, const arma::uvec& yInds1);
RcppExport SEXP WCM_ismNaive(SEXP XSEXP, SEXP YSEXP, SEXP xInds0SEXP, SEXP xInds1SEXP, SEXP yInds0SEXP, SEXP yInds1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type xInds0(xInds0SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type xInds1(xInds1SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type yInds0(yInds0SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type yInds1(yInds1SEXP);
    rcpp_result_gen = Rcpp::wrap(ismNaive(X, Y, xInds0, xInds1, yInds0, yInds1));
    return rcpp_result_gen;
END_RCPP
}
// ismNaiveApprox
double ismNaiveApprox(const arma::mat& X, const arma::mat& Y, const arma::uvec& xInds0, const arma::uvec& xInds1, const arma::uvec& yInds0, const arma::uvec& yInds1, int sims);
RcppExport SEXP WCM_ismNaiveApprox(SEXP XSEXP, SEXP YSEXP, SEXP xInds0SEXP, SEXP xInds1SEXP, SEXP yInds0SEXP, SEXP yInds1SEXP, SEXP simsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type xInds0(xInds0SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type xInds1(xInds1SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type yInds0(yInds0SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type yInds1(yInds1SEXP);
    Rcpp::traits::input_parameter< int >::type sims(simsSEXP);
    rcpp_result_gen = Rcpp::wrap(ismNaiveApprox(X, Y, xInds0, xInds1, yInds0, yInds1, sims));
    return rcpp_result_gen;
END_RCPP
}
// kendallsTauNaive
double kendallsTauNaive(const arma::mat& X, const arma::mat& Y);
RcppExport SEXP WCM_kendallsTauNaive(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(kendallsTauNaive(X, Y));
    return rcpp_result_gen;
END_RCPP
}
// kendallsTauNaiveApprox
double kendallsTauNaiveApprox(const arma::mat& X, const arma::mat& Y, int sims);
RcppExport SEXP WCM_kendallsTauNaiveApprox(SEXP XSEXP, SEXP YSEXP, SEXP simsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< int >::type sims(simsSEXP);
    rcpp_result_gen = Rcpp::wrap(kendallsTauNaiveApprox(X, Y, sims));
    return rcpp_result_gen;
END_RCPP
}
// spearmansRhoNaive
double spearmansRhoNaive(const arma::mat& X, const arma::mat& Y);
RcppExport SEXP WCM_spearmansRhoNaive(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(spearmansRhoNaive(X, Y));
    return rcpp_result_gen;
END_RCPP
}
// spearmansRhoNaiveApprox
double spearmansRhoNaiveApprox(const arma::mat& X, const arma::mat& Y, int sims);
RcppExport SEXP WCM_spearmansRhoNaiveApprox(SEXP XSEXP, SEXP YSEXP, SEXP simsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< int >::type sims(simsSEXP);
    rcpp_result_gen = Rcpp::wrap(spearmansRhoNaiveApprox(X, Y, sims));
    return rcpp_result_gen;
END_RCPP
}