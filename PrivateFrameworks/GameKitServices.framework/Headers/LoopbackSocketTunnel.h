/* Runtime dump - LoopbackSocketTunnel
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface LoopbackSocketTunnel : NSObject
{
    unsigned short _port;
    int sockFD;
    struct sockaddr_in sa;
    struct sockaddr_in vtpSA;
    NSObject * optionalArg;
    NSObject<LoopbackSocketTunnelDelegate> * _delegate;
    char foundVTPIP;
}

@property NSObject * optionalArg;

- (LoopbackSocketTunnel *)initWithPort:(unsigned short)arg0 delegate:(NSObject<LoopbackSocketTunnelDelegate> *)arg1 error:(id *)arg2;
- (int)sendPacketToVTP:(id)arg0;
- (void)getIPPort:(struct tagIPPORT *)arg0;
- (void)getVTPIPPort:(struct tagIPPORT *)arg0;
- (void)setVTPIP:(struct tagIPPORT *)arg0;
- (void)shutdownSocket;
- (int)serverLoopProc;
- (NSObject *)optionalArg;
- (void)setOptionalArg:(NSObject *)arg0;

@end
