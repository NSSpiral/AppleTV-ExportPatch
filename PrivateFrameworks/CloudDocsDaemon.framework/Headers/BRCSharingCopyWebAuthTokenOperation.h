/* Runtime dump - BRCSharingCopyWebAuthTokenOperation
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSharingCopyWebAuthTokenOperation : _BRCFrameworkOperation <BRCOperationSubclass>
{
    NSString * _ckContainerID;
}

@property (retain, nonatomic) NSString * ckContainerID;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)main;
- (void).cxx_destruct;
- (char)shouldRetryForError:(NSError *)arg0;
- (BRCSharingCopyWebAuthTokenOperation *)initWithSyncContext:(BRCSyncContext *)arg0 ckContainerID:(NSString *)arg1;
- (NSString *)ckContainerID;
- (void)setCkContainerID:(NSString *)arg0;

@end
