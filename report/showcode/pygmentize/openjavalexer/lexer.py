# -*- coding: utf-8 -*-
"""
    pygments.lexers.openjava
    ~~~~~~~~~~~~~~~~~~~~~~~~

    Lexers for the OpenJava programming language.
"""

import re

from pygments.lexer import bygroups, inherit
from pygments.lexers.jvm import JavaLexer
from pygments.token import Keyword

__all__ = ['OpenJavaLexer']

class OpenJavaLexer(JavaLexer):
    """
    Lexers for the OpenJava programming language.

    .. versionadded:: 0.1
    """

    name = 'OpenJava'
    aliases = ['openjava']
    filenames = ['*.oj']
    flags = re.DOTALL

    tokens = {
        'root': [
            (r'(instantiates)', bygroups(Keyword), 'class'),
            inherit
        ]
    }
