# require "rake/phony"

task :default => [:generate]

TEST_CORPUS = FileList['test/corpus/*.txt']

## Clean & Clobber
##################
require 'rake/clean'
CLOBBER.include(
  'binding.gyp',
  'bindings/',
  'src/',
  'parser.*',
)

## Build Grammar
################
desc "Build/update grammar."
task :generate => 'src/parser.c'

# This workaround allows tests to be run again when
# test files change, although it also forces re-generating
# the grammar as a side effect -- couldn't come up with a
# better solution that only runs tests when test files change!

file 'src/parser.c' => ['grammar.js', *TEST_CORPUS] do
  sh "tree-sitter generate"
  Rake::Task[:test].invoke
end

## Test Grammar
###############
desc "Test grammar."
task :test do
  sh "tree-sitter test"
end
