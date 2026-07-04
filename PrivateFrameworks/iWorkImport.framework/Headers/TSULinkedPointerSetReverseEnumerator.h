/* Runtime dump - TSULinkedPointerSetReverseEnumerator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSULinkedPointerSetReverseEnumerator : NSEnumerator
{
    TSULinkedPointerSetEntry * mTail;
    TSULinkedPointerSetEntry * mLastUsed;
}

- (NSObject *)nextObject;
- (TSULinkedPointerSetReverseEnumerator *)initWithLastEntry:(NSDictionary *)arg0;

@end
