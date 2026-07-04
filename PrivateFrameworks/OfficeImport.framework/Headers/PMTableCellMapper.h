/* Runtime dump - PMTableCellMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PMTableCellMapper : CMMapper
{
    OADTableCell * mCell;
    CMStyle * mStyle;
    int mColIndex;
    unsigned int mRowIndex;
    float mWidth;
}

- (void)dealloc;
- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (NSObject *)tableMapper;
- (void)mapBordersWithState:(NSObject *)arg0;
- (void)mapCellPropertiesWithState:(NSObject *)arg0 textAnchor:(int)arg1;
- (PMTableCellMapper *)initWithOadTableCell:(NSObject *)arg0 rowIndex:(unsigned int)arg1 columnIndex:(int)arg2 parent:(NSObject *)arg3;
- (float)widthWithState:(NSObject *)arg0;
- (NSObject *)rowMapper;

@end
