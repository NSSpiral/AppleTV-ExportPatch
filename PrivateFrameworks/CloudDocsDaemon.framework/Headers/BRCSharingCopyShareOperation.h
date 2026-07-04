/* Runtime dump - BRCSharingCopyShareOperation
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSharingCopyShareOperation : _BRCFrameworkOperation <BRCOperationSubclass>
{
    CKShareID * _shareID;
}

@property (retain, nonatomic) CKShareID * shareID;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (BRCSharingCopyShareOperation *)initWithItem:(NSObject *)arg0;
- (void)main;
- (void).cxx_destruct;
- (char)shouldRetryForError:(NSError *)arg0;
- (CKShareID *)shareID;
- (void)setShareID:(CKShareID *)arg0;

@end
