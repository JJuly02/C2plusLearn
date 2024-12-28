# Definicja ciągu odwołań do stron
page_references = [4, 2, 1, 4, 1, 2, 6, 3, 1, 2, 4, 1, 2, 5, 0, 2, 5, 4, 5, 6, 0, 4]
# Liczba ramek
frames = 3

# Implementacja algorytmu FIFO
def fifo(page_refs, frames):
    memory = []
    faults = 0
    for page in page_refs:
        if page not in memory:
            if len(memory) < frames:
                memory.append(page)
            else:
                memory.pop(0)
                memory.append(page)
            faults += 1
    return faults

# Implementacja algorytmu Optymalnego
def optimal(page_refs, frames):
    memory = []
    faults = 0
    for i, page in enumerate(page_refs):
        if page not in memory:
            if len(memory) < frames:
                memory.append(page)
            else:
                # Znajdź stronę, która będzie używana najpóźniej
                furthest_use = -1
                page_to_remove = None
                for m_page in memory:
                    if m_page not in page_refs[i+1:]:
                        page_to_remove = m_page
                        break
                    else:
                        next_use = page_refs[i+1:].index(m_page)
                        if next_use > furthest_use:
                            furthest_use = next_use
                            page_to_remove = m_page
                memory.remove(page_to_remove)
                memory.append(page)
            faults += 1
    return faults

# Implementacja algorytmu LRU
def lru(page_refs, frames):
    memory = []
    faults = 0
    for page in page_refs:
        if page not in memory:
            if len(memory) < frames:
                memory.append(page)
            else:
                memory.pop(0)
                memory.append(page)
            faults += 1
        else:
            # Aktualizacja kolejności użycia strony
            memory.remove(page)
            memory.append(page)
    return faults

# Obliczanie błędów braku stron dla każdego algorytmu
fifo_faults = fifo(page_references, frames)
optimal_faults = optimal(page_references, frames)
lru_faults = lru(page_references, frames)

fifo_faults, optimal_faults, lru_faults
