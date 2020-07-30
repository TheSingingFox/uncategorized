OUT = bin
TARGETS = bin/

$(OUT)/base13: base13/base13.c
	gcc $< -o $@

clean:
	rm -rf $(TARGETS)

$(shell mkdir -p $(OUT))
