
if [  -d "./build" ]; then
  rm -R -f build
fi

mkdir build

cd build

cmake ..
make


cd test/

./runUnitTests
