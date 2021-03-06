#include "../stdafx.h"

MMG_ICipher::MMG_ICipher()
{
	this->m_Indentifier = CIPHER_ILLEGAL_CIPHER;
}

CipherIdentifier MMG_ICipher::GetType()
{
	return this->m_Indentifier;
}

bool MMG_ICipher::DecryptWith(CipherIdentifier aCipher, ulong *aCipherKeys, uint *aData, sizeptr_t aDataLength)
{
	switch(aCipher)
	{
		case CIPHER_BLOCKTEA:
		{
			MMG_BlockTEA myCipher(aCipherKeys);
			myCipher.Decrypt((char *)aData, aDataLength);
		}
		return true;

		case CIPHER_NULLCIPHER:
		{
			MMG_NullCipher myCipher;
			myCipher.Decrypt((char *)aData, aDataLength);
		}
		return true;
	}

	return false;
}

bool MMG_ICipher::EncryptWith(CipherIdentifier aCipher, ulong *aCipherKeys, uint *aData, sizeptr_t aDataLength)
{
	switch(aCipher)
	{
		case CIPHER_BLOCKTEA:
		{
			MMG_BlockTEA myCipher(aCipherKeys);
			myCipher.Encrypt((char *)aData, aDataLength);
		}
		return true;

		case CIPHER_NULLCIPHER:
		{
			MMG_NullCipher myCipher;
			myCipher.Encrypt((char *)aData, aDataLength);
		}
		return true;
	}

	return false;
}