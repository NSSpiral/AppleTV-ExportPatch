/* Runtime dump - CTMessage
 * Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTMessage : NSObject
{
    NSObject<CTMessageAddress><NSCopying> * _sender;
    NSMutableArray * _recipients;
    NSMutableArray * _items;
    NSDictionary * _rawHeaders;
    NSDate * _date;
    unsigned int _messageId;
    int _messageType;
    CTPhoneNumber * _serviceCenter;
    NSString * _subject;
    NSString * _contentType;
    NSMutableDictionary * _contentTypeParams;
    unsigned int _replaceMessage;
    NSString * _countryCode;
    NSUUID * _uuid;
}

@property (readonly) NSArray * recipients;
@property (readonly) NSDate * date;
@property (readonly) NSArray * items;
@property (readonly) NSDictionary * rawHeaders;
@property (readonly) unsigned int replaceMessage;
@property (nonatomic) unsigned int messageId;
@property (nonatomic) int messageType;
@property (copy, nonatomic) CTPhoneNumber * serviceCenter;
@property (copy, nonatomic) NSString * subject;
@property (copy, nonatomic) NSObject<CTMessageAddress><NSCopying> * sender;
@property (copy, nonatomic) NSString * contentType;
@property (readonly, copy, nonatomic) NSString * countryCode;
@property (retain, nonatomic) NSUUID * uniqueIdentifier;

- (CTMessage *)initWithDate:(NSDate *)arg0;
- (void)addPhoneRecipient:(id)arg0;
- (void)addEmailRecipient:(id)arg0;
- (void)setRawHeaders:(NSDictionary *)arg0;
- (void)setReplaceMessage:(unsigned int)arg0;
- (void)removeRecipient:(_MFPlaceholderComposeRecipient *)arg0;
- (void)removeRecipientsInArray:(NSArray *)arg0;
- (void)setRecipient:(_MFPlaceholderComposeRecipient *)arg0;
- (void)setRecipients:(NSArray *)arg0;
- (NSData *)addData:(NSData *)arg0 withContentType:(NSString *)arg1;
- (id)addPart:(id)arg0;
- (void)removePartAtIndex:(unsigned int)arg0;
- (NSString *)contentTypeParameterWithName:(NSString *)arg0;
- (void)addContentTypeParameterWithName:(NSString *)arg0 value:(NSObject *)arg1;
- (NSArray *)allContentTypeParameterNames;
- (unsigned int)messageId;
- (void)setMessageId:(unsigned int)arg0;
- (int)messageType;
- (void)setMessageType:(int)arg0;
- (CTPhoneNumber *)serviceCenter;
- (void)setServiceCenter:(CTPhoneNumber *)arg0;
- (NSDictionary *)rawHeaders;
- (unsigned int)replaceMessage;
- (void)dealloc;
- (CTMessage *)init;
- (NSString *)description;
- (NSDate *)date;
- (NSArray *)items;
- (NSObject<CTMessageAddress><NSCopying> *)sender;
- (NSUUID *)uniqueIdentifier;
- (void)setSubject:(NSString *)arg0;
- (void)setUniqueIdentifier:(NSUUID *)arg0;
- (void)setSender:(NSObject<CTMessageAddress><NSCopying> *)arg0;
- (NSString *)subject;
- (NSString *)addText:(NSString *)arg0;
- (void)addRecipient:(_MFPlaceholderComposeRecipient *)arg0;
- (NSArray *)recipients;
- (void)setCountryCode:(NSString *)arg0;
- (NSString *)countryCode;
- (void)setContentType:(NSString *)arg0;
- (NSString *)contentType;

@end
