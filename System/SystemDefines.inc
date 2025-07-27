RAMStart			equ	$C000		; Ram start address
RAMSize				equ	$3FE0		; Ram size, excluding space reserved for stack
StackStart			equ	$FFFF		; Stack start address. Must be $FFFF to create a bootable cartridge
ExtraRAMStart		equ	$8000		; Extra ram start address
ExtraRAMSize		equ	$4000		; Extra ram size
VDPBase				equ	$80			; VDP data base port 
VDPReadBase			equ	$84			; VDP control base port
WriteOffset			equ	1			; Difference between read and write ports for each base port
PSGRegisterPort		equ	$88			; PSG latch port
PSGWritePort		equ	$8C			; PSG write port
PSGReadPort			equ	$90			; PSG read port
PPIPort				equ	$97			; PPI port
PPIPortA			equ	$98			; PPI port A
PPIPortB			equ	$99			; PPI port B
PPIPortC			equ	$96			; PPI port C
PPIModePort			equ	$9A			; PPI mode port
SystemSprites		equ	32			; Maximum system sprites
