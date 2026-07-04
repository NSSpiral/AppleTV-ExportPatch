/* Runtime dump - EPStyleFlattener
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EPStyleFlattener : EDProcessor
{
    EDWorksheet * mWorksheet;
    EDRowBlocks * mRowBlocks;
    EDRowBlock * mCurrentRowBlock;
    EDColumnInfoCollection * mColumnInfos;
    NSArray * mKeys;
    NSMutableArray * mRanges;
    ECIntToTwoIntKeyCache * mFlattenedStyleCache;
    ECIntToTwoIntKeyCache * mFillCache;
    int mFirstRow;
    int mLastRow;
    int mFirstColumn;
    int mLastColumn;
    unsigned int mFirstRowStripeSize;
    unsigned int mSecondRowStripeSize;
    unsigned int mFirstColumnStripeSize;
    unsigned int mSecondColumnStripeSize;
}

- (void)dealloc;
- (void)clearCache;
- (void)applyProcessorToObject:(NSObject *)arg0 sheet:(NSObject *)arg1;
- (NSArray *)newExtractedKeys:(NSArray *)arg0 from:(NSObject *)arg1 parent:(NSObject *)arg2;
- (void)cacheRange:(NSObject *)arg0;
- (void)cacheSizes:(id)arg0 inObject:(NSObject *)arg1;
- (id)collectionFromWorksheet:(id)arg0;
- (NSObject *)styleFromObject:(NSObject *)arg0;
- (id)newExtractedRowStyleElements:(id)arg0 parentScope:(NSObject *)arg1 row:(int)arg2;
- (id)newExtractedCellStyleElements:(id)arg0 parentScope:(NSObject *)arg1 row:(int)arg2 column:(int)arg3;
- (id)keysInTheOrderTheyShouldBeApplied;
- (int)borderFlagsForStyleType:(int)arg0 row:(int)arg1 column:(int)arg2;
- (void)processObject:(NSObject *)arg0;
- (struct EDCellHeader *)cellWithSetupStyleAtRowNumber:(int)arg0 columnNumber:(int)arg1;
- (void)applyStyleElements:(id)arg0 toCell:(struct EDCellHeader *)arg1 row:(int)arg2 column:(int)arg3;
- (void)applyDifferentialStyle:(NSObject *)arg0 borderFlags:(int)arg1 precedence:(unsigned int)arg2 toCell:(struct EDCellHeader * *)arg3 row:(struct EDCellHeader)arg4 column:(int)arg5;
- (id)copyFlattenBorders:(id)arg0 differentialBorders:(id)arg1 borderFlags:(int)arg2 precedence:(unsigned int)arg3 row:(int)arg4 column:(int)arg5;
- (unsigned int)flattenFillIndex:(unsigned int)arg0 differentialFill:(struct _xmlNode *)arg1;
- (UIFont *)copyFlattenFont:(UIFont *)arg0 differentialFont:(UIFont *)arg1;
- (id)copyFlattenBorder:(int)arg0 borders:(EDBorders *)arg1 differentialBorders:(id)arg2 flag:(BOOL)arg3 precedence:(unsigned int)arg4 row:(int)arg5 column:(int)arg6;
- (NSObject *)wrapDifferentialStyleInATableStyleElement:(NSObject *)arg0 type:(int)arg1;
- (id)newExtractedGlobalStyleElements:(id)arg0;

@end
