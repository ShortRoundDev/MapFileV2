grammar MapFile;

COMMENT: '//' ~[\r\n]+;
NUM: '-'? [0-9]+ ( '.' [0-9]+ )?;
SP: ' '+;
CR: ('\r\n' | '\n');
STR: '"' ~["]* '"';
FILENAME: [A-Za-z_\-0-9!@#$%^&*()`~+=]+;

filename: FILENAME;
mapfile: ((COMMENT | entity) CR)+ (COMMENT | entity) CR? EOF;
textureParameters: NUM SP NUM SP NUM SP NUM SP NUM;
property: STR SP STR;
vertex: '(' SP? NUM SP NUM SP NUM SP? ')';
face: vertex SP vertex SP vertex SP filename SP textureParameters;
brush: '{' CR (face CR)+ '}';
entity: '{' CR ((property | COMMENT) CR)+ ((brush | COMMENT) CR)* '}' ;