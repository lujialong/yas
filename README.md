	<h1>YAS &#8211; Yet Another Serialization</h1>

	<p>YAS is created as a replacement of boost.serialization because of its insufficient speed of serialization.<br />
Increase speed of the YAS serialization compared with boost.serialization is:<ul><br />
<li>2..3 times in release mode</li><br />
<li>6..7 times in debug mode</li><br />
</ul></p>

	<h2>Planned the support for the following types of archives:<ul><br />
<li>binary</li><br />
<li>text</li><br />
<li>json</li><br />
</ul></h2>

	<p><em>Currently only a binary serialization implemented.</em></p>

	<h2>Planned the support for the following compilers:<ul><br />
<li>GCC</li><br />
<li>Clang</li><br />
<li>Intel</li><br />
<li>MSVC</li><br />
</ul></h2>

	<p><em>Currently only GCC-4.6.3&#215;32/x64 tested.</em></p>

	<h2>Planned the support for the following serializable types:<br />
<ul><br />
<li>all built-in types</li><br />
<li>std::array</li><br />
<li>std::bitset</li><br />
<li>std::string</li><br />
<li>std::wstring</li><br />
<li>std::pair</li><br />
<li>std::tuple</li><br />
<li>std::vector</li><br />
<li>std::list</li><br />
<li>std::forward_list</li><br />
<li>std::map</li><br />
<li>std::multimap</li><br />
<li>std::set</li><br />
<li>std::multiset</li><br />
<li>std::unordered_map</li><br />
<li>std::unordered_multimap</li><br />
<li>std::unordered_set</li><br />
<li>std::unordered_multiset</li><br />
<li>boost::array</li><br />
<li>boost::unordered_map</li><br />
<li>boost::unordered_multimap</li><br />
<li>boost::unordered_set</li><br />
<li>boost::unordered_multiset</li><br />
<li>boost::fusion::pair</li><br />
<li>boost::fusion::tuple</li><br />
<li>boost::fusion::vector</li><br />
<li>boost::fusion::list</li><br />
<li>boost::fusion::map</li><br />
<li>boost::fusion::set</li><br />
<li>qbitarray</li><br />
<li>qbytearray</li><br />
<li>qchar</li><br />
<li>qcolor</li><br />
<li>qdate</li><br />
<li>qdatetime</li><br />
<li>qhash</li><br />
<li>qlist</li><br />
<li>qmap</li><br />
<li>qmultihash</li><br />
<li>qmultimap</li><br />
<li>qpoint</li><br />
<li>qpointf</li><br />
<li>qpolygon</li><br />
<li>qpolygonf</li><br />
<li>qqueue</li><br />
<li>qrect</li><br />
<li>qrectf</li><br />
<li>qregion</li><br />
<li>qset</li><br />
<li>qsize</li><br />
<li>qsizef</li><br />
<li>qstack</li><br />
<li>qstring</li><br />
<li>qstringlist</li><br />
<li>qtime</li><br />
<li>qurl</li><br />
<li>quuid</li><br />
<li>qvariant</li><br />
<li>qvarianthash</li><br />
<li>qvariantlist</li><br />
<li>qvariantmap</li><br />
<li>qvector</li><br />
<li>qvector2d</li><br />
<li>qvector3d</li><br />
<li>qvector4d</li><br />
</ul></h2>

	<p><em>Currently supports all types except Qt types.</em></p>

	<p><em>P.S. If you use YAS in your project &#8211; tell to the author with the short description of the reasons and advantages in comparison with other libraries of serialization! ;)</em></p>


