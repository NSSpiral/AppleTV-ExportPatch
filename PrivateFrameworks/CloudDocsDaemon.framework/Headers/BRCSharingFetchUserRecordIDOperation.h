/* Runtime dump - BRCSharingFetchUserRecordIDOperation
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSharingFetchUserRecordIDOperation : _BRCOperation <BRCOperationSubclass>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)main;
- (char)shouldRetryForError:(NSError *)arg0;
- (BRCSharingFetchUserRecordIDOperation *)initWithSyncContext:(BRCSyncContext *)arg0;

@end
