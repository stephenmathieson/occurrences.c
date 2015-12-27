
#include <stdlib.h>
#include "describe/describe.h"
#include "occurrences.h"

int
main(void) {
  describe("occurrences") {
    it("should return -1 when given bad inputs") {
      assert(-1 == occurrences(NULL, NULL));
      assert(-1 == occurrences("foo", NULL));
      assert(-1 == occurrences(NULL, "bar"));
    }

    it("should count the number of occurrences in haystack") {
      assert(2 == occurrences("l", "hello"));
      assert(1 == occurrences("foo", "foo"));
    }

    it("should handle anti-cases") {
      assert(0 == occurrences("foo", "bar"));
    }
  }

  return assert_failures();
}
