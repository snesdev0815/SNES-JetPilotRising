.include "src/config/config.inc"

.def PLAYER.LIFES.DEFAULT 5
		 
.struct vars
  score dw
  name ds 4
  lifes db
  noMiss db
.endst

;zp-vars
.enum 0
  iterator INSTANCEOF iteratorStruct
  this INSTANCEOF vars

zpLen ds 0
.ende

;object class static flags, default properties and zero page 
.define CLASS.FLAGS (OBJECT.FLAGS.Present | OBJECT.FLAGS.Singleton)
.define CLASS.PROPERTIES 0
.define CLASS.ZP_LENGTH zpLen

;external parameters
.enum 0 export
  player.parameter.pos.x db
  player.parameter.pos.y db
  player.parameter.size.x db
  player.parameter.size.y db
.ende

.base BSL
.bank 0 slot 0
