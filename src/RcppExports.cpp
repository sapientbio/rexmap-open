// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// value_map
std::map<int, std::vector<int> > value_map(std::vector<int> x);
RcppExport SEXP _rexmap_value_map(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<int> >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(value_map(x));
    return rcpp_result_gen;
END_RCPP
}
// partid_to_fastqid
std::map<int, std::vector<int> > partid_to_fastqid(std::vector<int> dada_map, std::vector<int> derep_map);
RcppExport SEXP _rexmap_partid_to_fastqid(SEXP dada_mapSEXP, SEXP derep_mapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<int> >::type dada_map(dada_mapSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type derep_map(derep_mapSEXP);
    rcpp_result_gen = Rcpp::wrap(partid_to_fastqid(dada_map, derep_map));
    return rcpp_result_gen;
END_RCPP
}
// consensus_sequence
std::string consensus_sequence(std::vector<std::string> seqs);
RcppExport SEXP _rexmap_consensus_sequence(SEXP seqsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type seqs(seqsSEXP);
    rcpp_result_gen = Rcpp::wrap(consensus_sequence(seqs));
    return rcpp_result_gen;
END_RCPP
}
// hamming
int hamming(std::string s1, std::string s2);
RcppExport SEXP _rexmap_hamming(SEXP s1SEXP, SEXP s2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type s1(s1SEXP);
    Rcpp::traits::input_parameter< std::string >::type s2(s2SEXP);
    rcpp_result_gen = Rcpp::wrap(hamming(s1, s2));
    return rcpp_result_gen;
END_RCPP
}
// compare_alignment
IntegerVector compare_alignment(std::string s1, std::string s2);
RcppExport SEXP _rexmap_compare_alignment(SEXP s1SEXP, SEXP s2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type s1(s1SEXP);
    Rcpp::traits::input_parameter< std::string >::type s2(s2SEXP);
    rcpp_result_gen = Rcpp::wrap(compare_alignment(s1, s2));
    return rcpp_result_gen;
END_RCPP
}
// find_best_scoring_overlap
std::unordered_map<std::string, std::vector<int>> find_best_scoring_overlap(std::vector<std::string>& sequences, std::vector<std::vector<int>> scoring_matrix, unsigned int gap_p);
RcppExport SEXP _rexmap_find_best_scoring_overlap(SEXP sequencesSEXP, SEXP scoring_matrixSEXP, SEXP gap_pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string>& >::type sequences(sequencesSEXP);
    Rcpp::traits::input_parameter< std::vector<std::vector<int>> >::type scoring_matrix(scoring_matrixSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type gap_p(gap_pSEXP);
    rcpp_result_gen = Rcpp::wrap(find_best_scoring_overlap(sequences, scoring_matrix, gap_p));
    return rcpp_result_gen;
END_RCPP
}
// align_seqs_and_quals
std::vector<std::unordered_map<std::string, char>> align_seqs_and_quals(std::vector<std::string>& sequences, std::vector<std::string>& qualities, int match, int mismatch, int gap_p);
RcppExport SEXP _rexmap_align_seqs_and_quals(SEXP sequencesSEXP, SEXP qualitiesSEXP, SEXP matchSEXP, SEXP mismatchSEXP, SEXP gap_pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string>& >::type sequences(sequencesSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string>& >::type qualities(qualitiesSEXP);
    Rcpp::traits::input_parameter< int >::type match(matchSEXP);
    Rcpp::traits::input_parameter< int >::type mismatch(mismatchSEXP);
    Rcpp::traits::input_parameter< int >::type gap_p(gap_pSEXP);
    rcpp_result_gen = Rcpp::wrap(align_seqs_and_quals(sequences, qualities, match, mismatch, gap_p));
    return rcpp_result_gen;
END_RCPP
}
// load_posterior
std::vector< std::vector<int> > load_posterior(std::string filename);
RcppExport SEXP _rexmap_load_posterior(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(load_posterior(filename));
    return rcpp_result_gen;
END_RCPP
}
// string_to_vector_str
std::vector<std::string> string_to_vector_str(std::string& str);
RcppExport SEXP _rexmap_string_to_vector_str(SEXP strSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string& >::type str(strSEXP);
    rcpp_result_gen = Rcpp::wrap(string_to_vector_str(str));
    return rcpp_result_gen;
END_RCPP
}
// string_to_vector_int
std::vector<int> string_to_vector_int(std::string& str);
RcppExport SEXP _rexmap_string_to_vector_int(SEXP strSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string& >::type str(strSEXP);
    rcpp_result_gen = Rcpp::wrap(string_to_vector_int(str));
    return rcpp_result_gen;
END_RCPP
}
// C_mergepairs
Rcpp::List C_mergepairs(std::string s1, std::string s2, std::string q1, std::string q2, std::string posterior_match_file, std::string posterior_mismatch_file, int match, int mismatch, int gap_p);
RcppExport SEXP _rexmap_C_mergepairs(SEXP s1SEXP, SEXP s2SEXP, SEXP q1SEXP, SEXP q2SEXP, SEXP posterior_match_fileSEXP, SEXP posterior_mismatch_fileSEXP, SEXP matchSEXP, SEXP mismatchSEXP, SEXP gap_pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type s1(s1SEXP);
    Rcpp::traits::input_parameter< std::string >::type s2(s2SEXP);
    Rcpp::traits::input_parameter< std::string >::type q1(q1SEXP);
    Rcpp::traits::input_parameter< std::string >::type q2(q2SEXP);
    Rcpp::traits::input_parameter< std::string >::type posterior_match_file(posterior_match_fileSEXP);
    Rcpp::traits::input_parameter< std::string >::type posterior_mismatch_file(posterior_mismatch_fileSEXP);
    Rcpp::traits::input_parameter< int >::type match(matchSEXP);
    Rcpp::traits::input_parameter< int >::type mismatch(mismatchSEXP);
    Rcpp::traits::input_parameter< int >::type gap_p(gap_pSEXP);
    rcpp_result_gen = Rcpp::wrap(C_mergepairs(s1, s2, q1, q2, posterior_match_file, posterior_mismatch_file, match, mismatch, gap_p));
    return rcpp_result_gen;
END_RCPP
}
// to_int
int to_int(char& nt);
RcppExport SEXP _rexmap_to_int(SEXP ntSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< char& >::type nt(ntSEXP);
    rcpp_result_gen = Rcpp::wrap(to_int(nt));
    return rcpp_result_gen;
END_RCPP
}
// create_scores
std::vector< std::vector<int> > create_scores(int match, int mismatch);
RcppExport SEXP _rexmap_create_scores(SEXP matchSEXP, SEXP mismatchSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type match(matchSEXP);
    Rcpp::traits::input_parameter< int >::type mismatch(mismatchSEXP);
    rcpp_result_gen = Rcpp::wrap(create_scores(match, mismatch));
    return rcpp_result_gen;
END_RCPP
}
// join_to_string
std::string join_to_string(std::vector<std::string> str_vector);
RcppExport SEXP _rexmap_join_to_string(SEXP str_vectorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type str_vector(str_vectorSEXP);
    rcpp_result_gen = Rcpp::wrap(join_to_string(str_vector));
    return rcpp_result_gen;
END_RCPP
}
// C_nwalign
Rcpp::CharacterVector C_nwalign(std::string s1, std::string s2, int match, int mismatch, int indel);
RcppExport SEXP _rexmap_C_nwalign(SEXP s1SEXP, SEXP s2SEXP, SEXP matchSEXP, SEXP mismatchSEXP, SEXP indelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type s1(s1SEXP);
    Rcpp::traits::input_parameter< std::string >::type s2(s2SEXP);
    Rcpp::traits::input_parameter< int >::type match(matchSEXP);
    Rcpp::traits::input_parameter< int >::type mismatch(mismatchSEXP);
    Rcpp::traits::input_parameter< int >::type indel(indelSEXP);
    rcpp_result_gen = Rcpp::wrap(C_nwalign(s1, s2, match, mismatch, indel));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rexmap_value_map", (DL_FUNC) &_rexmap_value_map, 1},
    {"_rexmap_partid_to_fastqid", (DL_FUNC) &_rexmap_partid_to_fastqid, 2},
    {"_rexmap_consensus_sequence", (DL_FUNC) &_rexmap_consensus_sequence, 1},
    {"_rexmap_hamming", (DL_FUNC) &_rexmap_hamming, 2},
    {"_rexmap_compare_alignment", (DL_FUNC) &_rexmap_compare_alignment, 2},
    {"_rexmap_find_best_scoring_overlap", (DL_FUNC) &_rexmap_find_best_scoring_overlap, 3},
    {"_rexmap_align_seqs_and_quals", (DL_FUNC) &_rexmap_align_seqs_and_quals, 5},
    {"_rexmap_load_posterior", (DL_FUNC) &_rexmap_load_posterior, 1},
    {"_rexmap_string_to_vector_str", (DL_FUNC) &_rexmap_string_to_vector_str, 1},
    {"_rexmap_string_to_vector_int", (DL_FUNC) &_rexmap_string_to_vector_int, 1},
    {"_rexmap_C_mergepairs", (DL_FUNC) &_rexmap_C_mergepairs, 9},
    {"_rexmap_to_int", (DL_FUNC) &_rexmap_to_int, 1},
    {"_rexmap_create_scores", (DL_FUNC) &_rexmap_create_scores, 2},
    {"_rexmap_join_to_string", (DL_FUNC) &_rexmap_join_to_string, 1},
    {"_rexmap_C_nwalign", (DL_FUNC) &_rexmap_C_nwalign, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_rexmap(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
