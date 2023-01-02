#include <string>
#include <unordered_map>

typedef struct {
  std::string sequence;
  std::string quality;
  unsigned int overlap_length;
  unsigned int overlap_matches;
} MergedAlignment;

// Constants
#define PHRED_OFFSET 33

void nt2int(char *oseq, const char *iseq);
void int2nt(char *oseq, const char *iseq);
unsigned int flat_index(
    unsigned int column_index,
    unsigned int row_index,
    unsigned int ncol
);
int to_int(char &nt);
std::vector< std::vector<int> > create_scoring_matrix(int match, int mismatch);
std::unordered_map<std::string, int> sum_values(
    std::unordered_map<std::string, int> map1,
    std::unordered_map<std::string, int> map2
);
void print_flat_vector(const std::vector<int> &v, unsigned int ncol);
std::unordered_map<std::string, std::vector<int>> find_best_scoring_path(
    std::unordered_map<std::string, std::string*> &sequences,
    std::vector<std::vector<int>> scoring_matrix,
    int gap_p
);