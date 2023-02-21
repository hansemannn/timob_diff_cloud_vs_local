// TODO

var coloring = require('..');

describe('string style properties', function(){

  it('should output bold string', function(){
    'bold'.bold.should.eql('\u001B[1m bold\u001B[22m ');
  });

  it('should output italic string', function(){
    'italic'.italic.should.eql('\u001B[3m italic\u001B[23m ');
  });

  it('should output underline string', function(){
    'underline'.underline.should.eql('\u001B[4m underline\u001B[24m ');
  });

  it('should output inverse color string', function(){
    'inverse'.inverse.should.eql('\u001B[7m inverse\u001B[27m ');
  });

  it('should output strikethrough string', function(){
    'strikethrough'.strikethrough.should.eql('\u001B[9m strikethrough\u001B[29m ');
  });

});

describe('string style coloring', function(){

  it('should output white string', function(){
    'white'.white.should.eql('\u001B[37m white\u001B[39m ');
  });

  it('should output grey string', function(){
    'grey'.grey.should.eql('\u001B[90m grey\u001B[39m ');
  });

  it('should output black string', function(){
    'black'.black.should.eql('\u001B[30m black\u001B[39m ');
  });

  it('should output blue string', function(){
    'blue'.blue.should.eql('\u001B[34m blue\u001B[39m ');
  });

  it('should output cyan string', function(){
    'cyan'.cyan.should.eql('\u001B[36m cyan\u001B[39m ');
  });

  it('should output green string', function(){
    'green'.green.should.eql('\u001B[32m green\u001B[39m ');
  });

  it('should output magenta string', function(){
    'magenta'.magenta.should.eql('\u001B[35m magenta\u001B[39m ');
  });

  it('should output red string', function(){
    'red'.red.should.eql('\u001B[31m red\u001B[39m ');
  });

  it('should output yellow string', function(){
    'yellow'.yellow.should.eql('\u001B[33m yellow\u001B[39m ');
  });

});

describe('string style aliases', function(){
  it('should output string with aliased style', function(){
    coloring.alias('warn', 'yellow');
    'warn'.warn.should.eql('\u001B[33m warn\u001B[39m ');
  });
});

describe('string style stripping', function(){
  it('should output string with no style', function(){
    ('stripped'.red).strip.should.eql(' stripped ');
  });
});


describe('disable coloring globally', function(){
  it('should output strings with no style', function(){
    coloring.disabled = true;
    'no-coloring'.red.should.eql('no-coloring');
  });
});