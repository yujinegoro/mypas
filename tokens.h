#ifndef TOKENS_H
#define TOKENS_H

enum {
	ID = 1025,
	NUM,
	UINT
};

#define   MAX_ID_LEN              32	// Tamanho máximo dos identificadores
#define   MAX_INT_DIG             10	// Número máximo de dígitos de um inteiro
#define	  MAX_PRC_DIG		          17	// Número máximo de dígitos de precisão de ponto flutuante

#define	  MAX_STACK_SIZE		   0x100  // Tamanho máximo das pilhas			
#define   MAX_RECURSION_SIZE   0x100  // Número máximo de recursões	

#define	  MAX_SYM_TAB				   0x100  // Tamanho máximo de symtab				
#define	  MAX_MEM_SIZE		     0x100	// Dúvida: Eraldo colocou isso ? mas não é ligada a SYMTAB?			

#endif // TOKENS_H