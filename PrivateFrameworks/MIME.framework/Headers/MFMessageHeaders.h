/* Runtime dump - MFMessageHeaders
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMessageHeaders : NSObject <NSCopying>
{
    NSData * _data;
    unsigned long _preferredEncoding;
}

+ (char)shouldDecodeHeaderForKey:(NSString *)arg0;
+ (NSData *)copyAddressListFromEncodedData:(NSData *)arg0 encoding:(unsigned long)arg1;
+ (NSArray *)encodedDataForAddressList:(NSArray *)arg0 splittingAtLength:(unsigned int)arg1 firstLineBuffer:(unsigned int)arg2;
+ (NSString *)addressListFromEncodedString:(NSString *)arg0;
+ (NSString *)uniqueHeaderKeyStringForString:(NSString *)arg0;
+ (char)isStructuredHeaderKey:(NSString *)arg0;
+ (NSDictionary *)basicHeaders;

- (NSArray *)allHeaderKeys;
- (id)copyAddressListForReplyTo;
- (void)dealloc;
- (MFMessageHeaders *)init;
- (NSString *)description;
- (MFMessageHeaders *)mutableCopy;
- (MFMessageHeaders *)copyWithZone:(struct _NSZone *)arg0;
- (NSData *)_decodeHeaderKeysFromData:(NSData *)arg0;
- (void)_setCapitalizedKey:(NSString *)arg0 forKey:(NSString *)arg1;
- (NSString *)copyFirstNonDecodedHeaderForKey:(NSString *)arg0;
- (unsigned long)_contentTypeEncoding;
- (NSData *)copyDecodedStringFromHeaderData:(NSData *)arg0 withRange:(struct _NSRange)arg1;
- (NSString *)_copyHeaderValueForKey:(NSString *)arg0 offset:(unsigned int *)arg1 decoded:(char)arg2;
- (NSString *)_copyHeaderValueForKey:(NSString *)arg0;
- (NSString *)_copyAddressListForKey:(NSString *)arg0;
- (NSString *)copyFirstHeaderForKey:(NSString *)arg0;
- (NSString *)_headerValueForKey:(NSString *)arg0 offset:(unsigned int *)arg1;
- (char)_isStructuredHeaderKey:(NSString *)arg0;
- (NSString *)_headerValueForKey:(NSString *)arg0;
- (char)hasHeaderForKey:(NSString *)arg0;
- (char)messageIsFromEntourage;
- (NSMutableData *)headerData;
- (unsigned long)preferredEncoding;
- (void)setPreferredEncoding:(unsigned long)arg0;
- (NSString *)firstHeaderForKey:(NSString *)arg0;
- (NSDictionary *)encodedHeaders;
- (NSObject *)copyAddressListForResentFrom;
- (NSObject *)copyAddressListForSender;
- (void)appendHeaderData:(NSData *)arg0 andRecipients:(id)arg1;
- (id)copyAddressListForTo;
- (id)copyAddressListForCc;
- (NSString *)firstSenderAddress;
- (NSString *)copyHeadersForKey:(NSString *)arg0;
- (id)copyAddressListForBcc;
- (NSString *)copyFirstStringValueForKey:(NSString *)arg0;
- (MFMessageHeaders *)initWithHeaderData:(NSMutableData *)arg0 encoding:(unsigned long)arg1;
- (NSString *)headersForKey:(NSString *)arg0;
- (NSString *)_capitalizedKeyForKey:(NSString *)arg0;
- (NSArray *)references;

@end
