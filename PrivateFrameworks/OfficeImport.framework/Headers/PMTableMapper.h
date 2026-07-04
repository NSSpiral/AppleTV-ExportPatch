/* Runtime dump - PMTableMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PMTableMapper : CMMapper
{
    OADTable * mTable;
    CMDrawableStyle * mStyle;
    CMTableGridInfo * mGrid;
    OADOrientedBounds * mBounds;
}

- (void)dealloc;
- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (unsigned int)rowCount;
- (float)columnWidthAtIndex:(unsigned int)arg0 state:(NSObject *)arg1;
- (NSObject *)tableBorderStyle;
- (TSTCellStyle *)cellStyle;
- (id)defaultCellFillForRow:(unsigned int)arg0 withState:(NSObject *)arg1;
- (PMTableMapper *)initWithOadTable:(id)arg0 bounds:(struct CGRect)arg1 parent:(NSObject *)arg2;
- (void)mapTablePropertiesWithState:(NSObject *)arg0;
- (void)mapColumnGridAt:(id)arg0 withState:(NSObject *)arg1;
- (TSCHChartGrid *)grid;
- (NSObject *)defaultCellFillWithState:(NSObject *)arg0;

@end
