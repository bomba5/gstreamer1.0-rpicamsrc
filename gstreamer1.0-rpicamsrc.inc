SUMMARY = "GStreamer plugin for RaspberryPi camera module"
SECTION = "multimedia"
LICENSE = "LGPLv2"
PR = "r1"

DEPENDS = "gstreamer1.0 gstreamer1.0-plugins-base userland"

PNREAL = "gst-rpicamsrc"
BRANCH = "master"

EXTRA_OECONF_remove += "--disable-gtk-doc"

SRC_URI="https://github.com/thaytan/${PNREAL}/archive/${BRANCH}.zip"

S = "${WORKDIR}/${PNREAL}-${BRANCH}"

FILES_${PN} += "${libdir}/gstreamer-1.0"

inherit autotools pkgconfig gobject-introspection gettext
