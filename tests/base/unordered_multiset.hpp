
// Copyright (c) 2010-2012 niXman (i dot nixman dog gmail dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//
//
//
// Boost Software License - Version 1.0 - August 17th, 2003
//
// Permission is hereby granted, free of charge, to any person or organization
// obtaining a copy of the software and accompanying documentation covered by
// this license (the "Software") to use, reproduce, display, distribute,
// execute, and transmit the Software, and to prepare derivative works of the
// Software, and to permit third-parties to whom the Software is furnished to
// do so, all subject to the following:
//
// The copyright notices in the Software and this entire statement, including
// the above license grant, this restriction and the following disclaimer,
// must be included in all copies of the Software, in whole or in part, and
// all derivative works of the Software, unless such copies or derivative
// works are solely in the form of machine-executable object code generated by
// a source language processor.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
// SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
// FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
// ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
// DEALINGS IN THE SOFTWARE.

#ifndef _yas_test__unordered_multiset_hpp__included_
#define _yas_test__unordered_multiset_hpp__included_

#if defined(YAS_HAS_STD_UNORDERED) || defined(YAS_HAS_BOOST_UNORDERED)

template<typename OA, typename IA>
bool unordered_multiset_test() {
#if defined(YAS_HAS_STD_UNORDERED)
	std::unordered_multiset<int> set1 = {
		0,0,2,3,4,4,6,7,8,9
	}, set2;

	OA oa;
	oa & set1;

	IA ia(oa.get_intrusive_buffer());
	ia & set2;

	if ( set1.size() != 10 || set2.size() != 10 || set1 != set2 ) {
		std::cout << "UNORDERED_MULTISET deserialization error! [1]" << std::endl;
		return false;
	}

	std::unordered_multiset<std::string> set3 = {
		"0",
		"1",
		"1"
	}, set4;

	OA oa2;
	oa2 & set3;

	IA ia2(oa2.get_intrusive_buffer());
	ia2 & set4;

	if ( set3.size() != 3 || set4.size() != 3 || set3 != set4 ) {
		std::cout << "UNORDERED_MULTISET deserialization error! [2]" << std::endl;
		return false;
	}
#endif // defined(YAS_HAS_STD_UNORDERED)

#if defined(YAS_HAS_BOOST_UNORDERED)
	boost::unordered_multiset<int> set5, set6;
	set5.insert(0);
	set5.insert(1);
	set5.insert(2);
	set5.insert(3);
	set5.insert(4);
	set5.insert(5);
	set5.insert(5);
	set5.insert(7);
	set5.insert(8);
	set5.insert(8);

	OA oa3;
	oa3 & set5;

	IA ia3(oa3.get_intrusive_buffer());
	ia3 & set6;

	if ( set5.size() != 10 || set6.size() != 10 || set5 != set6 ) {
		std::cout << "UNORDERED_MULTISET deserialization error! [3]" << std::endl;
		return false;
	}

	boost::unordered_multiset<std::string> set7, set8;
	set7.insert("1");
	set7.insert("1");
	set7.insert("3");

	OA oa4;
	oa4 & set7;

	IA ia4(oa4.get_intrusive_buffer());
	ia4 & set8;

	if ( set7.size() != 3 || set8.size() != 3 || set7 != set8 ) {
		std::cout << "UNORDERED_MULTISET deserialization error! [4]" << std::endl;
		return false;
	}
#endif // defined(YAS_HAS_BOOST_UNORDERED)
	return true;
}

#endif // #if defined(YAS_HAS_STD_UNORDERED) || defined(YAS_HAS_BOOST_UNORDERED)

#endif // _yas_test__unordered_multiset_hpp__included_
