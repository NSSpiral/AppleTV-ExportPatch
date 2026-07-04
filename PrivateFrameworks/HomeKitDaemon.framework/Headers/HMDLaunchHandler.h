/* Runtime dump - HMDLaunchHandler
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDLaunchHandler : NSObject
{
    NSObject<OS_dispatch_queue> * _handlerQueue;
    NSMutableSet * _relaunchTriggeringClients;
    int _beingConfigured;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> * handlerQueue;
@property (retain, nonatomic) NSMutableSet * relaunchTriggeringClients;
@property (nonatomic) int beingConfigured;

+ (HMDLaunchHandler *)sharedHandler;

- (HMDLaunchHandler *)init;
- (void).cxx_destruct;
- (void)registerForRelaunch:(id)arg0;
- (void)deregisterForRelaunch:(id)arg0;
- (void)beingConfigured:(char)arg0 completionHandler:(id /* block */)arg1;
- (void)_saveAssertionPlist;
- (NSObject<OS_dispatch_queue> *)handlerQueue;
- (int)beingConfigured;
- (void)setBeingConfigured:(int)arg0;
- (void)_reevaluate;
- (NSMutableSet *)relaunchTriggeringClients;
- (void)_removeAssertionPlist;
- (void)setHandlerQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setRelaunchTriggeringClients:(NSMutableSet *)arg0;

@end
