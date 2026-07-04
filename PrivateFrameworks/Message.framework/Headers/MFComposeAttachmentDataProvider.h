/* Runtime dump - MFComposeAttachmentDataProvider
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFComposeAttachmentDataProvider : NSObject <MFAttachmentDataProvider>
{
    NSMutableDictionary * _attachments;
    NSMutableDictionary * _attachmentsPasteboard;
    NSMutableDictionary * _attachmentsUndo;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (char)fetchDataForAttachment:(NSObject *)arg0 withDataConsumer:(NSObject *)arg1 error:(id *)arg2;
- (void)addData:(NSData *)arg0 forContentID:(NSObject *)arg1;
- (MFComposeAttachmentDataProvider *)initWithData:(NSData *)arg0 forContentID:(NSObject *)arg1;
- (void)removeDataForAttachment:(NSObject *)arg0;
- (void)recordPasteboardDataForAttachments:(id)arg0;
- (void)recordUndoDataForAttachments:(id)arg0;
- (NSObject *)messageForAttachment:(NSObject *)arg0;
- (NSObject *)fetchLocalDataForAttachment:(NSObject *)arg0;
- (NSObject *)_dataForAttachment:(NSObject *)arg0;

@end
