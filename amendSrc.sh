#!/bin/bash

echo "now amending src folder structure"
mv src/object src/class
find ./src/ -type f -exec sed -i "s+src/object/+src/class/+g" {} \;
find ./src/ -type f -exec sed -i "s/abstract\.Sprite/sprite\.library/g" {} \;
find ./src/ -type f -exec sed -i "s/abstract\.sprite/sprite\.library/g" {} \;
find ./src/ -type f -exec sed -i "s/abstract\.Animation/animation\.library/g" {} \;
find ./src/ -type f -exec sed -i "s/abstract\.Background/background\.library/g" {} \;
find ./src/ -type f -exec sed -i "s/abstract\.Collision/collision\.library/g" {} \;
find ./src/ -type f -exec sed -i "s/abstract\.Hdma/hdma\.library/g" {} \;
find ./src/ -type f -exec sed -i "s/abstract\.Iterator/iterator\.library/g" {} \;
find ./src/ -type f -exec sed -i "s/abstract\.iterator/iterator\.library/g" {} \;
find ./src/ -type f -exec sed -i "s/abstract\.lifeform/lifeform\.library/g" {} \;
find ./src/ -type f -exec sed -i "s/abstract\.movement/lifeform\.library.movement/g" {} \;
find ./src/ -type f -exec sed -i "s/abstract\.Palette/palette\.library/g" {} \;
find ./src/ -type f -exec sed -i "s/abstract\.Script/script\.library/g" {} \;
find ./src/ -type f -exec sed -i "s/abstract\.platform/platform\.library/g" {} \;
find ./src/ -type f -exec sed -i "s/abstract\.dimension/dimension\.library/g" {} \;
find ./src/ -type f -exec sed -i "s/abstract\.collision/collision\.library/g" {} \;
find ./src/ -type f -exec sed -i "s/abstract\.enemy/enemy\.library/g" {} \;
find ./src/ -type f -exec sed -i "s/abstract\.level/level\.library/g" {} \;
find ./src/ -type f -exec sed -i "s/abstract\.object/object\.library/g" {} \;
find ./src/ -type f -exec sed -i "s/abstract\.vwf/vwf\.library/g" {} \;
find ./src/ -type f -exec sed -i "s/abstract\.background/background\.library/g" {} \;
find ./src/ -type f -exec sed -i "s/abstract\.hdma/hdma\.library/g" {} \;
find ./src/ -type f -exec sed -i "s/abstract\.collectable/collectable\.library/g" {} \;
find ./src/ -type f -exec sed -i "s/abstract\.textlayer/textlayer\.library/g" {} \;
find ./src/ -type f -exec sed -i "s/abstract\.Sort/sort\.library/g" {} \;
find ./src/ -type f -exec sed -i "s/abstract\.powerup/powerup\.library/g" {} \;
find ./src/ -type f -exec sed -i "s/abstract\.Controller/controller\.library/g" {} \;
find ./src/ -type f -exec sed -i "s/abstract\.option/option\.library/g" {} \;
find ./src/ -type f -exec sed -i "s/Background\.generic/background\.generic/g" {} \;
find ./src/ -type f -exec sed -i "s/Palette\.rotate/palette\.rotate/g" {} \;
find ./src/ -type f -exec sed -i "s/mambo! Jaa, ne!/set screen mode/g" {} \;

echo "renaming files"
mv src/class/background/abstract.Background.65816 src/class/background/background.library.65816
mv src/class/background/abstract.Background.h src/class/background/background.library.h
mv src/class/background/Background.generic.65816 src/class/background/background.generic.65816
mv src/class/background/Background.generic.h src/class/background/background.generic.h
mv src/class/background/textlayer/abstract.textlayer.65816 src/class/background/textlayer/textlayer.library.65816
mv src/class/background/textlayer/abstract.textlayer.h src/class/background/textlayer/textlayer.library.h
mv src/class/collision/abstract.Collision.65816 src/class/collision/collision.library.65816
mv src/class/collision/abstract.Collision.h src/class/collision/collision.library.h
mv src/class/controller/abstract.Controller.65816 src/class/controller/controller.library.65816
mv src/class/controller/abstract.Controller.h src/class/controller/controller.library.h
mv src/class/hdma/abstract.Hdma.65816 src/class/hdma/hdma.library.65816
mv src/class/hdma/abstract.Hdma.h src/class/hdma/hdma.library.h
mv src/class/iterator/abstract.Iterator.65816 src/class/iterator/iterator.library.65816
mv src/class/iterator/abstract.Iterator.h src/class/iterator/iterator.library.h
mv src/class/lifeform/abstract.lifeform.65816 src/class/lifeform/lifeform.library.65816
mv src/class/lifeform/abstract.lifeform.h src/class/lifeform/lifeform.library.h
mv src/class/option/abstract.option.65816 src/class/option/option.library.65816
mv src/class/option/abstract.option.h src/class/option/option.library.h
mv src/class/palette/abstract.Palette.65816 src/class/palette/palette.library.65816
mv src/class/palette/abstract.Palette.h src/class/palette/palette.library.h
mv src/class/palette/Palette.rotate.65816 src/class/palette/palette.rotate.65816
mv src/class/palette/Palette.rotate.h src/class/palette/palette.rotate.h
mv src/class/script/abstract.Script.65816 src/class/script/script.library.65816
mv src/class/script/abstract.Script.h src/class/script/script.library.h
mv src/class/sort/abstract.Sort.65816 src/class/sort/sort.library.65816
mv src/class/sort/abstract.Sort.h src/class/sort/sort.library.h
mv src/class/sprite/abstract.Sprite.65816 src/class/sprite/sprite.library.65816
mv src/class/sprite/abstract.Sprite.h src/class/sprite/sprite.library.h
echo "amendment complete"
