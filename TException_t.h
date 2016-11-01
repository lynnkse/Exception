#include <cstring>

using namespace std;

template <class EXT>
class TException_t
{
	public:
		TException_t(const string& _desc, const EXT& _data): m_desc(_desc), m_data(_data), m_file(__FILE__), m_line(__LINE__){}
		~TException_t(){}
		TException_t(const TException_t& _tex): m_desc(_tex.m_desc), m_data(_tex.m_data), m_file(_tex.m_file), m_line(_tex.m_line){}
		const string& GetDesc() const { return m_desc; }
		const EXT& GetData() const { return m_data; }
		const string& GetFile() const { return m_file; }
		const int GetLine() const { return m_line; }
	private:
		const string m_desc;
		const EXT m_data;
		const string m_file;
		const int m_line;

		void operator=(const TException_t& _tex){}
};
