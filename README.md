# Introduction

Encrypt and decrypt PGP messages within an SGX enclave. Even if the OS is compromised, your message remains secure.


# Trusted I/O

Presupposes a trusted I/O path, that is a trusted channel to input (keyboard) and output (terminal).
SGX does not currently support trusted I/O devices.
**For now, input/output is therefor done through insecure channels.**

# Setup

- `git submodule init; git submodule update`
- import `sgx-gpg.sln` into visual studio
