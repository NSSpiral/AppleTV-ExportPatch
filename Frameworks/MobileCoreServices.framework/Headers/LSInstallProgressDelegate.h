/* Runtime dump - LSInstallProgressDelegate
 * Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSInstallProgressDelegate : NSObject <NSXPCListenerDelegate, LSInstallProgressProtocol>
{
    NSMutableDictionary * _observers;
    LSInstallProgressList * _progresses;
    NSMutableOrderedSet * _orderedInstalls;
    NSMutableDictionary * _installIndexes;
    NSMutableSet * _inactiveInstalls;
    LSObserverTimer * installsStartedTimer;
    LSObserverTimer * iconsUpdatedTimer;
    LSObserverTimer * installsUpdatedTimer;
    LSObserverTimer * installsFinishedTimer;
    LSObserverTimer * didUninstallTimer;
    NSObject<OS_dispatch_queue> * _installControlsQueue;
    NSObject<OS_dispatch_queue> * _observersQueue;
    char _usingNetwork;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)addObserver:(NSObject *)arg0 withUUID:(NSUUID *)arg1;
- (void)removeObserverWithUUID:(id)arg0;
- (void)sendWillUninstallNotificationForApps:(id)arg0 Plugins:(id)arg1 isUpdate:(char)arg2;
- (void)beginObservingConnection;
- (void)endObservingConnection;
- (void)sendFailedNotificationForApp:(id)arg0 isUninstall:(char)arg1;
- (void)installationEndedForApplication:(id)arg0;
- (void)sendInstalledNotificationForApps:(id)arg0;
- (void)sendUninstalledNotificationForApps:(id)arg0;
- (void)placeholderInstalledForApp:(id)arg0;
- (void)sendIconUpdatedNotificationForApp:(id)arg0;
- (void)sendChangeNotificationForApp:(id)arg0;
- (void)createInstallProgressForApplication:(id)arg0 withPhase:(unsigned int)arg1 andPublishingString:(NSString *)arg2;
- (void)installationFailedForApplication:(id)arg0 reply:(id /* block */)arg1;
- (void)sendInstalledNotificationForApp:(id)arg0 reply:(id /* block */)arg1;
- (void)sendUninstalledNotificationForApp:(id)arg0 reply:(id /* block */)arg1;
- (void)sendNetworkUsageChangedNotification;
- (void)restoreInactiveInstalls;
- (id)parentProgressForApplication:(id)arg0 andPhase:(unsigned int)arg1 isActive:(char)arg2;
- (void)rebuildInstallIndexes;
- (void)sendAppControlsNotificationForApp:(id)arg0 withName:(NSString *)arg1;
- (void)handleCancelInstallationForApp:(id)arg0;
- (void)dealloc;
- (LSInstallProgressDelegate *)init;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (char)listener:(NSXPCListener *)arg0 shouldAcceptNewConnection:(NSXPCConnection *)arg1;

@end
