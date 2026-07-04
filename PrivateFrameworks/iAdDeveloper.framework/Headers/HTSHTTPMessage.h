/* Runtime dump - HTSHTTPMessage
 * Image: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
 */

@interface HTSHTTPMessage : NSObject
{
    NSMutableDictionary * _headers;
    NSData * _body;
    NSString * _versionString;
}

@property (retain, nonatomic) NSMutableDictionary * headers;
@property (retain, nonatomic) NSData * body;
@property (copy, nonatomic) NSString * versionString;

- (void)setVersionString:(NSString *)arg0;
- (NSString *)versionString;
- (void)dealloc;
- (NSData *)body;
- (void)setBody:(NSData *)arg0;
- (NSMutableDictionary *)headers;
- (void)setHeaders:(NSMutableDictionary *)arg0;
- (void)addHeadersToMessage:(struct __CFHTTPMessage *)arg0;
- (struct __CFHTTPMessage *)copyMessage;
- (id)valueForHeaderField:(id)arg0;

@end
