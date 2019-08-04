@pandoc main.md ^
-s --toc ^
--metadata-file=meta.yml ^
-o article.tex
@clip < article.tex