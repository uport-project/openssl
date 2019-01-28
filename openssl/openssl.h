//
//  openssl.h
//  openssl
//
//  Created by Cornelis van der Bent on 23/01/2019.
//  Copyright © 2019 ConsenSys. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for openssl.
FOUNDATION_EXPORT double opensslVersionNumber;

//! Project version string for openssl.
FOUNDATION_EXPORT const unsigned char opensslVersionString[];

#define OPENSSL_NO_SEED
#define OPENSSL_NO_IDEA
#define OPENSSL_NO_RC2
#define OPENSSL_NO_RC4
#define OPENSSL_NO_DES
#define OPENSSL_NO_SM4
#define OPENSSL_NO_BF
#define OPENSSL_NO_CHACHA

#import <openssl/opensslconf.h>
#import <openssl/bn.h>
#import <openssl/ec.h>
#import <openssl/obj_mac.h>
//#import <openssl/e_os2.h>
#import <openssl/ossl_typ.h>
#import <openssl/crypto.h>
#import <openssl/safestack.h>
#import <openssl/opensslv.h>
#import <openssl/cryptoerr.h>
#import <openssl/symhacks.h>
#import <openssl/bnerr.h>
#import <openssl/asn1.h>
#import <openssl/asn1err.h>
#import <openssl/ecerr.h>
#import <openssl/evp.h>
#import <openssl/bio.h>
#import <openssl/bioerr.h>
#import <openssl/evperr.h>
#import <openssl/objects.h>
#import <openssl/objectserr.h>
#import <openssl/rand.h>
#import <openssl/randerr.h>
#import <openssl/ripemd.h>
#import <openssl/stack.h>
