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
* hMac算法
*原理
*	基于散列函数的消息认证码。它需要一个加密用散列函数（表示为H，可以是MD5或者SHA-1）和一个密钥K用以计算消息认证码。
*	计算HMAC需要一个散列函数hash（可以是md5或者sha-1）和一个密钥key。用L表示hash函数输出字符串长（md5是16），用B表示数据块的长度（md5和sha-1的分割数据块长都是64）。
*	密钥key的长度可以小于等于数据块长B，如果大于数据块长度，可以使用hash函数对key进行转换，结果就是一个L长的key。
*	然后创建两个B长的不同字符串：
*	innerpad = 长度为B的 0×36
*	outterpad = 长度为B的 0×5C
*	计算输入字符串str的HMAC：
*	hash(key ^ outterpad, hash(key ^ innerpad, str))

*应用
*	hmac主要应用在身份验证中，它的使用方法是这样的：
　　1. 客户端发出登录请求（假设是浏览器的GET请求）
　　2. 服务器返回一个随机值，并在会话中记录这个随机值
　　3. 客户端将该随机值作为密钥，用户密码进行hmac运算，然后提交给服务器
　　4. 服务器读取用户数据库中的用户密码和步骤2中发送的随机值做与客户端一样的hmac运算，然后与用户发送的结果比较，如果结果一致则验证用户合法
　　在这个过程中，可能遭到安全攻击的是服务器发送的随机值和用户发送的hmac结果，而对于截获了这两个值的黑客而言这两个值是没有意义的，绝无获取用户密码的可能性，
   随机值的引入使hmac只在当前会话中有效，大大增强了安全性和实用性。
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
