/* Runtime dump - EPTableStyleFlattener
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EPTableStyleFlattener : EPStyleFlattener
{
    EDTable * mTable;
    unsigned int mHeaderRowCount;
    unsigned int mTotalsRowCount;
}

- (void)clearCache;
- (BOOL)isObjectSupported:(id)arg0;
- (int)stripeOffset:(int)arg0 row:(BOOL)arg1;
- (void)cacheSizes:(id)arg0 inObject:(NSObject *)arg1;
- (id)collectionFromWorksheet:(id)arg0;
- (NSObject *)styleFromObject:(NSObject *)arg0;
- (id)newExtractedRowStyleElements:(id)arg0 parentScope:(NSObject *)arg1 row:(int)arg2;
- (id)newExtractedCellStyleElements:(id)arg0 parentScope:(NSObject *)arg1 row:(int)arg2 column:(int)arg3;
- (id)keysInTheOrderTheyShouldBeApplied;
- (int)borderFlagsForStyleType:(int)arg0 row:(int)arg1 column:(int)arg2;
- (id)newExtractedGlobalStyleElements:(id)arg0;

@end
