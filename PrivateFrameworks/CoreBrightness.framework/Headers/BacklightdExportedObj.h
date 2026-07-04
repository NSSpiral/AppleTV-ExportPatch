/* Runtime dump - BacklightdExportedObj
 * Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface BacklightdExportedObj : NSObject <BacklightdXPCProtocol>
{
    unsigned int _clientID;
    char _clientIDSet;
    BrightnessSystemInternal * _server;
    NSXPCConnection * _connection;
}

@property (nonatomic) BrightnessSystemInternal * server;
@property (retain, nonatomic) NSXPCConnection * connection;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)reconnect;
- (void)dealloc;
- (BrightnessSystemInternal *)server;
- (NSXPCConnection *)connection;
- (void)setConnection:(NSXPCConnection *)arg0;
- (void)clientSetPropertyWithKey:(NSString *)arg0 property:(NSObject *)arg1;
- (void)clientCopyPropertyWithKey:(NSString *)arg0 reply:(id /* block */)arg1;
- (void)registerNotificationForProperties:(NSDictionary *)arg0;
- (NSObject *)copyClientID;
- (void)setServer:(BrightnessSystemInternal *)arg0;

@end
