/* Runtime dump - BRCFetchiWorkSharingInfoOperation
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFetchiWorkSharingInfoOperation : _BRCOperation <BRCOperationSubclass>
{
    CKRecordID * _recordID;
}

@property (retain, nonatomic) CKRecordID * recordID;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)main;
- (void).cxx_destruct;
- (char)shouldRetryForError:(NSError *)arg0;
- (BRCFetchiWorkSharingInfoOperation *)initWithDocumentItem:(NSObject *)arg0;
- (CKRecordID *)recordID;
- (void)setRecordID:(CKRecordID *)arg0;

@end
