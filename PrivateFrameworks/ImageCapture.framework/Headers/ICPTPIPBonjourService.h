/* Runtime dump - ICPTPIPBonjourService
 * Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@interface ICPTPIPBonjourService : NSObject
{
    id _bonjourServiceProperties;
}

- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)delegate;
- (void)addClient:(NSObject *)arg0;
- (void)removeClient:(NSObject *)arg0;
- (struct __CFNetService *)publishedService;
- (void)releaseNetService;
- (void)releaseSocket;
- (char)createSocket;
- (char)createAndPublishNetService;
- (NSString *)clientForAddress:(struct __CFData *)arg0;
- (int)messagePTPDIPInstance:(id)arg0 withSocket:(int)arg1;
- (int)createPTPDIPInstanceWithAddress:(struct __CFData *)arg0 fileDescriptor:(int)arg1;
- (id)clientForPID:(unsigned long)arg0;
- (ICPTPIPBonjourService *)initWithHostPort:(unsigned long)arg0 hostName:(NSString *)arg1 hostGUID:(NSString *)arg2 bonjourServiceType:(NSObject *)arg3 bonjourTXTRecords:(NSArray *)arg4;
- (char)startService;
- (void)dispatchConnectionFromSocket:(int)arg0 withAddress:(struct __CFData *)arg1;
- (int)destroyPTPDIPInstance:(id)arg0;
- (int)numClients;
- (void)clientTerminated:(id)arg0;
- (void)handleNetServiceError:(struct ? *)arg0;
- (void)unlockDeviceForClient:(NSObject *)arg0;
- (void)disconnectClient:(NSObject *)arg0;

@end
