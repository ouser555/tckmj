# tckmj
the cat keyboard mouse joystick

## 20240813 更新 pmw3610能切換cpi了


* stm32f103c8t6 bull pill
* [maple bootloader](https://github.com/rogerclarkmelbourne/STM32duino-bootloader)https://github.com/rogerclarkmelbourne/STM32duino-bootloader
  
  generic-none_bootloader.bin
  
* qmk 0.22.13
* make tckmj:via
* qmk toolbox

hardware
* 0.91" oled
* pmw3610 optical sencor
* 2 5way Nav switch
* joystick
* 7 key + 1 swtich
* scroll encoder

## pmw3610 breakout board
* https://github.com/ufan/pmw3610_breakout
* 板子上共有 VCC GND SDIO SCLK NCS RESET int 7支腳，其中RESET和int不用接(USB傳輸的情況下)  
* 跳線PAD焊上P2P3
