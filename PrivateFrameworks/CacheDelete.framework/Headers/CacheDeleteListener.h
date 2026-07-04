/* Runtime dump - CacheDeleteListener
 * Image: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
 */

@interface CacheDeleteListener : NSObject <NSXPCListenerDelegate>
{
    id _xObj;
    NSMutableSet * _requiredEntitlements;
    Protocol * _protocol;
    NSXPCListener * _listener;
}

@property (retain, nonatomic) id xObj;
@property (retain, nonatomic) NSMutableSet * requiredEntitlements;
@property (retain, nonatomic) Protocol * protocol;
@property (retain, nonatomic) NSXPCListener * listener;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)daemonListenerWithExportedObject:(NSObject *)arg0;

- (void)resume;
- (void).cxx_destruct;
- (char)listener:(NSXPCListener *)arg0 shouldAcceptNewConnection:(NSXPCConnection *)arg1;
- (Protocol *)protocol;
- (NSXPCListener *)listener;
- (void)setListener:(NSXPCListener *)arg0;
- (CacheDeleteListener *)initWithName:(NSString *)arg0 listener:(NSXPCListener *)arg1 protocol:(Protocol *)arg2 exportedObj:(BrightnessSystemClientExportedObj *)arg3;
- (NSMutableSet *)requiredEntitlements;
- (id)xObj;
- (void)addRequiredEntitlement:(id)arg0;
- (void)setXObj:(id)arg0;
- (void)setRequiredEntitlements:(NSMutableSet *)arg0;
- (void)setProtocol:(Protocol *)arg0;

@end
