TEMPLATE = subdirs

SUBDIRS += \
   examples \
   lib \
   tests

tests.depends = lib
examples.depends = lib
