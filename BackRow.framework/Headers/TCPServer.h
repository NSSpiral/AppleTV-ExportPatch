/* Runtime dump - TCPServer
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface TCPServer : NSObject
{
    id delegate;
    NSString * domain;
    NSString * name;
    NSString * type;
    unsigned short port;
    struct __CFSocket * ipv4socket;
    struct __CFSocket * ipv6socket;
    NSNetService * netService;
    char publishConnection;
    struct __CFRunLoop * _runLoop;
    struct __CFRunLoopSource * _source4;
    struct __CFRunLoopSource * _source6;
}

- (void)publishConnection:(char)arg0;
- (void)handleNewConnectionFromAddress:(NSString *)arg0 inputStream:(id *)arg1 outputStream:(NSOutputStream *)arg2;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (TCPServer *)init;
- (NSObject *)delegate;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (NSString *)domain;
- (char)stop;
- (unsigned short)port;
- (char)start:(id *)arg0;
- (void)setDomain:(NSString *)arg0;
- (void)setPort:(unsigned short)arg0;

@end
