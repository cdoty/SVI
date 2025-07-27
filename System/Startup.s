include "SystemDefines.inc"

ext	resetSound
ext	clearRam
ext	startupDelay
ext	setupLibrary
ext	enableExpandedRAM
ext	expandedRAMEnabled
ext setMode2
ext	clearVRAM
ext main_

cseg

startup: public startup
	call	resetSound			; Reset sound to stop noise at startup
	call	clearRam			; Clear ram
	call	startupDelay		; Delay before starting
	call	setupLibrary		; Setup library

	call	enableExpandedRAM	; Enable expanded RAM

	call	setMode2			; Set mode 2
	call	clearVRAM			; Clear VRAM
	
	im		1					; Set interrupt mode 1
	
	jp		main_
