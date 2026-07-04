/* Runtime dump - MFDADeferredMessageMoveOperation
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDADeferredMessageMoveOperation : MFOfflineCacheOperation <MFDAOfflineCacheOperation>
{
    NSArray * _sourceRemoteIDs;
    NSArray * _originalFlags;
    NSArray * _temporaryRemoteIDs;
    NSString * _sourceMailboxID;
    NSString * _destinationMailboxID;
}

- (void)dealloc;
- (MFDADeferredMessageMoveOperation *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (char)performWithAccount:(NSObject *)arg0 offlineCache:(NSObject *)arg1;
- (MFDADeferredMessageMoveOperation *)initWithMessages:(NSArray *)arg0 temporaryIDs:(id)arg1 sourceMailbox:(id)arg2 destinationMailbox:(id)arg3;

@end
