/* Runtime dump - TSCENamedReferenceTrie
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCENamedReferenceTrie : NSObject
{
    struct TSCENamedReferenceTrieNode mRoot;
    NSLocale * mLocale;
}

- (NSString *)trackedReferencesExactlyMatchingString:(NSString *)arg0 scopedToTable:(struct __CFUUID *)arg1;
- (char)replaceName:(NSString *)arg0 withName:(NSString *)arg1 inTable:(struct __CFUUID *)arg2 trackedReference:(TSCETrackedReference *)arg3;
- (char)insertName:(NSString *)arg0 inTable:(struct __CFUUID *)arg1 trackedReference:(TSCETrackedReference *)arg2;
- (void)deleteName:(NSString *)arg0 inTable:(struct __CFUUID *)arg1 trackedReference:(TSCETrackedReference *)arg2;
- (NSString *)trackedReferencesMatchingString:(NSString *)arg0 scopedToTable:(struct __CFUUID *)arg1;
- (void)dealloc;
- (NSString *)description;
- (void).cxx_construct;
- (void).cxx_destruct;
- (TSCENamedReferenceTrie *)initWithLocale:(NSObject *)arg0;

@end
