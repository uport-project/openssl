#!/bin/bash

# Based on:
# https://gist.github.com/tmiz/1441111
# https://github.com/st3fan/ios-openssl/blob/master/build.sh

# Update the version below before running this script.  Check at https://www.openssl.org/source/) which versions are
# available.
OPENSSL_VERSION="1.0.1g"

# Download and unzip new version.
curl -O https://www.openssl.org/source/openssl-$OPENSSL_VERSION.tar.gz
tar -xvzf openssl-$OPENSSL_VERSION.tar.gz

# Configure for iOS.
cd "openssl-${OPENSSL_VERSION}"
./Configure BSD-generic32 &> "../openssl-${OPENSSL_VERSION}-${ARCH}.log"
perl -i -pe 's|static volatile sig_atomic_t intr_signal|static volatile int intr_signal|' crypto/ui/ui_openssl.c
cd ..

# Delete old version.
#rm -rf openssl/include
#rm -rf openssl/src/crypto

# Move new version into place.
#mv openssl-$OPENSSL_VERSION/include openssl
#mv openssl-$OPENSSL_VERSION/crypto openssl/src
