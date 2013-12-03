
test: test-occurrences

test-occurrences: test/test.c src/occurrences.c
	$(CC) -std=c99 $^ -o $@
	./$@

.PHONY: test test-occurrences
