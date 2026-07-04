/* Runtime dump - MFAttachmentComposeManager
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFAttachmentComposeManager : MFAttachmentManager
{
    NSMutableArray * _composeAttachments;
}

- (void)dealloc;
- (void)removeAttachmentForURL:(NSURL *)arg0;
- (NSData *)attachmentForData:(NSData *)arg0 mimeType:(NSString *)arg1 fileName:(NSString *)arg2 contentID:(NSString *)arg3 context:(NSObject *)arg4;
- (NSString *)_composeAttachmentDataProviderForContext:(NSObject *)arg0;
- (NSObject *)_fetchDataForAttachment:(NSObject *)arg0 withProvider:(NSObject *)arg1;
- (NSString *)attachmentsForContext:(NSObject *)arg0;
- (void)loadAttachmentURL:(NSURL *)arg0 forContextID:(NSObject *)arg1;
- (void)updateAttachment:(NSObject *)arg0 withNewData:(char)arg1;
- (void)recordPasteboardAttachmentsForURLs:(id)arg0 forContextID:(NSObject *)arg1;
- (void)recordUndoAttachmentsForURLs:(id)arg0 forContextID:(NSObject *)arg1;

@end
