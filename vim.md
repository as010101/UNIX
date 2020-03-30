vim 插件 https://www.zhihu.com/question/47691414/answer/373700711?utm_source=ZHShareTargetIDMore&utm_medium=social&utm_oi=1015597338517155840 


call plug#begin('~/.vim/plugged')

Plug 'Valloric/YouCompleteMe', { 'do': './install.py --clang-completer',  'for': ['c', 'cpp'] }

call plug#end()
