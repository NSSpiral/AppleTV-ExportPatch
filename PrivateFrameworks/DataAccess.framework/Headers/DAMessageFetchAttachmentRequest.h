/* Runtime dump - DAMessageFetchAttachmentRequest
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAMessageFetchAttachmentRequest : NSObject
{
    NSString * _messageID;
    NSString * _attachmentName;
}

@property (copy, nonatomic) NSString * messageID;
@property (copy, nonatomic) NSString * attachmentName;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void).cxx_destruct;
- (void)setMessageID:(NSString *)arg0;
- (void)setAttachmentName:(NSString *)arg0;
- (NSString *)attachmentName;
- (NSString *)messageID;
- (DAMessageFetchAttachmentRequest *)initWithAttachmentName:(NSString *)arg0 andMessageServerID:(NSObject *)arg1;

@end
