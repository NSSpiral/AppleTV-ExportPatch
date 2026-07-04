/* Runtime dump - MFRFC822AttachmentDataProvider
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFRFC822AttachmentDataProvider : NSObject <MFAttachmentDataProvider>
{
    NSData * _messageData;
    MFMimePart * _parentPart;
    MFMailMessage * _message;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (char)fetchDataForAttachment:(NSObject *)arg0 withDataConsumer:(NSObject *)arg1 error:(id *)arg2;
- (MFRFC822AttachmentDataProvider *)initWithMessageData:(NSData *)arg0 parentPart:(MFMimePart *)arg1;
- (NSObject *)messageForAttachment:(NSObject *)arg0;
- (NSObject *)fetchLocalDataForAttachment:(NSObject *)arg0;

@end
