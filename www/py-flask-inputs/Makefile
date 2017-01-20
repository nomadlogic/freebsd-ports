# $FreeBSD$

PORTNAME=	Flask-Inputs
PORTVERSION=	0.2.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	pewright@tronc.com
COMMENT=	Support for WTForms to validate request data from args to headers to json

LICENSE=	MIT
#LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Flask>0:www/py-flask \
		${PYTHON_PKGNAMEPREFIX}wtforms>0:textproc/py-wtforms
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}nose>0:devel/py-nose \
		${PYTHON_PKGNAMEPREFIX}coverage>0:devel/py-coverage \
		${PYTHON_PKGNAMEPREFIX}jsonschema>0:devel/jsonschema

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
