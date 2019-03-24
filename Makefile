dev:
	watchexec -w grammar.js -w test \
		'date && tree-sitter generate && fd . test -x tree-sitter parse {}'
