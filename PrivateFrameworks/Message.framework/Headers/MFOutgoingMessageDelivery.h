/* Runtime dump - MFOutgoingMessageDelivery
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFOutgoingMessageDelivery : NSObject
{
    MFMessage * _message;
    MFMutableMessageHeaders * _headers;
    NSArray * _mixedContent;
    char _textPartsAreHTML;
    NSString * _htmlBody;
    MFPlainTextDocument * _plainTextAlternative;
    NSArray * _otherHTMLAndAttachments;
    NSArray * _charsets;
    <MFDeliveryDelegate> * _delegate;
    MailAccount * _archiveAccount;
    DeliveryAccount * _deliveryAccount;
    NSDictionary * _compositionSpecification;
    MFMailDelivery * _currentDeliveryObject;
    char _isUserRequested;
    unsigned long long _conversationFlags;
    long long _originalConversationId;
}

@property (retain, nonatomic) NSDictionary * compositionSpecification;
@property (nonatomic) unsigned long long conversationFlags;
@property (nonatomic) long long originalConversationId;
@property (nonatomic) char isUserRequested;

+ (NSString *)newWithMessage:(MFMessage *)arg0;
+ (NSDictionary *)newWithHeaders:(MFMutableMessageHeaders *)arg0 mixedContent:(NSArray *)arg1 textPartsAreHTML:(char)arg2;
+ (NSDictionary *)newWithHeaders:(MFMutableMessageHeaders *)arg0 HTML:(id)arg1 plainTextAlternative:(MFPlainTextDocument *)arg2 other:(id)arg3 charsets:(NSArray *)arg4;

- (void)dealloc;
- (void)setDelegate:(<MFDeliveryDelegate> *)arg0;
- (MFMessage *)message;
- (NSNumber *)account;
- (void)setAccount:(NSObject *)arg0;
- (NSDictionary *)compositionSpecification;
- (id)deliverSynchronously;
- (NSDictionary *)originalHeaders;
- (MFOutgoingMessageDelivery *)initWithHeaders:(MFMutableMessageHeaders *)arg0 mixedContent:(NSArray *)arg1 textPartsAreHTML:(char)arg2;
- (MFOutgoingMessageDelivery *)initWithHeaders:(MFMutableMessageHeaders *)arg0 HTML:(id)arg1 plainTextAlternative:(MFPlainTextDocument *)arg2 other:(id)arg3 charsets:(NSArray *)arg4;
- (void)setArchiveAccount:(MailAccount *)arg0;
- (int)deliveryStatus;
- (void)setCompositionSpecification:(NSDictionary *)arg0;
- (unsigned long long)conversationFlags;
- (void)setConversationFlags:(unsigned long long)arg0;
- (char)isUserRequested;
- (void)setIsUserRequested:(char)arg0;
- (MFMailDelivery *)_currentDeliveryObject;
- (NSDictionary *)_deliverSynchronouslyWithCurrentSettings:(char)arg0;
- (id)_deliveryAccountForInitializers;
- (long long)originalConversationId;
- (void)setOriginalConversationId:(long long)arg0;
- (MFOutgoingMessageDelivery *)initWithMessage:(MFMessage *)arg0;

@end
