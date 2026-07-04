/* Runtime dump - NEVPNConnection
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNConnection : NSObject
{
    int _status;
    void * _session;
}

@property (readonly) int status;
@property void * session;

- (char)startVPNTunnelAndReturnError:(id *)arg0;
- (void)stopVPNTunnel;
- (void)newSessionWithConfigID:(NSUUID *)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)destroySession;
- (void)dealloc;
- (NEVPNConnection *)init;
- (int)status;
- (void *)session;
- (void)setSession:(void *)arg0;

@end
