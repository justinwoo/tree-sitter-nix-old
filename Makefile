dev:
	watchexec -w grammar.js -w corpus \
		'date && tree-sitter generate && tree-sitter test'

dev-test-files:
	watchexec -w grammar.js -w test \
		'date && tree-sitter generate && fd . test -x tree-sitter parse {}'
