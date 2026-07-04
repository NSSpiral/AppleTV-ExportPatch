#ifndef _KERNEL_CRYPTO_H_
#define _KERNEL_CRYPTO_H_

#include "types.h"

/* -- crc -- */

#ifdef __cplusplus
extern "C" {
#endif

extern uint32_t crc32(uint32_t crc, const void *bufp, size_t len);

/* -- crypto -- */

extern int MD5Final();
extern int MD5Init();
extern int MD5Update();
extern int SHA1Final();
extern int SHA1Final_r();
extern int SHA1Init();
extern int SHA1Update();
extern int adler32();
extern int aes_decrypt_cbc();
extern int aes_decrypt_key();
extern int aes_decrypt_key128();
extern int aes_decrypt_key256();
extern int aes_encrypt_cbc();
extern int aes_encrypt_key();
extern int aes_encrypt_key128();
extern int aes_encrypt_key256();
extern int des_ecb_encrypt();
extern int des_ecb_key_sched();
extern int prng_factory_register();
extern int random();
extern int rc4_crypt();
extern int rc4_init();
extern int read_frandom();
extern int read_random();
extern int register_crypto_functions();
extern int sha1_hardware_hook();


#ifdef __cplusplus
}
#endif

#endif /* _KERNEL_CRYPTO_H_ */
