#pragma once

#include "Sort.h"
#include "Table/UnsortedSequenceTable.h"

namespace Structures {

	/// <summary> Triedenie Insert sort. </summary>
	/// <typeparam name = "K"> Kluc prvkov v tabulke. </typepram>
	/// <typeparam name = "T"> Typ dat ukladanych v tabulke. </typepram>
	template <typename K, typename T>
	class InsertSort : public Sort<K, T> {
	public:
		/// <summary> Utriedi tabulku triedenim Insert sort. </summary>
		/// <param name = "table"> NonortedSequenceTable, ktoru ma utriedit. </param>
		void sort(UnsortedSequenceTable<K, T>& table) override;
	};

	template<typename K, typename T>
	inline void InsertSort<K, T>::sort(UnsortedSequenceTable<K, T>& table) {
		//TODO 12: InsertSort
//		throw std::exception("InsertSort<K, T>::sort: Not implemented yet.");
	}

}
