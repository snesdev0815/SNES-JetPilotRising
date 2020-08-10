.include "src/config/config.inc"


.struct vars
  angle dw
  speed dw
  state dw
  currentSpeed dw
  controller.id dw
  collision.tile dw
  type dw
  age dw
.endst

.enum 0
  SPRITE.ENEMY.STATE.FLYING db
  SPRITE.ENEMY.STATE.EXPLODING db
.ende

.enum 0 export
  SPRITE.ENEMY.TYPE.STATIC.AIR.PHOENIX db
  SPRITE.ENEMY.TYPE.STATIC.GROUND.CHUMCHUM_FAT db ;too big
  SPRITE.ENEMY.TYPE.STATIC.GROUND.CHUMCHUM db
  SPRITE.ENEMY.TYPE.STATIC.GROUND.SKELETROID db
  SPRITE.ENEMY.TYPE.STATIC.GROUND.PIRANHA_PLANT db
  SPRITE.ENEMY.TYPE.MOVING.AIR.BAT db
  SPRITE.ENEMY.TYPE.MOVING.AIR.FIREBALL db
  SPRITE.ENEMY.TYPE.MOVING.GROUND.BEAROS db
  SPRITE.ENEMY.TYPE.MOVING.GROUND.SKELETROID db
  SPRITE.ENEMY.TYPE.MOVING.GROUND.MARIO db
  SPRITE.ENEMY.TYPE.CIRCLING.AIR.PHOENIX db
  SPRITE.ENEMY.TYPE.JUMPING.AIR.PHOENIX db
  SPRITE.ENEMY.TYPE.FALLING.AIR.ROCKSICLE db
  SPRITE.ENEMY.TYPE.MOVING.AIR.BULLET db
  SPRITE.ENEMY.TYPE.MAX ds 0
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
.define CLASS.PROPERTIES (OBJECT.PROPERTIES.isSprite | OBJECT.PROPERTIES.isCollidable | OBJECT.PROPERTIES.isEnemy  | OBJECT.PROPERTIES.isLifeform | OBJECT.PROPERTIES.isLevelMember | OBJECT.PROPERTIES.isLevelSortable)
.define CLASS.ZP_LENGTH zpLen
.define CLASS.IMPLEMENTS interface.dimension

;external parameters
.enum 0 export
  sprite.enemy.parameter.pos.x db
  sprite.enemy.parameter.pos.y db
  sprite.enemy.parameter.size.x db
  sprite.enemy.parameter.size.y db
  sprite.enemy.parameter.type db
  sprite.enemy.parameter.angle db
  sprite.enemy.parameter.speed db

.ende

.base BSL
.bank 0 slot 0

.Section "enemy.animation.lut" superfree
enemy.animation.lut:
  .dw SPRITE.enemy.phoenix.PTR
  .dw SPRITE.enemy.chumchum_fat.PTR
  .dw SPRITE.enemy.chumchum.PTR
  .dw SPRITE.enemy.skeletroid.PTR
  .dw SPRITE.enemy.piranha_plant.PTR
  .dw SPRITE.enemy.bat.PTR
  .dw SPRITE.enemy.lavablob.PTR
  .dw SPRITE.enemy.bearos.PTR
  .dw SPRITE.enemy.skeletroid_small.PTR
  .dw SPRITE.enemy.mario.PTR
  .dw SPRITE.enemy.phoenix.PTR
  .dw SPRITE.enemy.phoenix.PTR
  .dw SPRITE.enemy.rocksicle.PTR
  .dw SPRITE.enemy.lavablob.PTR

.ends

.Section "enemy.diameter.lut" superfree
enemy.diameter.lut:
  .dw 16  ;SPRITE.enemy.phoenix.PTR
  .dw 64  ;SPRITE.enemy.chumchum_fat.PTR
  .dw 32  ;SPRITE.enemy.chumchum.PTR
  .dw 20  ;SPRITE.enemy.skeletroid.PTR
  .dw 32  ;SPRITE.enemy.piranha_plant.PTR
  .dw 16  ;SPRITE.enemy.bat.PTR
  .dw 12  ;SPRITE.enemy.lavablob.PTR
  .dw 28  ;SPRITE.enemy.bearos.PTR
  .dw 13  ;SPRITE.enemy.skeletroid_small.PTR
  .dw 20  ;SPRITE.enemy.mario.PTR
  .dw 24  ;SPRITE.enemy.phoenix.PTR
  .dw 24  ;SPRITE.enemy.phoenix.PTR
  .dw 24  ;SPRITE.enemy.rocksicle.PTR
  .dw 6  ;SPRITE.enemy.lavablob.PTR
.ends
