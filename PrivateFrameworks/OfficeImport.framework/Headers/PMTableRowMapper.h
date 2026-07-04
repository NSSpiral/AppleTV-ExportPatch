/* Runtime dump - PMTableRowMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PMTableRowMapper : CMMapper
{
    OADTable * mTable;
    OADTableRow * mRow;
    unsigned int mRowIndex;
}

- (float)height;
- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (unsigned int)cellCount;
- (PMTableRowMapper *)initWithOadTable:(id)arg0 rowIndex:(unsigned int)arg1 parent:(NSObject *)arg2;

@end
