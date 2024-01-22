# -*- coding: utf-8 -*-
"""
    pygments.lexers.openjava
    ~~~~~~~~~~~~~~~~~~~~~~~~

    Lexers for the OpenJava programming language.
"""

import re

from pygments.lexer import bygroups, inherit
from pygments.lexers.ruby import RubyLexer
from pygments.token import Keyword

__all__ = ['JRubyLexer']

class JRubyLexer(RubyLexer):
    """
    Lexers for the JRuby programming language.

    .. versionadded:: 0.1
    """

    name = 'JRuby'
    aliases = ['jruby']
    filenames = ['*.rb']
    flags = re.DOTALL

    tokens = {
        'root': [
            (r'(java_import)', bygroups(Keyword.Pseudo)),
            inherit
        ]
    }
