BUILD_DIR := build

make:
	cmake -S . -B build -DCMAKE_EXPORT_COMPILE_COMMANDS=ON \

clean:
	rm -rf build/

test:
	@ ./build/tests/CalculatorTests

run:
	@ ./build/src/calculator_app
