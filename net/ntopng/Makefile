# Created by: Muhammad Moinur Rahman <5u623l20@gmail.com>
# $FreeBSD$

PORTNAME=	ntopng
PORTVERSION=	2.4.2017.01.20
PORTREVISION=	1
CATEGORIES=	net

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	Network monitoring tool with command line and web interfaces

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	librrd.so:databases/rrdtool \
		libluajit-5.1.so:lang/luajit \
		libzmq.so:net/libzmq4 \
		libcurl.so:ftp/curl \
		libndpi.so:net/ndpi \
		libjson-c.so:devel/json-c

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
USES=	 	autoreconf cpe gmake libtool localbase mysql pathfix pkgconfig sqlite
SUB_FILES=	ntopng-geoipupdate.sh pkg-deinstall

USERS=		ntopng
GROUPS=		ntopng

USE_GITHUB=	yes
GH_ACCOUNT=	ntop
GH_TAGNAME=	2d9a513

CPE_VENDOR=	ntop

OPTIONS_DEFINE=		GEOIP NLS
OPTIONS_DEFAULT=	GEOIP

OPTIONS_SUB=	yes

GEOIP_LIB_DEPENDS=	libGeoIP.so:net/GeoIP

NLS_USES=	gettext

USE_RC_SUBR=	ntopng

post-patch:
	cd ${WRKSRC} && ${SH} autogen.sh

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/ntopng

post-install-GEOIP-on:
	${INSTALL_SCRIPT} ${WRKDIR}/ntopng-geoipupdate.sh ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
