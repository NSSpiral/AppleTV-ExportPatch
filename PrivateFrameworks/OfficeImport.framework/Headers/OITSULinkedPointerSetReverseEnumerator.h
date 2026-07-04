/* Runtime dump - OITSULinkedPointerSetReverseEnumerator
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSULinkedPointerSetReverseEnumerator : NSEnumerator
{
    OITSULinkedPointerSetEntry * mTail;
    OITSULinkedPointerSetEntry * mLastUsed;
}

- (NSObject *)nextObject;
- (OITSULinkedPointerSetReverseEnumerator *)initWithLastEntry:(NSDictionary *)arg0;

@end
