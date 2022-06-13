// DATA.H
// Arquivo de cabecalho para controle de data (calendario)

#ifndef __DATA_H
#define __DATA_H

struct TDATA
{
  private:
    short DATA_DIA, DATA_MES, DATA_ANO;
    bool  DATA_OK;
  public:
    enum  {FEVEREIRO = 2, JULHO = 7};
    bool  ANOBISSEXTO(void) const;
    char  ULTIMODIAMES(void) const;
    void  VALIDADATA(void);
    void  ALTERADATA(short DIA, short MES, short ANO);
    void  MOSTRADATA(void) const;
    TDATA(void);
};

#endif // __DATA_H
