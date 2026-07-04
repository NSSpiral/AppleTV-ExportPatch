/* Runtime dump - EPPivotTableStyleFlattener
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EPPivotTableStyleFlattener : EPStyleFlattener
{
    EDPivotTable * mPivotTable;
    long mFirstHeaderRow;
    long mFirstDataRow;
    long mFirstDataColumn;
    unsigned int mRowFieldsCount;
    unsigned int mColumnFieldsCount;
    unsigned int mPageFieldsCount;
}

- (void)clearCache;
- (BOOL)isObjectSupported:(id)arg0;
- (int)stripeOffset:(int)arg0 row:(BOOL)arg1;
- (void)addRowSubheadingLevel:(unsigned int)arg0 to:(NSObject *)arg1;
- (void)addSubtotalRowLevel:(unsigned int)arg0 to:(NSObject *)arg1;
- (void)addColumnSubheadingLevel:(unsigned int)arg0 to:(NSObject *)arg1;
- (void)addSubtotalColumnLevel:(unsigned int)arg0 to:(NSObject *)arg1;
- (void)cacheSizes:(id)arg0 inObject:(NSObject *)arg1;
- (id)collectionFromWorksheet:(id)arg0;
- (NSObject *)styleFromObject:(NSObject *)arg0;
- (id)newExtractedRowStyleElements:(id)arg0 parentScope:(NSObject *)arg1 row:(int)arg2;
- (id)newExtractedCellStyleElements:(id)arg0 parentScope:(NSObject *)arg1 row:(int)arg2 column:(int)arg3;
- (id)keysInTheOrderTheyShouldBeApplied;
- (int)borderFlagsForStyleType:(int)arg0 row:(int)arg1 column:(int)arg2;
- (unsigned int)constrainLevel:(unsigned int)arg0;

@end
