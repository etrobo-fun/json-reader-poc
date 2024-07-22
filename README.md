# json-reader-poc

とりあえずコンパイルエラーが出ないようにしたが、
~~動作は未確認~~ 2024/07/22動作確認完了

`ifstream`のファイル名読み込み基準が実行場所準拠 (例: `~/work/sdk/json-reader-poc/scenario.json`を読み込みたい場合、ファイル名には`./json-reader-poc/scenario.json`と指定) なので、GitHubでシナリオも管理したいならワークスペースで管理したほうがよいかも。

## Requirements

- ~~etrobo環境~~
- RasPike環境

## Usage

```console
$ git clone --recursive git@github.com:etrobo-fun/json-reader-poc
$ cd json-reader-poc/external/json
$ git checkout v3.11.3
$ cd -
$ make img=json-reader-poc
$ make start
```
