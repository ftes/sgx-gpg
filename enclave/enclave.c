#include <sgx_trts.h>

#include <sgx_lib_t_debug.h>

#include "enclave_t.h"

void test_ecall() {
  log_msg("ECALL successful");
}