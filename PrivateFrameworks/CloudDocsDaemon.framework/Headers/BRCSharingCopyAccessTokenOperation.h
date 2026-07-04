/* Runtime dump - BRCSharingCopyAccessTokenOperation
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSharingCopyAccessTokenOperation : _BRCFrameworkOperation <BRCOperationSubclass>
{
    char _wantsSharePermissions;
    CKRecordID * _recordID;
    CKShareID * _shareID;
}

@property (nonatomic) char wantsSharePermissions;
@property (retain, nonatomic) CKRecordID * recordID;
@property (retain, nonatomic) CKShareID * shareID;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (BRCSharingCopyAccessTokenOperation *)initWithItem:(NSObject *)arg0;
- (void)main;
- (void).cxx_destruct;
- (char)shouldRetryForError:(NSError *)arg0;
- (CKRecordID *)recordID;
- (void)setRecordID:(CKRecordID *)arg0;
- (CKShareID *)shareID;
- (void)setShareID:(CKShareID *)arg0;
- (char)wantsSharePermissions;
- (void)setWantsSharePermissions:(char)arg0;

@end
