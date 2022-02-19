# require "rake/phony"

task :default => [:generate]

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

file 'src/parser.c' => 'grammar.js' do
  sh "tree-sitter generate"
  Rake::Task[:test].invoke
end

## Test Grammar
###############
desc "Test grammar."
task :test do
  sh "tree-sitter test"
end
