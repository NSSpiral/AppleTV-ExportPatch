/* Runtime dump - PKService
 * Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@interface PKService : NSObject <NSXPCListenerDelegate>
{
    char _shared;
    <PKServiceDelegate> * _delegate;
    NSXPCListener * _serviceListener;
    NSMutableDictionary * _personalities;
    PKServicePersonality * _solePersonality;
    NSObject<OS_dispatch_queue> * __sync;
    NSArray * _subsystems;
}

@property (retain) <PKServiceDelegate> * delegate;
@property (retain) NSXPCListener * serviceListener;
@property (retain) NSMutableDictionary * personalities;
@property (retain) PKServicePersonality * solePersonality;
@property (retain) NSObject<OS_dispatch_queue> * _sync;
@property (retain) NSArray * subsystems;
@property char shared;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (PKService *)defaultService;
+ (void)main;
+ (int)_defaultRun:(int)arg0 arguments:(char * *)arg1;

- (void)setDelegate:(<PKServiceDelegate> *)arg0;
- (PKService *)init;
- (<PKServiceDelegate> *)delegate;
- (void)run;
- (void).cxx_destruct;
- (char)listener:(NSXPCListener *)arg0 shouldAcceptNewConnection:(NSXPCConnection *)arg1;
- (NSArray *)subsystems;
- (NSXPCListener *)serviceListener;
- (void)setShared:(char)arg0;
- (void)registerPersonality:(id)arg0;
- (char)unregisterPersonality:(id)arg0;
- (void)setPersonalities:(NSMutableDictionary *)arg0;
- (void)set_sync:(NSObject<OS_dispatch_queue> *)arg0;
- (void)checkEnvironment:(NSDictionary *)arg0;
- (void)setServiceListener:(NSXPCListener *)arg0;
- (void)discoverSubsystems;
- (NSArray *)configuredSubsystemList;
- (id)discoverSubsystemNamed:(id)arg0 logMissing:(char)arg1;
- (void)setSubsystems:(NSArray *)arg0;
- (void)mergeSubsystems:(id)arg0 from:(NSObject *)arg1;
- (void)mergeSubsystemList:(NSArray *)arg0 from:(NSObject *)arg1;
- (id)personalityNamed:(id)arg0;
- (NSObject<OS_dispatch_queue> *)_sync;
- (PKServicePersonality *)solePersonality;
- (NSMutableDictionary *)personalities;
- (void)setSolePersonality:(PKServicePersonality *)arg0;
- (void)launchContainingApplicationForPlugInNamed:(id)arg0;
- (void)copyAppStoreReceipt:(id)arg0;
- (id)defaultsForPlugInNamed:(id)arg0;
- (id)plugInPrincipalForPlugInNamed:(id)arg0;
- (id)hostPrincipalForPlugInNamed:(id)arg0;
- (id)embeddedPrincipalForPlugInNamed:(id)arg0;
- (id)connectionForPlugInNamed:(id)arg0;
- (id)personalityNamed:(id)arg0 forHostPid:(int)arg1;
- (char)shared;

@end
