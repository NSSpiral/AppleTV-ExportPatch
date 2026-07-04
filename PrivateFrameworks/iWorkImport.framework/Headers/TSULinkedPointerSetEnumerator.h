/* Runtime dump - TSULinkedPointerSetEnumerator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSULinkedPointerSetEnumerator : NSEnumerator
{
    TSULinkedPointerSetEntry * mHead;
    TSULinkedPointerSetEntry * mLastUsed;
}

- (NSObject *)nextObject;
- (TSULinkedPointerSetEnumerator *)initWithFirstEntry:(NSString *)arg0;

@end
