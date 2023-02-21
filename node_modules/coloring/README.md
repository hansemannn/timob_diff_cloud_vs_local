# Coloring
Node.js terminal CLI text coloring

## Installation

```
$ npm install coloring
```

## Styles
  - bold
  - italic
  - underline
  - inverse
  - strikethrough
  - white
  - grey
  - black
  - blue
  - cyan
  - green
  - magenta
  - red
  - yellow

## coloring#

Extend String prototype with coloring

```js
var coloring = require('coloring');
```

## coloring#[STYLE]

Apply style to sting where `[STYLE]` would be replaced with the requested coloring style

```js
// apply style with coloring String property
console.log('TEST2'.bold);

// apply multiple styles to a single string
console.log('TEST2'.yellow.underline);

// apply style with coloring function

console.log(coloring.green('test'));
```

## coloring#alias

Alias a coloring style

```js
coloring.alias('warn', 'yellow');
```

## coloring#disabled
set to true to disable coloring or pass the `--no-colors` flag to disable coloring

```js
// disable coloring

coloring.disabled = true;

// re-enable coloring

coloring.disabled = true;
```

## Examples

```js

var coloring = require('coloring');

// basic usage

console.log('Oh no!!!'.red);
console.log('Slow down'.yellow);
console.log('Red Light'.red, 'Green Light'.green);
console.log(coloring.green('Happy St. Patty\'s Day'));

// aliasing colors

coloring.alias('warn', 'yellow');
coloring.alias('error', 'red');
coloring.alias('success', 'green');

console.log('I think we have an issue'.error);
console.log('I may be lost'.warn);
console.log('We have beer!'.success);
```

## License

(The MIT License)

Copyright (c) 2013 Christian Sullivan &lt;cs@euforic.co&gt;

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
'Software'), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.