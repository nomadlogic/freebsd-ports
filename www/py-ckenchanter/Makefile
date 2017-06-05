# $FreeBSD$

PORTNAME=	ckenchanter
PORTVERSION=	1.1.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	pewright@tronc.com
COMMENT=	Extends the PyEnchant library for use in a CKEditor spellcheck server.

NO_ARCH=	yes
USES=		python:2.7+
USE_PYTHON=	autoplist distutils

RUN_DEPENDS=    ${PYTHON_PKGNAMEPREFIX}enchant>1.6.7:textproc/py-enchant

.include <bsd.port.mk>
