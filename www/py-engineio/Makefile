# $FreeBSD$

PORTNAME=	python-engineio
PORTVERSION=	1.0.3
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	pewright@tronc.com
COMMENT=	Engine.IO Server

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six

TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}mock>0:devel/py-mock \
                ${PYTHON_PKGNAMEPREFIX}eventlet>0:devel/py-eventlet


OPTIONS_DEFINE=		TESTS
TESTS_DESC=		Install test suite dependencies
TESTS_BUILD_DEPENDS=	${RUN_DEPENDS} \
			${TEST_DEPENDS}

NO_ARCH=	yes
USES=		python:2.7+
USE_PYTHON=	autoplist distutils

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test

.include <bsd.port.mk>
