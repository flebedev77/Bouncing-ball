#!/bin/bash

# Спасибо, Алексей Кутёпов!
# Чтобы, модули были доступны надо запускать из папки компильятора.
# Ещё хочу сказать спасибо Алексею за то, как легко линковать с С обектами
#
#
#          Пример пользавания для новичков
#
# COMPILER_DIR=~/место/где/находится/хуяк ./запуск.sh

gcc -c рейлиб.c -o рейлиб.o

CURRENT_DIR=$(pwd)
pushd $(COMPILER_DIR) 2> /dev/null
хуяк комп $CURRENT_DIR/главный.хуя
ld -o $CURRENT_DIR/главный $CURRENT_DIR/главный.o $CURRENT_DIR/рейлиб.o -dynamic-linker /lib64/ld-linux-x86-64.so.2 -L./модули/ -lc -lm -lraylib &&
$CURRENT_DIR/главный
popd 2> /dev/null
