/* Runtime dump - MFSparseMutable64IndexSet
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFSparseMutable64IndexSet : NSObject <NSCopying, NSMutableCopying>
{
    unsigned int _count;
    unsigned int _storageSize;
    unsigned int _cursor;
    unsigned long long * _storage;
}

+ (NSIndexSet *)indexSet;

- (void)dealloc;
- (unsigned int)count;
- (NSString *)description;
- (MFSparseMutable64IndexSet *)copyWithZone:(struct _NSZone *)arg0;
- (void)addIndex:(unsigned long long)arg0;
- (unsigned long long)firstIndex;
- (unsigned long long)indexGreaterThanIndex:(unsigned long long)arg0;
- (char)containsIndex:(unsigned long long)arg0;
- (void)removeIndex:(unsigned long long)arg0;
- (void)addIndexes:(NSArray *)arg0;
- (MFSparseMutable64IndexSet *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (unsigned long)_insertionPositionOfIndex:(unsigned long long)arg0;
- (void)_incrementStorageIfNecessaryForCount:(unsigned int)arg0;
- (unsigned long)_positionOfIndex:(unsigned long long)arg0;
- (void)_garbageCollectStorageIfNecessary;

@end
