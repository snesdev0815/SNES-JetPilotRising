.include "src/config/config.inc"

.def LOGO_ZOOM.TABLE.LENGTH $300     
.def LOGO_ZOOM.VALUE_TABLE.LENGTH $40

.enum 0
  LOGO_ZOOM.INDIRECT_TABLE ds LOGO_ZOOM.TABLE.LENGTH
  LOGO_ZOOM.VALUE_TABLE ds LOGO_ZOOM.VALUE_TABLE.LENGTH
  LOGO_ZOOM.VALUE_TABLE.LENGTH_TOTAL ds 0
.ende

.enum 0 export
  HDMA.SCROLL.TYPE.SLIME db
  HDMA.SCROLL.TYPE.MIST db
.ende

.struct vars
  ;type dw
  tableEnd dw
  tablePointer dw
  ;lutPointer dw  
.endst
		 
;zp-vars
.enum 0
  iterator INSTANCEOF iteratorStruct
  hdma INSTANCEOF hdmaStruct
  this INSTANCEOF vars
zpLen ds 0
.ende

;object class static flags, default properties and zero page 
.define CLASS.FLAGS OBJECT.FLAGS.Present
.define CLASS.PROPERTIES (OBJECT.PROPERTIES.isHdma | OBJECT.PROPERTIES.isLevelMember)
.define CLASS.ZP_LENGTH zpLen

;external parameters
.enum 0 export
  hdma.wavyBgScrollRelative.parameter.type db
  hdma.wavyBgScrollRelative.parameter.register db
  hdma.wavyBgScrollRelative.parameter.delay db
  hdma.wavyBgScrollRelative.parameter.pos.x db
  hdma.wavyBgScrollRelative.parameter.pos.y db
  hdma.wavyBgScrollRelative.parameter.size.x db
  hdma.wavyBgScrollRelative.parameter.size.y db
.ende

.base BSL
.bank BANK.DATA

.section "wavyBgScroll.lut.mist" superfree
wavyBgScroll.lut.mist:
  .dw $08, $08, $08, $08, $07, $07, $07, $06, $06, $05, $04, $04, $03, $02, $02, $01
  .dw $00, $ffff, $fffe, $fffe, $fffd, $fffc, $fffc, $fffb, $fffa, $fffa, $fff9, $fff9, $fff9, $fff8, $fff8, $fff8
  .dw $fff8, $fff8, $fff8, $fff9, $fff9, $fff9, $fffa, $fffa, $fffb, $fffc, $fffc, $fffd, $fffe, $fffe, $ffff, $00
  .dw $01, $02, $02, $03, $04, $04, $05, $06, $06, $07, $07, $07, $08, $08, $08, $08
.ends

.base BSL
.bank BANK.PROGRAM

