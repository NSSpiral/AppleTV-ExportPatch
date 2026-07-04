/* Runtime dump - BrightnessSystemInternal
 * Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface BrightnessSystemInternal : NSThread <NSXPCListenerDelegate>
{
    BOOL _shouldKeepRunning;
    BOOL _initializationComplete;
    NSTimer * _timer;
    BLControl * bl;
    id _callback;
    NSMutableDictionary * _clients;
    NSMutableDictionary * _clientsProps;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (BrightnessSystemInternal *)init;
- (void)main;
- (char)listener:(NSXPCListener *)arg0 shouldAcceptNewConnection:(NSXPCConnection *)arg1;
- (char)setProperty:(NSString *)arg0 forKey:(NSString *)arg1;
- (void)registerNotificationBlock:(id /* block */)arg0;
- (void)timerFire:(id)arg0;
- (void)clientConnectedWithExpObj:(id)arg0;
- (void)clientDisconnectedWithExpObj:(id)arg0;
- (void)notifyClientsForProperty:(NSString *)arg0 key:(NSString *)arg1;
- (void)runXPCServer;
- (void)destroyServer;
- (char)isAlsSupported;
- (NSString *)copyPropertyForKey:(NSString *)arg0;

@end
