#pragma once

#include "Sort.h"
#include "Table/UnsortedSequenceTable.h"

namespace Structures {

	/// <summary> Triedenie Radix sort. </summary>
	/// <typeparam name = "K"> Kluc prvkov v tabulke. </typepram>
	/// <typeparam name = "T"> Typ dat ukladanych v tabulke. </typepram>
	template <typename K, typename T>
	class RadixSort : public Sort<K, T> {
	public:
		/// <summary> Utriedi tabulku triedenim Radix sort. </summary>
		/// <param name = "table"> NonortedSequenceTable, ktoru ma utriedit. </param>
		void sort(UnsortedSequenceTable<K, T>& table) override;
	};

	template<typename K, typename T>
	inline void RadixSort<K, T>::sort(UnsortedSequenceTable<K, T>& table) {
		//TODO 12: RadixSort
//		throw std::exception("RadixSort<K, T>::sort: Not implemented yet.");
	}

}
