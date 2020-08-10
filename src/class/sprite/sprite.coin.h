.include "src/config/config.inc"

.define SPRITE.COIN.COLLECTED.MAX_AGE 30
.struct vars
  state dw
  age dw
.endst

.enum 0
  SPRITE.COIN.STATE.CHILLING db
  SPRITE.COIN.STATE.COLLECTED db
.ende


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
.define CLASS.FLAGS OBJECT.FLAGS.Present
.define CLASS.PROPERTIES (OBJECT.PROPERTIES.isSprite | OBJECT.PROPERTIES.isCollidable | OBJECT.PROPERTIES.isItem  | OBJECT.PROPERTIES.isLevelMember | OBJECT.PROPERTIES.isLevelSortable)
.define CLASS.ZP_LENGTH zpLen
.define CLASS.IMPLEMENTS interface.dimension

;external parameters
.enum 0 export
  sprite.coin.parameter.pos.x db
  sprite.coin.parameter.pos.y db
  sprite.coin.parameter.size.x db
  sprite.coin.parameter.size.y db

.ende

.base BSL
.bank 0 slot 0

