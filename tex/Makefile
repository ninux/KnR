MAINFILE = documentation

all:
	for i in {1..3}; do \
		pdflatex $(MAINFILE).tex; \
	done
	bibtex $(MAINFILE).aux

bib:
	bibtex $(MAINFILE).aux

.PHONY: clean

clean:
	rm *.aux
	rm *.bbl
	rm *.blg
	rm *.log
	rm *.toc

