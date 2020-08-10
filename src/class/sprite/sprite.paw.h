.include "src/config/config.inc"

.def SPRITE.PAW.POSITION.X 120
.def SPRITE.PAW.POSITION.Y 32

.def SPRITE.PAW.OFFSET.X 20

.def SPRITE.PAW.DISPLAY.AGE.MAX 240

.struct vars
  lifes dw
  age dw
  display.age dw
.endst


;zp-vars
.enum 0
  iterator INSTANCEOF iteratorStruct
  dimension INSTANCEOF dimensionStruct
  animation INSTANCEOF animationStruct
  oam INSTANCEOF oamStruct
  this INSTANCEOF vars
  zpLen ds 0
.ende

;object class static flags, default properties and zero page 
.define CLASS.FLAGS (OBJECT.FLAGS.Present | OBJECT.FLAGS.Singleton | OBJECT.PROPERTIES.isLevelSortable)
.define CLASS.PROPERTIES OBJECT.PROPERTIES.isSprite
.define CLASS.ZP_LENGTH zpLen
.define CLASS.IMPLEMENTS interface.dimension


.base BSL
.bank 0 slot 0

