.include "src/config/config.inc"

.define SPRITE.ROCKET.ANGLE.DEFAULT 0
.define SPRITE.ROCKET.ANGLE.BOTTOM MATH.090_DEG
.define SPRITE.ROCKET.ANGLE.TOP MATH.270_DEG+10

.export SPRITE.ROCKET.ANGLE.DEFAULT
.export SPRITE.ROCKET.ANGLE.BOTTOM
.export SPRITE.ROCKET.ANGLE.TOP


.define SPRITE.ROCKET.DESCENT.RATE 1
.define SPRITE.ROCKET.ASCEND.RATE 3
.define SPRITE.ROCKET.SPEED 500

.define SPRITE.ROCKET.EXHAUST.X 28
.define SPRITE.ROCKET.EXHAUST.Y 16

.define SPRITE.ROCKET.DEFAULT.LIFES 3
.define SPRITE.ROCKET.MAX.LIFES 6
.define SPRITE.ROCKET.COINS_PER_LIFE 10

.struct vars
  angle dw
  speed dw
  state dw
  currentSpeed dw
  controller.id dw
  collision.tile dw
  lifes dw
  coins dw
  buffer.x dw
  buffer.y dw
  age dw
  hdma ds _sizeof_oopObjHash
  level ds _sizeof_oopObjHash
.endst

.enum 0
  SPRITE.ROCKET.STATE.STANDING db
  SPRITE.ROCKET.STATE.FLYING db
  SPRITE.ROCKET.STATE.EXPLODING db
.ende

.enum 0 export
  LIFEFORM.COMMAND.GET_CAMERA_DATA db
  LIFEFORM.COMMAND.CUTSCENE.MAX ds 0
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
.define CLASS.FLAGS (OBJECT.FLAGS.Present | OBJECT.FLAGS.Singleton)
.define CLASS.PROPERTIES (OBJECT.PROPERTIES.isSprite | OBJECT.PROPERTIES.isCollidable | OBJECT.PROPERTIES.isPlayer  | OBJECT.PROPERTIES.isLifeform | OBJECT.PROPERTIES.isLevelSortable)
.define CLASS.ZP_LENGTH zpLen
.define CLASS.IMPLEMENTS interface.dimension

;external parameters
.enum 0 export
  sprite.rocket.parameter.pos.x db
  sprite.rocket.parameter.pos.y db
  sprite.rocket.parameter.size.x db
  sprite.rocket.parameter.size.y db
  sprite.rocket.parameter.input.id db
.ende

.base BSL
.bank 0 slot 0

