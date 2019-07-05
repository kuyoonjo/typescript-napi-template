[![Build Status](https://travis-ci.org/kuyoonjo/typescript-napi-template.svg?branch=master)](https://travis-ci.org/kuyoonjo/typescript-napi-template.svg?branch=master)
[![Coverage Status](https://coveralls.io/repos/github/kuyoonjo/typescript-napi-template/badge.svg?branch=master)](https://coveralls.io/github/kuyoonjo/typescript-napi-template?branch=master)
[![MIT license](http://img.shields.io/badge/license-MIT-brightgreen.svg)](http://opensource.org/licenses/MIT)

# Typescript Napi Template

A template for creating Nodejs Napi Modules.

## How to start

```bash
git clone https://github.com/kuyoonjo/typescript-napi-template.git
cd typescript-napi-template
npm run build
npm run coverage
```

## Publish

```bash
npm publish
```

## Vscode debug
For debugging c/c++ code, you need install a vscode extension call `CodeLLDB`.

## Setting travis and coveralls badges
1. Sign in to [travis](https://travis-ci.org/) and activate the build for your project.
2. Sign in to [coveralls](https://coveralls.io/) and activate the build for your project.
3. Replace kuyoonjo/typescript-napi-template with your repo details like: "your_github_username/repo_name".
