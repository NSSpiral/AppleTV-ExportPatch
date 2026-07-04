/* Runtime dump - EMRowMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMRowMapper : CMMapper
{
    EDRowBlock * mRowBlock;
    struct EDRowInfo * mRowInfo;
    double * columnGrid;
    unsigned int columnCount;
}

+ (void)mapEmptyRowAt:(id)arg0 colspan:(unsigned int)arg1 height:(double)arg2;

- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (char)isColumnHidden:(unsigned int)arg0;
- (struct EDCellHeader *)cellWithColumnNumber:(unsigned int)arg0;
- (void)insertEmptyCellAt:(id)arg0 withColSpan:(unsigned int)arg1 height:(double)arg2;
- (void)mapEmptyCellsAt:(id)arg0 withState:(NSObject *)arg1 firstColumn:(unsigned int)arg2 lastColumn:(unsigned int)arg3;
- (EMRowMapper *)initWithEDRowBlock:(id /* block */)arg0 rowInfo:(struct EDRowInfo *)arg1 parent:(NSObject *)arg2;
- (char)isMergedCell:(struct EDCellHeader *)arg0;

@end
