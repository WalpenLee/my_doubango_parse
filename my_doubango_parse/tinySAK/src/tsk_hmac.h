/*
* Copyright (C) 2010-2011 Mamadou Diop.
*
* Contact: Mamadou Diop <diopmamadou(at)doubango[dot]org>
*
* This file is part of Open Source Doubango Framework.
*
* DOUBANGO is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* DOUBANGO is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with DOUBANGO.
*
*/

/**@file tsk_hmac.h
 * @brief HMAC: Keyed-Hashing for Message Authentication (RFC 2104) / FIPS-198-1.
 * HMAC-MD5 and HMAC-SHA-1 are also implemented.
 *
 * @author Mamadou Diop <diopmamadou(at)doubango[dot]org>
 *
 */
/*
* hMac�㷨
*ԭ��
*	����ɢ�к�������Ϣ��֤�롣����Ҫһ��������ɢ�к�������ʾΪH��������MD5����SHA-1����һ����ԿK���Լ�����Ϣ��֤�롣
*	����HMAC��Ҫһ��ɢ�к���hash��������md5����sha-1����һ����Կkey����L��ʾhash��������ַ�������md5��16������B��ʾ���ݿ�ĳ��ȣ�md5��sha-1�ķָ����ݿ鳤����64����
*	��Կkey�ĳ��ȿ���С�ڵ������ݿ鳤B������������ݿ鳤�ȣ�����ʹ��hash������key����ת�����������һ��L����key��
*	Ȼ�󴴽�����B���Ĳ�ͬ�ַ�����
*	innerpad = ����ΪB�� 0��36
*	outterpad = ����ΪB�� 0��5C
*	���������ַ���str��HMAC��
*	hash(key ^ outterpad, hash(key ^ innerpad, str))

*Ӧ��
*	hmac��ҪӦ���������֤�У�����ʹ�÷����������ģ�
����1. �ͻ��˷�����¼���󣨼������������GET����
����2. ����������һ�����ֵ�����ڻỰ�м�¼������ֵ
����3. �ͻ��˽������ֵ��Ϊ��Կ���û��������hmac���㣬Ȼ���ύ��������
����4. ��������ȡ�û����ݿ��е��û�����Ͳ���2�з��͵����ֵ����ͻ���һ����hmac���㣬Ȼ�����û����͵Ľ���Ƚϣ�������һ������֤�û��Ϸ�
��������������У������⵽��ȫ�������Ƿ��������͵����ֵ���û����͵�hmac����������ڽػ���������ֵ�ĺڿͶ���������ֵ��û������ģ����޻�ȡ�û�����Ŀ����ԣ�
   ���ֵ������ʹhmacֻ�ڵ�ǰ�Ự����Ч�������ǿ�˰�ȫ�Ժ�ʵ���ԡ�
*/

#ifndef _TINYSAK_HMAC_H_
#define _TINYSAK_HMAC_H_

#include "tinysak_config.h"

#include "tsk_sha1.h"
#include "tsk_md5.h"

TSK_BEGIN_DECLS

TINYSAK_API int hmac_md5_compute(const uint8_t* input, tsk_size_t input_size, const char* key, tsk_size_t key_size, tsk_md5string_t *result);
TINYSAK_API int hmac_md5digest_compute(const uint8_t* input, tsk_size_t input_size, const char* key, tsk_size_t key_size, tsk_md5digest_t result);

TINYSAK_API int hmac_sha1_compute(const uint8_t* input, tsk_size_t input_size, const char* key, tsk_size_t key_size, tsk_sha1string_t *result);
TINYSAK_API int hmac_sha1digest_compute(const uint8_t* input, tsk_size_t input_size, const char* key, tsk_size_t key_size, tsk_sha1digest_t result);

TSK_END_DECLS

#endif /* _TINYSAK_HMAC_H_ */
