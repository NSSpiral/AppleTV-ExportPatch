/* Runtime dump - AXServer
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXServer : NSObject
{
    char _shouldRegisterClientCallbackSourceOnMainRunloop;
    AXIPCServer * _server;
    AXIPCClient * _client;
    NSString * _serverIdentifier;
}

@property (copy, nonatomic) NSString * serverIdentifier;
@property (nonatomic) char shouldRegisterClientCallbackSourceOnMainRunloop;
@property (retain, nonatomic) AXIPCClient * client;
@property (retain, nonatomic) AXIPCServer * server;

- (void)dealloc;
- (AXIPCServer *)server;
- (void)setShouldRegisterClientCallbackSourceOnMainRunloop:(char)arg0;
- (void)_didConnectToServer;
- (void)_willClearServer;
- (void)_wasDisconnectedFromClient;
- (void)_didConnectToClient;
- (void)sendSimpleMessage:(NSString *)arg0;
- (char)_connectIfNecessary;
- (char)sendSimpleMessageWithResult:(NSObject *)arg0;
- (NSObject *)sendSimpleMessageWithObjectResult:(NSObject *)arg0;
- (void)_connectServerIfNecessary;
- (NSString *)_serviceName;
- (char)shouldRegisterClientCallbackSourceOnMainRunloop;
- (void)acquireAssertionWithType:(NSObject *)arg0 identifier:(NSString *)arg1;
- (void)relinquishAssertionWithType:(NSObject *)arg0 identifier:(NSString *)arg1;
- (void)setServerIdentifier:(NSString *)arg0;
- (void)setServer:(AXIPCServer *)arg0;
- (NSString *)serverIdentifier;
- (NSString *)sendMessage:(NSString *)arg0;
- (void)setClient:(AXIPCClient *)arg0;
- (AXIPCClient *)client;

@end
