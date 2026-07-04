/* Runtime dump - SFCompanionXPCManager
 * Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFCompanionXPCManager : NSObject
{
    char _invalid;
    char _interrupted;
    NSXPCConnection * _connection;
    NSMutableArray * _observers;
}

@property char invalid;
@property char interrupted;
@property (retain) NSXPCConnection * connection;
@property (retain) NSMutableArray * observers;

+ (void)initialize;
+ (SFCompanionXPCManager *)xpcManagerInterface;
+ (SFCompanionXPCManager *)serviceManagerClientInterface;
+ (SFCompanionXPCManager *)serviceManagerInterface;
+ (SFCompanionXPCManager *)connectionManagerClientInterface;
+ (SFCompanionXPCManager *)connectionManagerInterface;
+ (SFCompanionXPCManager *)browserClientInterface;
+ (SFCompanionXPCManager *)browserInterface;
+ (SFCompanionXPCManager *)advertiserClientInterface;
+ (SFCompanionXPCManager *)advertiserInterface;
+ (SFCompanionXPCManager *)scannerClientInterface;
+ (SFCompanionXPCManager *)scannerInterface;
+ (SFCompanionXPCManager *)unlockInterface;
+ (SFCompanionXPCManager *)hotspotClientInterface;
+ (SFCompanionXPCManager *)hotspotInterface;
+ (SFCompanionXPCManager *)sharedManager;

- (void)dealloc;
- (SFCompanionXPCManager *)init;
- (NSXPCConnection *)connection;
- (void)setConnection:(NSXPCConnection *)arg0;
- (void)setObservers:(NSMutableArray *)arg0;
- (NSMutableArray *)observers;
- (char)interrupted;
- (void)setInterrupted:(char)arg0;
- (void)registerObserver:(NSObject *)arg0;
- (void)unregisterObserver:(NSObject *)arg0;
- (void)setInvalid:(char)arg0;
- (void)unlockManagerWithCompletionHandler:(id /* block */)arg0;
- (void)remoteHotspotSessionForClient:(NSObject *)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)activityAdvertiserProxyForClient:(NSObject *)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)continuityScannerProxyForClient:(NSObject *)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)setupConnection;
- (void)notifyObservers;
- (void)notifyOfInvalidation;
- (void)notifyOfResume;
- (void)companionBrowserProxyforIdentifier:(NSString *)arg0 serviceType:(NSString *)arg1 client:(NSObject *)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)serviceManagerProxyForIdentifier:(NSString *)arg0 client:(NSObject *)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)companionConnectionProxyForService:(NSObject *)arg0 client:(NSObject *)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)streamsForMessage:(NSString *)arg0 withCompletionHandler:(id /* block */)arg1;
- (char)isInvalid;

@end
