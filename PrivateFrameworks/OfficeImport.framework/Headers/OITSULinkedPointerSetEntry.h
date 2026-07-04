/* Runtime dump - OITSULinkedPointerSetEntry
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSULinkedPointerSetEntry : NSObject
{
    id mObject;
    OITSULinkedPointerSetEntry * mPrevious;
    OITSULinkedPointerSetEntry * mNext;
}

- (void)dealloc;
- (OITSULinkedPointerSetEntry *)initWithObject:(NSObject *)arg0 previousEntry:(id)arg1;

@end
