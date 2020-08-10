.include "src/config/config.inc"

.define PALETTE.ROTATE.BLEND_STEPS 4

.struct palStruct
  delay dw
  decay dw
  counter dw
  current db
  target db
  state dw
  index dw
  subindex dw
.endst

;zp-vars
.enum 0
  iterator INSTANCEOF iteratorStruct
  palette INSTANCEOF paletteStruct
  this INSTANCEOF palStruct

zpLen ds 0
.ende

;object class static flags, default properties and zero page 
.define CLASS.FLAGS OBJECT.FLAGS.Present
.define CLASS.PROPERTIES 0
.define CLASS.ZP_LENGTH zpLen


.base BSL
.bank BANK.PROGRAM
