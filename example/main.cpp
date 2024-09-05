#include <concepts>
#include <nagisa/type_trait/type_trait.h>

int main()
{
	namespace ntt = ::ngs::type_traits;
	static_assert(::std::same_as<ntt::add_cvref_like_t<int, const int>, const int>);
	static_assert(::std::same_as<ntt::add_cvref_like_t<const int, const int>, const int>);
	static_assert(::std::same_as<ntt::add_cvref_like_t<int&, const int&>, int&>);
	static_assert(::std::same_as<ntt::add_cvref_like_t<const int, const int>, const int>);
	static_assert(::std::same_as<ntt::add_cvref_like_t<int, const int>, const int>);

	return 0;
}