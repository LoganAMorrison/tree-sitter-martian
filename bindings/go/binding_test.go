package tree_sitter_martian_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-martian"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_martian.Language())
	if language == nil {
		t.Errorf("Error loading Martian grammar")
	}
}
