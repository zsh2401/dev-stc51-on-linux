default: o.hex

run: flash

flash: o.hex
	@stcgal o.hex

o.hex: o.ihx
	@packihx o.ihx > o.hex

o.ihx: fx.rel main.rel
	@sdcc main.rel fx.rel -o o.ihx || true

.PHONY=clean
clean:
	@rm -rf fx.asm main.asm
	@rm -rf *.hex *.lk *.lst *.rst *.rel *.sym *.ihx *.map *.mem *.mk

fx.rel: fx.c
	@sdcc -c fx.c

main.rel: main.c
	@sdcc -c main.c
