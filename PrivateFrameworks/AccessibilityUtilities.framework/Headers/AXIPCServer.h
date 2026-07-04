/* Runtime dump - AXIPCServer
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXIPCServer : NSObject
{
    id _defaultHandler;
    struct __CFRunLoopSource * _serverRunLoopSource;
    struct __CFRunLoopSource * _clientInvalidationSource;
    unsigned int _serverPort;
    unsigned int _clientInvalidationPort;
    NSMutableDictionary * _validSecurityTokens;
    NSMutableSet * _connectedClients;
    id _clientInvalidationHandler;
    NSMutableDictionary * _entitlements;
    unsigned int _assignedServerPort;
    char _running;
    char _perPidService;
    NSString * _serviceName;
    NSMutableDictionary * _handlers;
}

@property (nonatomic) char running;
@property (retain, nonatomic) NSString * serviceName;
@property (readonly, nonatomic) unsigned int machPort;
@property (copy, nonatomic) id clientInvalidationCallback;
@property (retain, nonatomic) NSMutableDictionary * handlers;
@property (copy, nonatomic) id defaultHandler;
@property (nonatomic) char perPidService;

- (unsigned int)machPort;
- (void)dealloc;
- (NSString *)description;
- (char)isRunning;
- (void)setHandlerWithTarget:(NSObject *)arg0 selector:(SEL)arg1 forKey:(int)arg2;
- (void)addPossibleRequiredEntitlement:(id)arg0 forMessageWithKey:(int)arg1;
- (void)removeAllHandlersForTarget:(NSObject *)arg0;
- (char)stopServerWithError:(id *)arg0;
- (AXIPCServer *)initWithPort:(unsigned int)arg0 serviceRunLoopSource:(struct __CFRunLoopSource *)arg1;
- (char)startServerWithError:(id *)arg0;
- (void)setHandlers:(NSMutableDictionary *)arg0;
- (void)setPerPidService:(char)arg0;
- (AXIPCServer *)initWithServiceName:(NSString *)arg0 perPidService:(char)arg1;
- (void)setDefaultHandler:(id /* block */)arg0;
- (void)_startServerThread;
- (char)_handleErrorWithMessage:(NSString *)arg0 outError:(id *)arg1;
- (NSMutableDictionary *)handlers;
- (void)removeHandlerForKey:(int)arg0;
- (NSString *)_clientIdentificationForAuditToken:(struct ?)arg0;
- (char)perPidService;
- (char)_clientWithPort:(unsigned int)arg0 auditToken:(struct ?)arg1 hasAnyEntitlementRequiredForMessage:(NSString *)arg2;
- (void)_handleClientRegistration:(id)arg0;
- (id /* block */)defaultHandler;
- (void)setServiceRunLoopSource:(struct __CFRunLoopSource *)arg0;
- (id /* block */)clientInvalidationCallback;
- (void)setClientInvalidationCallback:(id /* block */)arg0;
- (void)setHandler:(id /* block */)arg0 forKey:(/* block */ id)arg1;
- (void)setHandlerWithTarget:(NSObject *)arg0 selector:(SEL)arg1 forKey:(int)arg2 possibleRequiredEntitlements:(id)arg3;
- (void)removePossibleRequiredEntitlement:(id)arg0 forMessageWithKey:(int)arg1;
- (void)_handleClientInvalidation:(unsigned int)arg0;
- (NSString *)_handleIncomingMessage:(NSString *)arg0 securityToken:(struct ?)arg1 auditToken:(struct ?)arg2 clientPort:(unsigned int)arg3;
- (void)setServiceName:(NSString *)arg0;
- (NSString *)serviceName;
- (void)setRunning:(char)arg0;

@end
