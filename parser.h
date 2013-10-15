/*
 * mypas -> PROGRAM ID ';' declrblk imprblk '.'
 *
 **** Object declaration scope is defined next:
 *
 * declrblk -> { specterms }
 *
 * specterm ->  VAR idlist ':' typespec ';'
 * 	      | sbrhead declrblk imprblk ';'
 *
 * idlist -> ID { ',' ID }
 *
 * typespec -> smptype | ARRAY '[' rangelst ']' OF typespec
 *
 * smptype -> INTEGER | REAL | DOUBLE | BOOLEAN | STRING | CHAR 
 *
 * rangelst -> range { ',' range }
 *
 * range -> UINT [ DDOT UINT ]
 *
 * sbrhead -> PROCEDURE ID argdef ';'
 * 	    | FUNCTION ID argdef ':' smptype ';'
 *
 * argdef -> [ '(' arglist ')' ]
 *
 * arglist -> argspc { ';' argspc }
 *
 * argspc -> [ VAR ] idlist ':' smptype
 *
 **** Imperative scope is defined hereafter:
 *
 * imprblk -> BEGIN stmtlst END
 *
 * stmtlst -> stmt { ';' stmt }
 *
 * stmt -> <epsilon> | ifstmt | whlstmt | forstmt | repstmt
 * 	 | idstmt | imprblk
 *
 * ifstmt -> IF expr THEN stmt [ ELSE stmt ]
 *
 */
void ifstmt(void);
/*
 * expr -> E [ relop E ]
 *
 * relop -> '>' | '>=' | '<' | '<=' | '=' | '<>'
 *
 * E -> [ '-' | NOT ] term { addop term }
 *
 * addop -> '+' | '-' | OR
 *
 * term -> fact { mulop fact }
 *
 * mulop -> '*' | '/' | DIV | MOD | AND
 *
 * whlstmt -> WHILE expr DO stmt
 * forstmt -> FOR ID indexing ':=' expr [DOWN]TO expr DO stmt
 * repstmt -> REPEAT stmtlst UNTIL expr
 * 
 * 	instances for idstmt:
 *
 * 	abacaxi := pera * 3 + goiaba
 *
 * 	xyz[i,j][k] := xyz[j+1,i-1][k]
 *
 * 	Writeln
 *
 * 	Blurr(Image, Width * 3)
 *
 * idstmt -> ID [ parm | indexing ':=' expr ]
 *
 * 	remark:
 *
 * 	FOLLOW(idstmt) = { ';', END }
 *
 * 	FOLLOW(ID) { '(', '[', ':=' } |_| FOLLOW(idstmt)
 *
 * parm -> '(' exprlst ')'
 *
 * explst -> expr { ',' expr }
 *
 * indexing -> { '[' exprlst ']' }
 *
 */
