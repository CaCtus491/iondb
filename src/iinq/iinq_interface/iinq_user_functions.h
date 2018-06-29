/********************************************************************/
/*			  Code generated by IinqExecute.java				  */
/********************************************************************/

#if !defined(IINQ_USER_FUNCTIONS_H_)
#define IINQ_USER_FUNCTIONS_H_

#if defined(__cplusplus)
extern "C" {
#endif

#include "..\..\dictionary\dictionary_types.h"
#include "..\..\dictionary\dictionary.h"
#include "..\iinq.h"
#include "iinq_functions.h"

unsigned int
iinq_calculate_key_offset(
	iinq_table_id		table_id,
	iinq_field_num_t	field_num
);

void
print_table(
	iinq_table_id tableId
);

void
setParam(
	iinq_prepared_sql	*p,
	iinq_field_num_t	field_num,
	ion_value_t			val
);

ion_boolean_t
iinq_table_scan_next(
	iinq_result_set *select
);

iinq_field_t
getFieldType(
	iinq_table_id		tableId,
	iinq_field_num_t	field_num
);

void
update(
	iinq_table_id	table_id,
	int				num_wheres,
	int				num_update,
	...
);

void
iinq_destroy_table_scan(
	iinq_result_set **result_set
);

void
drop_table(
	iinq_table_id *tableId
);

void
execute(
	iinq_prepared_sql *p
);

void
delete_record(
	iinq_table_id	table_id,
	int				num_wheres,
	...
);

iinq_result_set *
iinq_select(
	iinq_table_id		table_id,
	size_t				project_size,
	int					num_wheres,
	iinq_field_num_t	num_fields,
	...
);

iinq_prepared_sql *
iinq_insert_4(
	int		value_1,
	int		value_2,
	char	*value_3
);

iinq_prepared_sql *
iinq_insert_2(
	int		value_1,
	char	*value_2,
	int		value_3
);

iinq_prepared_sql *
iinq_insert_3(
	int		value_1,
	int		value_2,
	char	*value_3
);

ion_boolean_t
iinq_is_key_field(
	iinq_table_id		table_id,
	iinq_field_num_t	field_num
);

void
create_table(
	iinq_table_id		tableId,
	ion_key_type_t		keyType,
	ion_key_size_t		keySize,
	ion_value_size_t	project_size
);

iinq_prepared_sql *
iinq_insert_0(
	int		value_1,
	char	*value_2,
	char	*value_3,
	int		value_4,
	char	*value_5
);

iinq_prepared_sql *
iinq_insert_1(
	char	*value_1,
	char	*value_2,
	char	*value_3,
	int		value_4,
	char	*value_5
);

size_t
calculateOffset(
	iinq_table_id		tableId,
	iinq_field_num_t	field_num
);

#if defined(__cplusplus)
}
#endif

#endif
