/* Runtime dump - EPFormulaCleaner
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EPFormulaCleaner : EDProcessor
{
    EDSheet * mCurrentSheet;
    EDFormula * mFormula;
    EDFormula * mTokensToClean;
    EDName * mParentName;
    int mRowOffset;
    int mColumnOffset;
    EDRowBlocks * mBaseFormulaRowBlocks;
    OITSUIntDictionary * mNameArrayedTestCache;
    OITSUIntDictionary * mNameCircularReferenceTestCache;
}

- (void)dealloc;
- (void)reset;
- (void)reportWarning:(int)arg0;
- (BOOL)isObjectSupported:(id)arg0;
- (void)applyProcessorToObject:(NSObject *)arg0 sheet:(NSObject *)arg1;
- (void)cleanFormula:(id)arg0 name:(NSString *)arg1;
- (void)cleanFormula:(id)arg0 sheet:(NSObject *)arg1;
- (void)cleanFormula:(id)arg0 sheet:(NSObject *)arg1 name:(NSString *)arg2;
- (void)prepareToProcessFormula:(id)arg0 sheet:(NSObject *)arg1 name:(NSString *)arg2;
- (id)newFormulaToCleanFromSharedFormula:(id)arg0;
- (BOOL)cleanTokenAtIndex:(unsigned int)arg0 tokenOffset:(int *)arg1;
- (BOOL)cleanArray:(unsigned int)arg0;
- (BOOL)cleanRef:(unsigned int)arg0 updateSheet:(char)arg1;
- (BOOL)cleanArea:(unsigned int)arg0 updateSheet:(char)arg1;
- (BOOL)cleanName:(unsigned int)arg0 tokenOffset:(int *)arg1;
- (BOOL)cleanNameX:(unsigned int)arg0 tokenOffset:(int *)arg1;
- (BOOL)cleanRef3D:(unsigned int)arg0;
- (BOOL)cleanArea3D:(unsigned int)arg0;
- (BOOL)cleanFunc:(unsigned int)arg0;
- (BOOL)cleanFuncVar:(unsigned int)arg0;
- (BOOL)cleanUnion:(unsigned int)arg0;
- (BOOL)cleanRange:(unsigned int)arg0 tokenOffset:(int *)arg1;
- (void)addOffsetsToRow:(int *)arg0 rowRelative:(BOOL)arg1 column:(int *)arg2 columnRelative:(BOOL)arg3;
- (BOOL)isThereContentOutsideOfLassoBoundsForSheet:(NSObject *)arg0 rowMin:(int)arg1 rowMax:(int)arg2 columnMin:(int)arg3 columnMax:(int)arg4;
- (BOOL)isReferenceValidInLassoForRow:(int)arg0 rowRelative:(BOOL)arg1 column:(int)arg2 columnRelative:(BOOL)arg3;
- (void)updateWorksheet:(id)arg0 row:(int)arg1 column:(int)arg2 inDictionary:(NSDictionary *)arg3;
- (void)updateSheet:(NSObject *)arg0 row:(int)arg1 rowRelative:(BOOL)arg2 column:(int)arg3 columnRelative:(BOOL)arg4;
- (BOOL)isReferenceValidInLassoForSheet:(NSObject *)arg0 rowMin:(int)arg1 rowMinRelative:(BOOL)arg2 rowMax:(int)arg3 rowMaxRelative:(BOOL)arg4 columnMin:(int)arg5 columnMinRelative:(BOOL)arg6 columnMax:(int)arg7 columnMaxRelative:(BOOL)arg8;
- (void)updateSheet:(NSObject *)arg0 rowMin:(int)arg1 rowMinRelative:(BOOL)arg2 rowMax:(int)arg3 rowMaxRelative:(BOOL)arg4 columnMin:(int)arg5 columnMinRelative:(BOOL)arg6 columnMax:(int)arg7 columnMaxRelative:(BOOL)arg8;
- (BOOL)isLinkReferenceIndexSupported:(unsigned int)arg0 allowExternal:(BOOL)arg1;
- (NSObject *)worksheetFromLinkReferenceIndex:(unsigned int)arg0;
- (BOOL)cleanName:(unsigned int)arg0 nameIndex:(unsigned int)arg1 sheetIndex:(unsigned int)arg2 tokenOffset:(int *)arg3;
- (BOOL)checkSupportedAddInName:(NSString *)arg0 externalLink:(BOOL)arg1;
- (BOOL)checkFunctionId:(int)arg0 tokenIndex:(unsigned int)arg1;
- (unsigned int)useEvaluationStackToGetParameter:(unsigned int)arg0 tokenIndex:(unsigned int)arg1;
- (BOOL)combineCellReferences:(unsigned int)arg0 tokenOffset:(int *)arg1;
- (char)isArrayedFormulaSupported:(id)arg0 allowSimpleRanges:(char)arg1;
- (void)reportWarning:(int)arg0 parameter:(ICSRoleParameter *)arg1;
- (char)doesNameIndexContainCircularReferences:(unsigned int)arg0 sheetIndex:(unsigned int)arg1 previousNameIndexes:(struct set<unsigned int, std::__1::less<unsigned int>, std::__1::allocator<unsigned int> > *)arg2;
- (void)applyMaxCellsInName:(NSString *)arg0;
- (BOOL)useEvaluationStackToCheckFunctionId:(int)arg0 functionName:(NSString *)arg1 tokenIndex:(unsigned int)arg2;
- (id)useEvaluationStackToGetParameter:(unsigned int)arg0 tokenIndex:(unsigned int)arg1 allReferencesAllowed:(BOOL)arg2 success:(BOOL *)arg3;
- (BOOL)checkCustomFunction:(unsigned int)arg0;

@end
