/* Runtime dump - MFMutableMessageHeaders
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMutableMessageHeaders : MFMessageHeaders
{
    NSMutableDictionary * _headersAdded;
    NSMutableArray * _headersRemoved;
}

- (NSArray *)allHeaderKeys;
- (void)setAddressListForBcc:(id)arg0;
- (void)dealloc;
- (NSString *)description;
- (MFMutableMessageHeaders *)mutableCopy;
- (void)setAddressList:(NSArray *)arg0 forKey:(NSString *)arg1;
- (NSString *)_copyHeaderValueForKey:(NSString *)arg0 offset:(unsigned int *)arg1 decoded:(char)arg2;
- (NSString *)_copyHeaderValueForKey:(NSString *)arg0;
- (NSString *)_headerValueForKey:(NSString *)arg0;
- (char)hasHeaderForKey:(NSString *)arg0;
- (void)_appendHeaderKey:(NSString *)arg0 value:(NSObject *)arg1 toData:(NSData *)arg2;
- (void)_appendAddedHeaderKey:(NSString *)arg0 value:(NSObject *)arg1 toData:(NSData *)arg2;
- (void)mergeHeaders:(NSDictionary *)arg0;
- (NSString *)firstHeaderForKey:(NSString *)arg0;
- (NSDictionary *)encodedHeaders;
- (void)setHeader:(NSString *)arg0 forKey:(NSString *)arg1;
- (void)stripInternalHeaders;
- (void)removeHeaderForKey:(NSString *)arg0;
- (void)setAddressListForSender:(NSObject *)arg0;
- (void)setAddressListForTo:(id)arg0;
- (void)setAddressListForCc:(id)arg0;
- (void)setReferences:(NSArray *)arg0;

@end
