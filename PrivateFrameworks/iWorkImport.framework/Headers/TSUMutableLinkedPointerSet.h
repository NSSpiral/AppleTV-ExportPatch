/* Runtime dump - TSUMutableLinkedPointerSet
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUMutableLinkedPointerSet : NSObject <NSFastEnumeration>
{
    struct __CFDictionary * mDictionary;
    TSULinkedPointerSetEntry * mHead;
    TSULinkedPointerSetEntry * mTail;
}

- (void)encodeToReferenceMessage:(struct RepeatedPtrField<TSP::Reference> *)arg0 archiver:(NSObject *)arg1;
- (void)encodeToOwnedReferenceMessage:(struct RepeatedPtrField<TSP::Reference> *)arg0 archiver:(NSObject *)arg1;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (void)dealloc;
- (void)removeObject:(struct objc_method *)arg0;
- (unsigned int)count;
- (TSUMutableLinkedPointerSet *)init;
- (void)addObject:(struct objc_method *)arg0;
- (void)removeAllObjects;
- (NSObject *)firstObject;
- (char)isEqual:(NSObject *)arg0;
- (NSArray *)array;
- (char)containsObject:(NSObject *)arg0;
- (NSEnumerator *)reverseObjectEnumerator;
- (NSEnumerator *)objectEnumerator;
- (NSObject *)objectEnumeratorAfterObject:(NSObject *)arg0;
- (char)hasObjects;
- (void)insertFirstObject:(NSObject *)arg0;

@end
