#
# Copyright 2011-2015 Jeff Bush
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#


JAVAC := $(shell which javac)

all:
	cd libs/libc && make
	cd libs/librender && make
	cd libs/libos && make
	cd libs/compiler-rt && make
	cd bootrom && make
	cd apps/mandelbrot && make
	cd apps/plasma && make
	cd apps/quakeview && make
	cd apps/rotozoom && make
	cd apps/sceneview && make
	cd benchmarks/hash && make
	cd benchmarks/membench && make
	cd kernel && make

clean:
	cd libs/libc && make clean
	cd libs/librender && make clean
	cd libs/libos && make clean
	cd libs/compiler-rt && make clean
	cd bootrom && make clean
	cd apps/mandelbrot && make clean
	cd apps/plasma && make clean
	cd apps/quakeview && make clean
	cd apps/rotozoom && make clean
	cd apps/sceneview && make clean
	cd benchmarks/hash && make clean
	cd benchmarks/membench && make clean
	cd kernel && make clean

FORCE:

