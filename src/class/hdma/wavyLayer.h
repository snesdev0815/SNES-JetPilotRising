.include "src/config/config.inc"

.def WAVY_LAYER.TABLE.LENGTH $300		 
		 
.struct vars
  tableEnd dw
  tablePointer dw
  lutPointer dw
.endst
		 
;zp-vars
.enum 0
  iterator INSTANCEOF iteratorStruct
  hdma INSTANCEOF hdmaStruct
  this INSTANCEOF vars
zpLen ds 0
.ende

;object class static flags, default properties and zero page 
.define CLASS.FLAGS OBJECT.FLAGS.Present
.define CLASS.PROPERTIES OBJECT.PROPERTIES.isHdma
.define CLASS.ZP_LENGTH zpLen

.base BSL
.bank 0 slot 0


.section "wavyLayerInitLUT" superfree
wavyLayerInitLUT:
  .db 00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00
  .db 01,00,00,00,00,00,00,00,00,01,00,00,00,00,00,00
  .db 00,00,00,00,00,00,00,-1,00,00,01,00,00,00,00,00
  .db 00,00,02,00,00,00,00,00,00,00,00,00,00,-1,00,00
  .db 00,00,00,00,01,00,00,00,00,00,00,00,00,00,00,00
  .db 00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00
  .db 00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00
  .db 00,00,00,00,01,02,03,04,01,00,00,00,00,00,00,00
  .db 00,00,00,00,00,00,00,00,00,00,00,00,00,00,00,00
  .db 00,00,00,00,00,00,00,00,-2,00,00,00,00,00,00,00
  .db 00,00,00,00,-1,00,00,00,01,00,00,00,00,00,00,00
wavyLayerInitLUT.end:

.ends
