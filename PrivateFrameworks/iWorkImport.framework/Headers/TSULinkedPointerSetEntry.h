/* Runtime dump - TSULinkedPointerSetEntry
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSULinkedPointerSetEntry : NSObject
{
    id mObject;
    TSULinkedPointerSetEntry * mPrevious;
    TSULinkedPointerSetEntry * mNext;
}

- (void)dealloc;
- (TSULinkedPointerSetEntry *)initWithObject:(NSObject *)arg0 previousEntry:(id)arg1;

@end
