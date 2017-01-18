typedef long file_offset;

// definition of linear hash record, with a type and pointer instance declared for later use
typedef struct
{
    int id;
    file_offset next;
} linear_hash_record_t;

// pointer to the anchor type for a linear hash table (which is of the type lnear_hash_record)
// TODO
typedef linear_hash_record_t bucket_anchor_t;

// buckets
// TODO NEXT POINTER TO NEXT REAL BUCKET
typedef struct {
    int idx;
    int record_count;

    file_offset anchor_record;
    file_offset overflow_location;
} linear_hash_bucket_t;

// function pointer syntax: return_type (*function_name) (arg_type)
// linear hash structure definition, with a type and pointer instance declared for later use
typedef struct {
    int initial_size;
    int next_split;
    int split_threshold;
    int num_buckets;
    int num_records;
    int records_per_bucket;
} linear_hash_table_t;

// linear hash operations
linear_hash_record_t
linear_hash_get(
        int id
);

int
linear_hash_insert(
        int id,
        int hash_bucket_idx
);

void
linear_hash_delete(
        int id
);

int
hash_to_bucket(
        int id
);

// split function
void
split(

);

void
linear_hash_init(
        int initial_size,
        int split_threshold
);

void
write_new_bucket(
        int idx
);

// returns the struct representing the bucket at the specified index
linear_hash_bucket_t
linear_hash_get_bucket(
        file_offset bucket_loc
);

void
print_linear_hash_state(
        linear_hash_table_t linear_hash
);

void
linear_hash_update_bucket(
        file_offset bucket_loc,
        linear_hash_bucket_t bucket
);

linear_hash_record_t
linear_hash_get_record(
        file_offset loc
);

void
linear_hash_write_record(
        file_offset record_loc,
        linear_hash_record_t record
);

void
linear_hash_increment_num_records(

);

void
linear_hash_increment_num_buckets(

);

void
linear_hash_update_state(
        linear_hash_table_t linear_hash
);

file_offset
create_overflow_bucket(

);

void
linear_hash_update_overflow_bucket(
        file_offset overflow_loc,
        linear_hash_bucket_t bucket
);

file_offset
get_bucket_records_location(
        file_offset bucket_loc
);

int
linear_hash_bucket_is_full(
        linear_hash_bucket_t bucket
);

// returns the struct representing the bucket at the specified index
linear_hash_bucket_t
linear_hash_get_overflow_bucket(
        file_offset loc
);

// Returns the file offset where bucket with index idx begins
file_offset
bucket_idx_to_file_offset(
        int idx
);

void
linear_hash_increment_next_split(

);

void
print_linear_hash_bucket(
        linear_hash_bucket_t bucket
);