/* Runtime dump - FBSystemService
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSystemService : NSObject
{
    FBApplicationLibrary * _library;
    <FBSystemServiceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    FBSystemServiceServer * _server;
}

@property (nonatomic) <FBSystemServiceDelegate> * delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (retain, nonatomic) FBSystemServiceServer * server;

+ (FBSystemService *)sharedInstance;

- (NSString *)systemApplicationBundleIdentifier;
- (void)dealloc;
- (void)setDelegate:(<FBSystemServiceDelegate> *)arg0;
- (<FBSystemServiceDelegate> *)delegate;
- (FBSystemServiceServer *)server;
- (FBSystemService *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (int)pidForApplication:(id)arg0;
- (void)exitAndRelaunch:(char)arg0;
- (void)shutdownAndReboot:(char)arg0;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setServer:(FBSystemServiceServer *)arg0;
- (void)_performExitTasksForRelaunch:(char)arg0;
- (void)exitAndRelaunch:(char)arg0 withOptions:(unsigned int)arg1;
- (void)_terminateProcess:(NSObject *)arg0 forReason:(int)arg1 andReport:(char)arg2 withDescription:(NSString *)arg3;
- (void)_activateApplication:(id)arg0 options:(NSDictionary *)arg1 source:(NSObject *)arg2 originalSource:(NSString *)arg3 withResult:(NSObject *)arg4;
- (char)_requiresOpenApplicationEntitlement:(id)arg0 options:(NSDictionary *)arg1 originalSource:(NSString *)arg2;
- (void)_reallyActivateApplication:(id)arg0 options:(NSDictionary *)arg1 source:(NSObject *)arg2 originalSource:(NSString *)arg3 withResult:(NSObject *)arg4;
- (void)_activateURL:(NSURL *)arg0 application:(NSString *)arg1 options:(NSDictionary *)arg2 source:(NSObject *)arg3 originalSource:(NSString *)arg4 withResult:(NSObject *)arg5;
- (char)_isWhitelistedLaunchSuspendedApp:(id)arg0;
- (void)prepareForExitAndRelaunch:(char)arg0;
- (void)terminateApplication:(id)arg0 forReason:(int)arg1 andReport:(char)arg2 withDescription:(NSString *)arg3 source:(NSObject *)arg4;
- (void)terminateApplicationGroup:(int)arg0 forReason:(int)arg1 andReport:(char)arg2 withDescription:(NSString *)arg3 source:(NSObject *)arg4;
- (void)canActivateApplication:(id)arg0 withResult:(NSObject *)arg1;
- (void)activateApplication:(id)arg0 options:(NSDictionary *)arg1 source:(NSObject *)arg2 originalSource:(NSString *)arg3 withResult:(NSObject *)arg4;
- (void)activateURL:(NSURL *)arg0 application:(NSString *)arg1 options:(NSDictionary *)arg2 source:(NSObject *)arg3 originalSource:(NSString *)arg4 withResult:(NSObject *)arg5;
- (void)handleActions:(id)arg0 source:(NSObject *)arg1 withResult:(NSObject *)arg2;

@end
