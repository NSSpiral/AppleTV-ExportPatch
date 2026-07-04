/* Runtime dump - MFLocalizedMessageHeaders
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFLocalizedMessageHeaders : MFMessageHeaders

+ (NSDictionary *)localizedHeaders;
+ (NSDictionary *)localizedHeadersFromEnglishHeaders:(NSDictionary *)arg0;
+ (NSDictionary *)englishHeadersFromLocalizedHeaders:(NSDictionary *)arg0;

- (NSArray *)copyFormattedHeaderValueFromAddressList:(NSArray *)arg0;
- (void)appendHeaderMarkupForKey:(NSString *)arg0 value:(NSObject *)arg1 toString:(NSString *)arg2;
- (NSString *)markupString;

@end
