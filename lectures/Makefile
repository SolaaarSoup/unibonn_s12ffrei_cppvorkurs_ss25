all: html revealjs index

html:
	quarto render ??_*.qmd --to html --output-dir=../public/html/
revealjs:
	quarto render ??_*.qmd --to revealjs --output-dir=../public/revealjs/
index:
	quarto render index.md --to html --output-dir=../public/
