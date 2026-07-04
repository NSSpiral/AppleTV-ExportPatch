/* Runtime dump - AFMessage
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFMessage : AFSiriModelObject
{
    char _outbound;
    AFContactAddress * _senderAddress;
    NSArray * _recipientAddresses;
    NSString * _subjectText;
    NSString * _bodyText;
    NSURL * _attachmentURL;
    NSDate * _sendDate;
    NSString * _chatIdentifier;
}

+ (char)supportsSecureCoding;

- (AFMessage *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (AFMessage *)init;
- (void)setBodyText:(NSString *)arg0;
- (NSString *)bodyText;
- (void).cxx_destruct;
- (id)_aceContextObjectValue;
- (NSURL *)attachmentURL;
- (char)isOutbound;
- (NSString *)subjectText;
- (AFContactAddress *)senderAddress;
- (NSArray *)recipientAddresses;
- (void)setOutbound:(char)arg0;
- (void)setSenderAddress:(AFContactAddress *)arg0;
- (void)setRecipientAddresses:(NSArray *)arg0;
- (void)setSubjectText:(NSString *)arg0;
- (void)setAttachmentURL:(NSURL *)arg0;
- (NSDate *)sendDate;
- (void)setSendDate:(NSDate *)arg0;
- (NSString *)chatIdentifier;
- (void)setChatIdentifier:(NSString *)arg0;

@end
