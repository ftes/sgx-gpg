#include <tchar.h>

#include <sgx_urts.h>

#include <sgx_lib_u_util.h>

#include "enclave_u.h"

#define ENCLAVE_DLL_FILE _T("enclave.signed.dll")

void main() {
  sgx_enclave_id_t eid;

  launch_enclave(ENCLAVE_DLL_FILE, &eid);

  test_ecall(eid);

  destroy_enclave(eid);
}