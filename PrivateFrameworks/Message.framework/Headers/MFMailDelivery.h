/* Runtime dump - MFMailDelivery
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMailDelivery : NSObject
{
    id _delegate;
    MFMessage * _message;
    MailAccount * _archiveAccount;
    DeliveryAccount * _account;
    MFDeliveryResult * _result;
    MFMutableMessageHeaders * _headers;
    NSDictionary * _compositionSpecification;
    NSArray * _mixedContent;
    char _textPartsAreHTML;
    NSString * _htmlString;
    MFPlainTextDocument * _plainTextAlternative;
    NSArray * _otherStringsAndAttachments;
    NSArray * _charsets;
    id _threaded;
    id _useCellDataOnly;
    char _isUserRequested;
    unsigned long long _conversationFlags;
}

@property (retain, nonatomic) NSDictionary * compositionSpecification;
@property (nonatomic) unsigned long long conversationFlags;
@property (nonatomic) char isUserRequested;

+ (NSString *)newWithMessage:(MFMessage *)arg0;
+ (NSDictionary *)newWithHeaders:(MFMutableMessageHeaders *)arg0 mixedContent:(NSArray *)arg1 textPartsAreHTML:(char)arg2;
+ (NSDictionary *)newWithHeaders:(MFMutableMessageHeaders *)arg0 HTML:(id)arg1 plainTextAlternative:(MFPlainTextDocument *)arg2 other:(id)arg3 charsets:(NSArray *)arg4;
+ (char)deliverMessage:(NSString *)arg0;

- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)delegate;
- (MFMessage *)message;
- (DeliveryAccount *)account;
- (void)setAccount:(DeliveryAccount *)arg0;
- (NSDictionary *)compositionSpecification;
- (id)deliverSynchronously;
- (NSObject *)newMessageWriter;
- (NSDictionary *)originalHeaders;
- (id)headersForDelivery;
- (NSData *)deliverMessageData:(NSData *)arg0 toRecipients:(NSArray *)arg1;
- (MFMailDelivery *)initWithHeaders:(MFMutableMessageHeaders *)arg0 mixedContent:(NSArray *)arg1 textPartsAreHTML:(char)arg2;
- (MFMailDelivery *)initWithHeaders:(MFMutableMessageHeaders *)arg0 HTML:(id)arg1 plainTextAlternative:(MFPlainTextDocument *)arg2 other:(id)arg3 charsets:(NSArray *)arg4;
- (MailAccount *)archiveAccount;
- (void)setArchiveAccount:(MailAccount *)arg0;
- (int)deliveryStatus;
- (NSObject *)deliveryResult;
- (char)shouldSignMessage;
- (char)shouldEncryptMessage;
- (void)deliverAsynchronously;
- (void)setCellDataOnly:(char)arg0;
- (void)setCompositionSpecification:(NSDictionary *)arg0;
- (unsigned long long)conversationFlags;
- (void)setConversationFlags:(unsigned long long)arg0;
- (char)isUserRequested;
- (void)setIsUserRequested:(char)arg0;
- (MFMailDelivery *)initWithMessage:(MFMessage *)arg0;
- (void)archive;

@end
