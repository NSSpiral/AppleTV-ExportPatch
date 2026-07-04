/* Runtime dump - IMDAttachmentStore
 * Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDAttachmentStore : NSObject

+ (IMDAttachmentStore *)sharedInstance;

- (char)storeAttachment:(NSObject *)arg0 associateWithMessageWithGUID:(NSString *)arg1;
- (NSString *)attachmentWithGUID:(NSString *)arg0;
- (char)updateAttachment:(NSObject *)arg0;
- (char)removeAttachment:(NSObject *)arg0 fromMessageWithGUID:(NSString *)arg1;
- (char)deleteAttachmentsWithGUIDs:(id)arg0;
- (char)deleteAttachmentDataForTransfer:(id)arg0;
- (char)deleteAttachmentWithGUID:(NSString *)arg0;

@end
