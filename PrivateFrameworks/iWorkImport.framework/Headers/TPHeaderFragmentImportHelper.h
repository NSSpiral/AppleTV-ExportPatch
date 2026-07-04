/* Runtime dump - TPHeaderFragmentImportHelper
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPHeaderFragmentImportHelper : NSObject
{
    id * _fragments;
    TSPObjectContext * _storageContext;
    TSPObjectContext * _objectsContext;
    NSCharacterSet * _whitespaceCharacterSet;
    NSCharacterSet * _nonWhitespaceCharacterSet;
}

- (TPHeaderFragmentImportHelper *)initWithFragments:(id *)arg0 storageContext:(TSPObjectContext *)arg1 objectsContext:(TSPObjectContext *)arg2;
- (void)processFragmentsForSpaceFormatting;
- (char)p_storageIsEffectivelyEmpty:(id)arg0;
- (unsigned int)countOfWhitespaceRunsInString:(NSString *)arg0 ranges:(NSArray *)arg1;
- (void)p_splitStorageInThree:(int)arg0 withRanges:(NSArray *)arg1;
- (void)p_splitStorageInTwo:(int)arg0 withRanges:(NSArray *)arg1 firstTarget:(struct _NSRange)arg2 secondTarget:(NSObject *)arg3;
- (void)dealloc;

@end
