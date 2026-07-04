/* Runtime dump - BRCPeriodicSyncOperation
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCPeriodicSyncOperation : _BRCOperation <BRCOperationSubclass>
{
    BRCContainerScheduler * _scheduler;
    CKServerChangeToken * _metadataChangeToken;
}

@property (readonly, nonatomic) BRCContainerScheduler * scheduler;
@property (readonly, nonatomic) CKServerChangeToken * metadataChangeToken;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)main;
- (void).cxx_destruct;
- (char)shouldRetryForError:(NSError *)arg0;
- (BRCPeriodicSyncOperation *)initWithContainerScheduler:(BRCContainerScheduler *)arg0 metadataChangeToken:(CKServerChangeToken *)arg1;
- (BRCContainerScheduler *)scheduler;
- (CKServerChangeToken *)metadataChangeToken;

@end
