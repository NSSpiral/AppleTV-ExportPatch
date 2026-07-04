/* Runtime dump - EDOptimizedStringsCollection
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDOptimizedStringsCollection : EDCollection
{
    NSMutableDictionary * mStringDictionary;
}

- (void)dealloc;
- (EDOptimizedStringsCollection *)init;
- (unsigned int)addObject:(struct objc_method *)arg0;
- (void)replaceObjectAtIndex:(unsigned int)arg0 withObject:(NSObject *)arg1;
- (unsigned int)addOrEquivalentObject:(NSObject *)arg0;

@end
