// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_ECctmc_RCPPEXPORTS_H_GEN_
#define RCPP_ECctmc_RCPPEXPORTS_H_GEN_

#include <RcppArmadillo.h>
#include <Rcpp.h>

namespace ECctmc {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("ECctmc", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("ECctmc", "ECctmc_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in ECctmc");
            }
        }
    }

    inline arma::mat sample_path_mr(const int a, const int b, const double t0, const double t1, const Rcpp::NumericMatrix& Q) {
        typedef SEXP(*Ptr_sample_path_mr)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_sample_path_mr p_sample_path_mr = NULL;
        if (p_sample_path_mr == NULL) {
            validateSignature("arma::mat(*sample_path_mr)(const int,const int,const double,const double,const Rcpp::NumericMatrix&)");
            p_sample_path_mr = (Ptr_sample_path_mr)R_GetCCallable("ECctmc", "ECctmc_sample_path_mr");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_sample_path_mr(Rcpp::wrap(a), Rcpp::wrap(b), Rcpp::wrap(t0), Rcpp::wrap(t1), Rcpp::wrap(Q));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::mat >(rcpp_result_gen);
    }

    inline arma::mat sample_path_unif(const int a, const int b, const double t0, const double t1, const arma::mat& Q) {
        typedef SEXP(*Ptr_sample_path_unif)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_sample_path_unif p_sample_path_unif = NULL;
        if (p_sample_path_unif == NULL) {
            validateSignature("arma::mat(*sample_path_unif)(const int,const int,const double,const double,const arma::mat&)");
            p_sample_path_unif = (Ptr_sample_path_unif)R_GetCCallable("ECctmc", "ECctmc_sample_path_unif");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_sample_path_unif(Rcpp::wrap(a), Rcpp::wrap(b), Rcpp::wrap(t0), Rcpp::wrap(t1), Rcpp::wrap(Q));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::mat >(rcpp_result_gen);
    }

    inline arma::mat sample_path_unif2(const int a, const int b, const double t0, const double t1, const arma::mat& Q, const arma::vec& eigen_vals, const arma::mat& eigen_vecs, const arma::mat& inverse_vecs) {
        typedef SEXP(*Ptr_sample_path_unif2)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_sample_path_unif2 p_sample_path_unif2 = NULL;
        if (p_sample_path_unif2 == NULL) {
            validateSignature("arma::mat(*sample_path_unif2)(const int,const int,const double,const double,const arma::mat&,const arma::vec&,const arma::mat&,const arma::mat&)");
            p_sample_path_unif2 = (Ptr_sample_path_unif2)R_GetCCallable("ECctmc", "ECctmc_sample_path_unif2");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_sample_path_unif2(Rcpp::wrap(a), Rcpp::wrap(b), Rcpp::wrap(t0), Rcpp::wrap(t1), Rcpp::wrap(Q), Rcpp::wrap(eigen_vals), Rcpp::wrap(eigen_vecs), Rcpp::wrap(inverse_vecs));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::mat >(rcpp_result_gen);
    }

    inline arma::mat sample_path_unif3(const int a, const int b, const double t0, const double t1, const arma::mat& Q, const arma::mat& P) {
        typedef SEXP(*Ptr_sample_path_unif3)(SEXP,SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_sample_path_unif3 p_sample_path_unif3 = NULL;
        if (p_sample_path_unif3 == NULL) {
            validateSignature("arma::mat(*sample_path_unif3)(const int,const int,const double,const double,const arma::mat&,const arma::mat&)");
            p_sample_path_unif3 = (Ptr_sample_path_unif3)R_GetCCallable("ECctmc", "ECctmc_sample_path_unif3");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_sample_path_unif3(Rcpp::wrap(a), Rcpp::wrap(b), Rcpp::wrap(t0), Rcpp::wrap(t1), Rcpp::wrap(Q), Rcpp::wrap(P));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::mat >(rcpp_result_gen);
    }

    inline arma::mat comp_expmat(const arma::mat& Q) {
        typedef SEXP(*Ptr_comp_expmat)(SEXP);
        static Ptr_comp_expmat p_comp_expmat = NULL;
        if (p_comp_expmat == NULL) {
            validateSignature("arma::mat(*comp_expmat)(const arma::mat&)");
            p_comp_expmat = (Ptr_comp_expmat)R_GetCCallable("ECctmc", "ECctmc_comp_expmat");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_comp_expmat(Rcpp::wrap(Q));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::mat >(rcpp_result_gen);
    }

}

#endif // RCPP_ECctmc_RCPPEXPORTS_H_GEN_
