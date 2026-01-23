BUILD_DIR := build

make:
	@if [ ! -d "$(BUILD_DIR)" ]; then \
		cmake -S . -B build -DCMAKE_EXPORT_COMPILE_COMMANDS=ON \
	else \
	fi
	cmake --build build

clean:
	rm -rf build/

test:
	@ ./build/CalculatorTests

run:
	@ ./build/calculator_app
