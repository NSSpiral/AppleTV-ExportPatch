/* Runtime dump - MFDecryptedAttachmentDataProvider
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDecryptedAttachmentDataProvider : NSObject <MFAttachmentDataProvider>
{
    MFMailMessage * _message;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (char)fetchDataForAttachment:(NSObject *)arg0 withDataConsumer:(NSObject *)arg1 error:(id *)arg2;
- (MFDecryptedAttachmentDataProvider *)initWithDecryptedMessage:(NSString *)arg0;
- (NSObject *)messageForAttachment:(NSObject *)arg0;
- (NSObject *)fetchLocalDataForAttachment:(NSObject *)arg0;

@end
