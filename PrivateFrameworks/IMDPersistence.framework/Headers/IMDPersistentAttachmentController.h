/* Runtime dump - IMDPersistentAttachmentController
 * Image: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
 */

@interface IMDPersistentAttachmentController : NSObject

+ (IMDPersistentAttachmentController *)sharedInstance;

- (id)_persistentPathForTransfer:(id)arg0;
- (id)saveAttachmentForTransfer:(id)arg0;
- (char)deleteAttachmentForTransfer:(id)arg0;
- (char)cleanseOrphanedFileTransfers;

@end
