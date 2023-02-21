/*!
 * Coloring for CLI
 */

var Coloring = module.exports = {};

// disable coloring on `--no-colors` cli flag

Coloring.disabled =  (process.argv.indexOf('--no-colors') !== -1);

// default styles

var styles = Coloring.styles = {
  'bold':          ['1',  '22'],
  'italic':        ['3',  '23'],
  'underline':     ['4',  '24'],
  'inverse':       ['7',  '27'],
  'strikethrough': ['9',  '29'],
  'white':         ['37', '39'],
  'grey':          ['90', '39'],
  'black':         ['30', '39'],
  'blue':          ['34', '39'],
  'cyan':          ['36', '39'],
  'green':         ['32', '39'],
  'magenta':       ['35', '39'],
  'red':           ['31', '39'],
  'yellow':        ['33', '39']
};

/**
 * [addProperty description]
 * @param {[type]} color [description]
 * @param {[type]} func  [description]
 * @api private
 */

function addProperty(color, func) {
  Coloring[color] = function(str) {
    return func.apply(str);
  };
  String.prototype.__defineGetter__(color, func);
}

// apply default styles to String prototype

Object.keys(styles).forEach(function(style) {
  addProperty(style, function() {
    if (Coloring.disabled) { return '' + this; }
    var open =  '\x1B[' + styles[style][0] + 'm ';
    var close = '\x1B[' + styles[style][1] + 'm ';
    return  '' + open + this + close;
  });
});

/**
 * alias coloring style
 * @param  {String} name  alias name
 * @param  {String} style style name
 */

Coloring.alias = function (name, style) {
  if (!styles[style]) { return console.error('error No style %s exists to alias'.red, style); }
  addProperty(name, function () {
    return Coloring[style](this);
  });
};

/**
 * Removes coloring from string
 * @return {String}  String Striped of coloring
 */

addProperty('strip', function () {
  return ('' + this).replace(/\x1B\[\d+m/g, '');
});