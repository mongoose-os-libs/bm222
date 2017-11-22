let BM222 = {
  init: ffi('bool bm222_init(void *, int)'),
  _read: ffi('bool bm222_read(void *, int, void *, void *, void *)'),
  read: function(bus, addr) {
    let b1 = '      ', b2 = '      ', b3 = '      ';
    let res = this._read(bus, addr, b1, b2, b3);
    if (!res) return null;
    let f = function(s) { return s.at(0) | s.at(1) << 8; };
    return [ f(b1), f(b2), f(b3) ];
  },
};
