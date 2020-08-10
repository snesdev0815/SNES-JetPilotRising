.include "src/config/config.inc"

.def BOSS.Y.SPEED $100

.struct vars
  state dw
  collision.tile dw
  relative.x dw
  target.y dw
  age dw
.endst

.enum 0
  SPRITE.BOSS.STATE.APPROACHING db
  SPRITE.BOSS.STATE.PLAYING db
  SPRITE.BOSS.STATE.EXPLODING db
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
.define CLASS.PROPERTIES (OBJECT.PROPERTIES.isSprite | OBJECT.PROPERTIES.isEnemy  | OBJECT.PROPERTIES.isLifeform | OBJECT.PROPERTIES.isLevelMember | OBJECT.PROPERTIES.isLevelSortable)
.define CLASS.ZP_LENGTH zpLen
.define CLASS.IMPLEMENTS interface.dimension

;external parameters
.enum 0 export
  sprite.boss.parameter.pos.x db
  sprite.boss.parameter.pos.y db
  sprite.boss.parameter.size.x db
  sprite.boss.parameter.size.y db
.ende

.base BSL
.bank 0 slot 0

