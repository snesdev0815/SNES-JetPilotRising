.include "src/config/config.inc"


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

;external parameters
.enum 0 export
  Background.generic.parameter.pos.x db
  Background.generic.parameter.pos.y db
  Background.generic.parameter.animation.id db
  Background.generic.parameter.animation.speed db
  Background.generic.parameter.animation.flags db
  Background.generic.parameter.layer db
  Background.generic.parameter.size.x db
  Background.generic.parameter.size.y db
.ende

.base BSL
.bank BANK.PROGRAM

