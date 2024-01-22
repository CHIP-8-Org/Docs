# -*- coding: utf-8 -*-
"""
    pygments.lexers.lex
    ~~~~~~~~~~~~~~~~~~~

    Lexers for showing code as it is without any highlighting.
"""

import re

from pygments.lexer import RegexLexer
from pygments.token import Keyword

__all__ = ['NoneLexer']

class NoneLexer(RegexLexer):
    """
    Lexers for showing code as it is without any highlighting.

    .. versionadded:: 0.1
    """

    name = 'None'
    aliases = ['none']
    filenames = ['*']
    flags = re.DOTALL

    tokens = {
        'root': [
            (r'.', Keyword)
        ]
    }
