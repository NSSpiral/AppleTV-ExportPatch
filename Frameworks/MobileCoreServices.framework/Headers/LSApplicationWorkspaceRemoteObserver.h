/* Runtime dump - LSApplicationWorkspaceRemoteObserver
 * Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSApplicationWorkspaceRemoteObserver : LSApplicationWorkspaceObserver
{
    char _observinglsd;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _progressSubscriptionsQueue;
}

- (void)setObservinglsd:(char)arg0;
- (char)isObservinglsd;
- (unsigned int)currentObserverCount;
- (void)applicationInstallsDidCancel:(id)arg0;
- (void)applicationInstallsDidPause:(id)arg0;
- (void)applicationInstallsDidPrioritize:(id)arg0;
- (void)applicationInstallsDidResume:(id)arg0;
- (void)networkUsageChanged:(char)arg0;
- (void)pluginsDidInstall:(id)arg0;
- (void)pluginsDidUninstall:(id)arg0;
- (void)pluginsWillUninstall:(id)arg0;
- (void)addLocalObserver:(NSObject *)arg0;
- (void)removeLocalObserver:(NSObject *)arg0;
- (id)localObservers;
- (void)applicationInstallsDidStart:(id)arg0;
- (void)applicationInstallsDidUpdateIcon:(UIImage *)arg0;
- (void)applicationInstallsDidChange:(NSDictionary *)arg0;
- (void)applicationsWillInstall:(id)arg0;
- (void)applicationsDidInstall:(id)arg0;
- (void)applicationsDidFailToInstall:(id)arg0;
- (void)applicationsWillUninstall:(id)arg0;
- (void)applicationsDidUninstall:(id)arg0;
- (void)applicationsDidFailToUninstall:(id)arg0;
- (void)applicationInstallsArePrioritized:(id)arg0 arePaused:(id)arg1;
- (void)dealloc;
- (LSApplicationWorkspaceRemoteObserver *)init;

@end
