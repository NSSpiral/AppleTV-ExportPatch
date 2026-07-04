/* Runtime dump - ATVTCPControlReceiver
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/TCPServer.h>
@interface ATVTCPControlReceiver : TCPServer
{
    Class connClass;
    NSMutableArray * _openConnections;
}

- (void)newBytesReceived:(id)arg0 data:(NSData *)arg1;
- (void)setConnectionClass:(Class)arg0;
- (void)handleNewConnectionFromAddress:(NSString *)arg0 inputStream:(id *)arg1 outputStream:(NSOutputStream *)arg2;
- (void)connectionClosed:(id)arg0;
- (void)dealloc;
- (ATVTCPControlReceiver *)init;
- (char)_start;
- (Class)connectionClass;

@end
