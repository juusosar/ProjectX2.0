#include <assert.h>
#include "../src/calculator.h"
#include <cifuzz/cifuzz.h>
#include <fuzzer/FuzzedDataProvider.h>
#include <cstdint>
#include <cstddef>
#include <string>

FUZZ_TEST_SETUP() {
  // Perform any one-time setup required by the FUZZ_TEST function.
}

FUZZ_TEST(const uint8_t *data, size_t size) {
  FuzzedDataProvider fuzzed_data(data, size); 
  float num_1 = fuzzed_data.ConsumeFloatingPoint<float>();
  float num_2 = fuzzed_data.ConsumeFloatingPoint<float>();
  std::string op = fuzzed_data.ConsumeBytesAsString(1);

  char char_op = op[0];

  calculator(num_1, char_op, num_2);
}
