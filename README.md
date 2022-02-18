[![Tree-sitter][tree-sitter badge]][tree-sitter link]&nbsp;
[![Rust][rust badge]][rust link]

# Tree-sitter ALAN

- https://github.com/tajmone/tree-sitter-alan-if

An attempt to create an [ALAN-IF] syntax grammar via [Tree-sitter], a parser generator that can be used both as a syntax highlighter tool and to add language support to editors and IDE (e.g. the [Atom editor] natively supports [Tree-sitter grammars][Atom grammars]).

Tree-sitter grammars are similar to LSP Language Servers in principle (create once, use everywhere), but easier to create (BNF like rules) and without the complexity of the protocol layer (which is replaced by a simple C library API).

-----

**Table of Contents**

<!-- MarkdownTOC autolink="true" bracket="round" autoanchor="false" lowercase="only_ascii" uri_encoding="true" levels="1,2,3" -->

- [Usage Instruction](#usage-instruction)
- [Dependencies and Setup](#dependencies-and-setup)
    - [Dependencies](#dependencies)
    - [Rust Setup](#rust-setup)
    - [Using Node.js Instead](#using-nodejs-instead)
- [Reference Links](#reference-links)

<!-- /MarkdownTOC -->

-----

# Usage Instruction

After having installed all dependencies and correctly setup you working environment, open the CDM/shell and type:

    tree-sitter generate

which will generate many new files and sub-directories in this folder (ignored by Git).

To understand what the files in this folder are (generated and otherwise), and how to interact with them, see the _[Creating Parsers]_ tutorial at [Tree-sitter] website.


# Dependencies and Setup

For these tests I'm using the [Rust Tree-sitter CLI][TS-CLI Crate] tool, instead of the [Node.js version][TS-CLI NPM], so you'll need an extra setup step, described below.

I'm not a huge fan of Node.js and I prefer to use it as less as possible, if I can avoid it, and keep the repository clean of Node.js packages.

Also, I'm working under Windows OS, so other OSs might require different setup.

## Dependencies

You'll need to install on your system:

- [Node.js]
- [Rust] language
    + [Rust Tree-sitter CLI][TS-CLI Crate]

If you don't want' to install Rust, read further down below.

## Rust Setup

To install the Rust version of the Tree-sitter CLI tool, open your CMD and type:

    cargo install tree-sitter-cli

Then initialize it by typing `tree-sitter init-config`, you'll get a message like:

    Saved initial configuration to C:\Users\YourID\AppData\Roaming\tree-sitter/config.json


open the generated `config.json` file, which should start with something like:

```json
{
  "parser-directories": [
    "C:\\Users\\YourID\\github",
    "C:\\Users\\YourID\\src",
    "C:\\Users\\YourID\\source"
  ],
```

since the Rust Tree-sitter CLI has been installed as a global tool, you'll need to tweak the paths and make them point to this repository folder instead (or additionally, up to you); e.g.:

```json
{
  "parser-directories": [
    "X:\\path\\to\\tree-sitter-alan-if"
  ],
```

(I simply replaced the default paths, since I don't like keeping my work on the C drive, but you could just add the path to this repo and keep the default ones.)

After that, Tree-sitter CLI will be able to see this project for the ALAN Tree-sitter grammar — I know, it's far from a perfect solution, especially having to indicate separate paths for each project, but it's still better than having to clutter this directory with Node packages _and_ having to tweak the System or User PATH.

> **TIP** — Beware that if you keep all your Tree-sitter repositories in a same folder, it's sufficient to add to the `config.json` file just the path to their common folder, since the Tree-sitter CLI tool is smart enough to pick up any subfolder whose name starts with `tree-sitter-`.


## Using Node.js Instead

Alternatively, if you don't want to install Rust and prefer to use the Node.js version, follow the instructions at the _[Getting Started]_ section of the Tree-sitter tutorial.

Whichever version of the Tree-sitter CLI tool you use is fine, they work the same, only their setup differs.

You can also download a [precompiled Tree-sitter CLI binary][TS-CLI binary] and just drop it in this folder, if you prefer (but you'll still need to install Node.js and a few other NPM packages, there's no way around that).

-------------------------------------------------------------------------------

# Reference Links

<!-- MarkdownTOC:excluded -->
## ALAN-IF Links

- [www.alanif.se] — ALAN website.
- [@alan-if] — ALAN-IF GitHub organization:
    + [alan] — ALAN compiler and interpreter source repository.
    + [alan-docs] — ALAN documentation repository.

<!-- MarkdownTOC:excluded -->
## Tree-sitter Links

- [Tree-sitter website]
- [Tree-sitter CLI] — required application to build and test grammars. Available as:
    + [Node.js app via NPM][TS-CLI NPM]
    + [Rust crate via Cargo][TS-CLI Crate]
    + [precompiled binary][TS-CLI binary]
- [Language Bindings] — many languages available; here are a few selected links:
    + [Ruby][Ruby bindings] — Ruby gem by [@tree-sitter].
    + [Rust][Rust bindings] — included in [tree-sitter repository].
    + [Lua][Lua bindings] — LuaRocks package by [@euclidianAce].
- [@tree-sitter] — Tree-sitter GitHub organization:
    + [tree-sitter][tree-sitter repository] — main Tree-sitter repository.


<!-----------------------------------------------------------------------------
                               REFERENCE LINKS
------------------------------------------------------------------------------>

[GLR parsing algorithm]: https://en.wikipedia.org/wiki/GLR_parser

[Rust]: https://www.rust-lang.org "Visit Rust website"
[Node.js]: https://nodejs.org "Visit Node.js website"

<!-- ALAN IF -->

[ALAN-IF]: https://www.alanif.se "Visit ALAN website"
[www.alanif.se]: https://www.alanif.se "Visit ALAN website"
[@alan-if]: https://github.com/alan-if "View ALAN-IF organization's GitHub profile"
[alan]: https://github.com/alan-if/alan "ALAN compiler and interpreter source repository"
[alan-docs]: https://github.com/alan-if/alan-docs "ALAN Documentation repository"

<!-- Tree-sitter -->

[Tree-sitter]: https://tree-sitter.github.io "Visit Tree-sitter website"
[Tree-sitter website]: https://tree-sitter.github.io "Visit Tree-sitter website"

[@tree-sitter]: https://github.com/tree-sitter "Visit the Tree-sitter organization profile at GitHub"

[tree-sitter repository]: https://github.com/tree-sitter/tree-sitter "Tree-sitter repository at GitHub"

[Tree-sitter CLI]: https://github.com/tree-sitter/tree-sitter/tree/master/cli "Tree-sitter CLI repository"
[TS-CLI NPM]: https://www.npmjs.com/package/tree-sitter-cli "Tree-sitter CLI Node.js implementation at NPM"
[TS-CLI Crate]: https://crates.io/crates/tree-sitter-cli "Tree-sitter CLI Rust crate at Crates.io"
[TS-CLI binary]: https://github.com/tree-sitter/tree-sitter/releases/latest/ "Tree-sitter CLI precompiled binary via releases on GitHub repository"

[Creating Parsers]: https://tree-sitter.github.io/tree-sitter/creating-parsers "Tree-sitter documentation: 'Creating Parsers' tutorial"
[Getting Started]: https://tree-sitter.github.io/tree-sitter/creating-parsers#getting-started "Tree-sitter documentation: 'Getting Started' section"

<!-- Tree-sitter bindings -->

[Language Bindings]: https://tree-sitter.github.io/tree-sitter/#language-bindings "View the full list of Tree-listing language bindings"

[Lua bindings]: https://github.com/euclidianAce/ltreesitter "Lua bindings for Tree-sitter library"
[Ruby bindings]: https://github.com/tree-sitter/ruby-tree-sitter "Ruby bindings for Tree-sitter library"
[Rust bindings]: https://github.com/tree-sitter/tree-sitter/tree/master/lib/binding_rust "Rust bindings for Tree-sitter library"

<!-- Atom -->

[Atom editor]: https://atom.io "Atom editor's website"
[Atom grammars]: https://flight-manual.atom.io/hacking-atom/sections/creating-a-grammar/ "Learn more about Atom support for Tree-sitter generated grammars"


<!-- badges -->

[tree-sitter badge]: https://img.shields.io/badge/Tree--sitter-0.20.4-yellow
[tree-sitter link]: https://github.com/tree-sitter/tree-sitter "Requires Tree-sitter CLI"
[rust badge]: https://img.shields.io/badge/Rust-1.58.1-yellow
[rust link]: https://www.rust-lang.org "Requires Rust language"

<!-- people -->

[@euclidianAce]: https://github.com/euclidianAce "View @euclidianAce's GitHub profile"

<!-- EOF -->
