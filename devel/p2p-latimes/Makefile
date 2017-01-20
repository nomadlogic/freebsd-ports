# $FreeBSD$

PORTNAME=	p2p-latimes
PORTVERSION=	2.0.27
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	pewright@tronc.com
COMMENT=	Python wrapper for API at P2P, the Tribune Publishing CMS

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pytz>0:devel/py-pytz \
                ${PYTHON_PKGNAMEPREFIX}dateutil>0:devel/py-dateutil \
                ${PYTHON_PKGNAMEPREFIX}iso8601>0:devel/py-iso8601

NO_ARCH=	yes
USES=		python:2.7+
USE_PYTHON=	autoplist distutils

do-test:
	@cd ${WRKSRC} && ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test

.include <bsd.port.mk>
