/* Runtime dump - OITSUMutableLinkedPointerSet
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUMutableLinkedPointerSet : NSObject <NSFastEnumeration>
{
    struct __CFDictionary * mDictionary;
    OITSULinkedPointerSetEntry * mHead;
    OITSULinkedPointerSetEntry * mTail;
}

- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (void)dealloc;
- (void)removeObject:(struct objc_method *)arg0;
- (unsigned int)count;
- (OITSUMutableLinkedPointerSet *)init;
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
