#Setup on Ubuntu 18.04
sudo apt update

#gem5 prerequisites
sudo apt install build-essential git m4 scons zlib1g zlib1g-dev libprotobuf-dev protobuf-compiler libprotoc-dev libgoogle-perftools-dev python3-dev python3-six python libboost-all-dev pkg-config

#certi prerequisites
sudo apt install cmake bison flex libxml2-dev

#omnet 5.0 prerequisites
sudo apt install openjdk-8-jdk openjdk-8-jre tcl-dev tk-dev qt4-qmake libqt4-dev libqt4-opengl-dev openmpi-bin libopenmpi-dev clang


#Clone the eProcessor COSSIM sub-parts
cd $HOME
git clone https://github.com/ntampouratzis/eProcessor.git
mv -f $HOME/COSSIM/cMcPAT/ $HOME/COSSIM/cgem5/McPat

# Installing cCERTI & Our SynchServer
cd $HOME/COSSIM/hla
mkdir $HOME/COSSIM/hla/certi-tools
cd $HOME/COSSIM/hla/certi
mkdir $HOME/COSSIM/hla/certi/build-certi
cd $HOME/COSSIM/hla/certi/build-certi
cmake -DCMAKE_INSTALL_PREFIX=$HOME/COSSIM/hla/certi-tools $CMAKE_FLAGS ../
make
make install

echo "#cCERTI exports" >> ~/.bashrc
echo "export CERTI_HOME=$HOME/COSSIM/hla/certi-tools" >> ~/.bashrc
echo "export CERTI_FOM_PATH=$HOME/COSSIM/hla/certi-tools/share/federations" >> ~/.bashrc
echo "export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$HOME/COSSIM/hla/certi-tools/lib" >> ~/.bashrc
echo "export DYLD_LIBRARY_PATH=$LD_LIBRARY_PATH:$HOME/COSSIM/hla/certi-tools/lib" >> ~/.bashrc
echo "export PATH=$HOME/COSSIM/hla/certi-tools/share/scripts:$PATH" >> ~/.bashrc
echo "export PATH=$HOME/COSSIM/hla/certi-tools/bin:$PATH" >> ~/.bashrc
echo "export CERTI_SOURCE_DIRECTORY=$HOME/COSSIM/hla/certi" >> ~/.bashrc
echo "export CERTI_BINARY_DIRECTORY=$HOME/COSSIM/hla/certi/build-certi" >> ~/.bashrc
echo "export CERTI_HOST=127.0.0.1

export CERTI_HOME=$HOME/COSSIM/hla/certi-tools
export CERTI_FOM_PATH=$HOME/COSSIM/hla/certi-tools/share/federations
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$HOME/COSSIM/hla/certi-tools/lib
export DYLD_LIBRARY_PATH=$LD_LIBRARY_PATH:$HOME/COSSIM/hla/certi-tools/lib
export PATH=$HOME/COSSIM/hla/certi-tools/share/scripts:$PATH
export PATH=$HOME/COSSIM/hla/certi-tools/bin:$PATH
export CERTI_SOURCE_DIRECTORY=$HOME/COSSIM/hla/certi
export CERTI_BINARY_DIRECTORY=$HOME/COSSIM/hla/certi/build-certi
export CERTI_HOST=127.0.0.1


cd $HOME/COSSIM/hla/certi/SynchServer
./build.sh
cp Federation.fed $HOME/COSSIM/hla/certi-tools/share/federations


# Installing cgem5
export GEM5=$HOME/COSSIM/cgem5
export M5_PATH=$HOME/COSSIM/kernels

echo "#GEM5 exports" >> ~/.bashrc
echo "export GEM5=$HOME/COSSIM/cgem5" >> ~/.bashrc
echo "export M5_PATH=$HOME/COSSIM/kernels" >> ~/.bashrc
cd $HOME/COSSIM/cgem5
source ~/.bashrc
/usr/bin/env python3 $(which scons) build/ARM/gem5.opt -j4
/usr/bin/env python3 $(which scons) build/RISCV/gem5.opt -j4


cd $HOME/COSSIM
#Download kernels from http://kition.mhl.tuc.gr:8000/f/519e93b58e/
#Untar the kernels file


# Installing cMcPat
cd $HOME/COSSIM/cgem5/McPat/mcpat
make all
cd $HOME/COSSIM/cgem5/McPat/Scripts
chmod +x GEM5ToMcPAT.py
chmod +x print_energy.py


# Installing cOMNET++
cd $HOME
tar xvfz omnetpp-5.0-src.tgz
cd omnetpp-5.0
export PATH=$PATH:$HOME/omnetpp-5.0/bin
export OMNETWP=$HOME/COSSIM/OMNETPP_COSSIM_workspace/OMNET_WORKSPACE

./configure && make

#cp -R $HOME/COSSIM/COSSIM_GUI/* $HOME/omnetpp-5.0/ide/dropins

mkdir $HOME/COSSIM/OMNETPP_COSSIM_workspace/OMNET_WORKSPACE/HLANode/simulations
echo "export PATH=$PATH:$HOME/omnetpp-5.0/bin" >> ~/.bashrc
echo "export OMNETWP=$HOME/COSSIM/OMNETPP_COSSIM_workspace/OMNET_WORKSPACE" >> ~/.bashrc
source ~/.bashrc

