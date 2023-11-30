grammar MiShell;

program: statement* EOF;

statement: ifStatement | expression;

ifStatement: 'if' expression 'then' statement ('else' statement)? 'end';

expression: operation | NUMBER;

operation: '(' OPERATOR expression expression ')';

OPERATOR: '+' | '-' | '*' | '/';

NUMBER: [0-9]+;

WS: [ \t\r\n]+ -> skip;
