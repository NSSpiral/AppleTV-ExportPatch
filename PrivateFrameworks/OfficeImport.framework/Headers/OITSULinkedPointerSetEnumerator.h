/* Runtime dump - OITSULinkedPointerSetEnumerator
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSULinkedPointerSetEnumerator : NSEnumerator
{
    OITSULinkedPointerSetEntry * mHead;
    OITSULinkedPointerSetEntry * mLastUsed;
}

- (NSObject *)nextObject;
- (OITSULinkedPointerSetEnumerator *)initWithFirstEntry:(NSString *)arg0;

@end
