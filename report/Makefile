.PHONY: all clean

all:
	pdflatex -shell-escape -interaction=nonstopmode -file-line-error report.tex
	bibtex report
	pdflatex -shell-escape -interaction=nonstopmode -file-line-error report.tex
	pdflatex -shell-escape -interaction=nonstopmode -file-line-error report.tex

clean:
	rm report.aux report.log report.out
