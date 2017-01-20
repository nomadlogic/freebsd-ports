# $FreeBSD$

PORTNAME=	Flask-Testing
PORTVERSION=	0.6.1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	pewright@tronc.com
COMMENT=	Flask unittest integration

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Flask>0:www/py-flask

TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}blinker>0:devel/py-blinker \
		twill>0:www/twill

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
