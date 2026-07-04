/* Runtime dump - TSPObjectUUIDMap
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPObjectUUIDMap : NSObject
{
    int _assertOnReadCount;
    TSPObjectContext * _context;
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _inMemoryUUIDDictionary;
    NSMutableSet * _UUIDsWithSuppressedAssertions;
    TSPPersistedObjectUUIDMap * _persistedUUIDMap;
}

- (void)object:(NSObject *)arg0 didChangeUUIDToValue:(id)arg1 fromValue:(NSValue *)arg2;
- (void)beginAssertOnRead;
- (void)endAssertOnRead;
- (id)objectWithUUID:(id)arg0 onlyIfLoaded:(char)arg1 validateNewObjects:(char)arg2 identifier:(long long *)arg3;
- (char)objectUUIDIsInDocument:(NSObject *)arg0;
- (char)shouldSuppressAssertionForObjectUUID:(id)arg0;
- (void)setPersistedUUIDMap:(TSPPersistedObjectUUIDMap *)arg0;
- (void)objectWasAddedToDocument:(NSObject *)arg0 options:(unsigned int)arg1;
- (void)objectWillBeRemovedFromDocument:(NSObject *)arg0;
- (TSPObjectUUIDMap *)init;
- (TSPObjectUUIDMap *)initWithContext:(TSPObjectContext *)arg0;
- (void).cxx_destruct;

@end
