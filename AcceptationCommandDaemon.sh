#!/bin/bash

# ...

# before installing Bitcuty coin CryptoNote Blockchain
# obtain a response from the user
# ...

echo "Congratulations you are about to install Bitcuty Blockchain CryptoNote by Hashing-b Financial Society Department Blockchain, this installation includes several packages as libraries of addendum extensions, a compiler and Bitcuty Blockchain, the installation requires only your authorization for the addition. BCUTY file to your host system, The Bitcuty package includes a mega super master boost called Bitcuty-supercharger-turbos-d which will certainly increase the execution speed of your system so your daemon's name will be changed to cryptonoted, It is also probably have an upgrade of your gpu and cpu drivers to increase overall productivity, Of course Bitcuty Blockchain offers you the best available. For more information go to github.com/BLockChainsB/Bitcuty/Infos/"Informations ", Please note that there is included in this package everything you need to complete the installation and very easily and automatically, in a specific order that increases the chances of installation success by almost 100%. Finally do you agree to be part of the Bitcuty H-B CryptoNote team?
? [y,n]"
read input 

# did we get an input value?
if [ "$input" == "" ]; then

   echo "Nothing was entered by the user"

# was it a y or a yes?
elif [[ "$input" == "y" ]] || [[ "$input" == "yes" ]]; then

   echo "Positive response: $input"

# treat anything else as a negative response
else

   echo "negative response: $input"

fi
