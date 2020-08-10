.include "src/config/config.inc"

.def PAUSE.STATUS.ENABLED 1
.def PAUSE.BRIGHTNESS 8
.def PAUSE.DELAY 60

.struct vars
  brightness ds 4
  script ds 4
  brightness.buffer dw
  status dw
  wait db

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


.base BSL
.bank 0 slot 0
