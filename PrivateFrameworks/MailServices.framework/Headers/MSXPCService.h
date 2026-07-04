/* Runtime dump - MSXPCService
 * Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@interface MSXPCService : NSObject
{
    NSLock * _lock;
    NSXPCInterface * _remoteObjectInterface;
    NSXPCConnection * _connection;
    char _shouldLaunchMobileMail;
}

@property (nonatomic) char shouldLaunchMobileMail;

- (void)dealloc;
- (id)remoteObjectProxyWithErrorHandler:(SSErrorHandler *)arg0;
- (NSObject *)remoteObjectProxy;
- (NSXPCConnection *)connection;
- (MSXPCService *)initWithRemoteObjectInterface:(NSXPCInterface *)arg0;
- (id)newConnectionForInterface:(id)arg0;
- (char)shouldLaunchMobileMail;
- (void)setShouldLaunchMobileMail:(char)arg0;

@end
