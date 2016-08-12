// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "odbconnect_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// connect
connection_ptr connect(std::string connection_string);
RcppExport SEXP odbconnect_connect(SEXP connection_stringSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type connection_string(connection_stringSEXP);
    rcpp_result_gen = Rcpp::wrap(connect(connection_string));
    return rcpp_result_gen;
END_RCPP
}
// connect_info
std::string connect_info(connection_ptr p);
RcppExport SEXP odbconnect_connect_info(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< connection_ptr >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(connect_info(p));
    return rcpp_result_gen;
END_RCPP
}
// query
cursor_ptr query(connection_ptr p, std::string sql, std::size_t size);
RcppExport SEXP odbconnect_query(SEXP pSEXP, SEXP sqlSEXP, SEXP sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< connection_ptr >::type p(pSEXP);
    Rcpp::traits::input_parameter< std::string >::type sql(sqlSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type size(sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(query(p, sql, size));
    return rcpp_result_gen;
END_RCPP
}
// fetch
Rcpp::RObject fetch(cursor_ptr c);
RcppExport SEXP odbconnect_fetch(SEXP cSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< cursor_ptr >::type c(cSEXP);
    rcpp_result_gen = Rcpp::wrap(fetch(c));
    return rcpp_result_gen;
END_RCPP
}
// column_info
void column_info(cursor_ptr c);
RcppExport SEXP odbconnect_column_info(SEXP cSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< cursor_ptr >::type c(cSEXP);
    column_info(c);
    return R_NilValue;
END_RCPP
}
// has_completed
bool has_completed(cursor_ptr c);
RcppExport SEXP odbconnect_has_completed(SEXP cSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< cursor_ptr >::type c(cSEXP);
    rcpp_result_gen = Rcpp::wrap(has_completed(c));
    return rcpp_result_gen;
END_RCPP
}
// get_tables
Rcpp::RObject get_tables(connection_ptr p);
RcppExport SEXP odbconnect_get_tables(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< connection_ptr >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(get_tables(p));
    return rcpp_result_gen;
END_RCPP
}
// result_release
void result_release(cursor_ptr c);
RcppExport SEXP odbconnect_result_release(SEXP cSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< cursor_ptr >::type c(cSEXP);
    result_release(c);
    return R_NilValue;
END_RCPP
}
// result_active
bool result_active(cursor_ptr c);
RcppExport SEXP odbconnect_result_active(SEXP cSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< cursor_ptr >::type c(cSEXP);
    rcpp_result_gen = Rcpp::wrap(result_active(c));
    return rcpp_result_gen;
END_RCPP
}
// statement_create
statement_ptr statement_create(connection_ptr con, std::string sql);
RcppExport SEXP odbconnect_statement_create(SEXP conSEXP, SEXP sqlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< connection_ptr >::type con(conSEXP);
    Rcpp::traits::input_parameter< std::string >::type sql(sqlSEXP);
    rcpp_result_gen = Rcpp::wrap(statement_create(con, sql));
    return rcpp_result_gen;
END_RCPP
}
// row_count
int row_count(statement_ptr rs);
RcppExport SEXP odbconnect_row_count(SEXP rsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< statement_ptr >::type rs(rsSEXP);
    rcpp_result_gen = Rcpp::wrap(row_count(rs));
    return rcpp_result_gen;
END_RCPP
}