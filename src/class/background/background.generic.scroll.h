.include "src/config/config.inc"

.define BACKGROUND.GENERIC.TILESIZE.X 32
.define BACKGROUND.GENERIC.TILESIZE.Y 32

.struct vars
  bg dw
  screen.current.x dw
  screen.current.y dw
  screen.last.x dw
  screen.last.y dw

.endst
     
;zp-vars
.enum 0
  iterator INSTANCEOF iteratorStruct
  dimension INSTANCEOF dimensionStruct
  animation INSTANCEOF animationStruct
  background INSTANCEOF backgroundStruct
  this INSTANCEOF vars
  zpLen ds 0
.ende

;object class static flags, default properties and zero page 
.define CLASS.FLAGS OBJECT.FLAGS.Present
.define CLASS.PROPERTIES 0
.define CLASS.ZP_LENGTH zpLen
.define CLASS.IMPLEMENTS interface.dimension

.base BSL
.bank BANK.PROGRAM

