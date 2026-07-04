/* Runtime dump - EAWiFiUnconfiguredAccessoryBrowser
 * Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@interface EAWiFiUnconfiguredAccessoryBrowser : NSObject
{
    char __debugLog;
    <EAWiFiUnconfiguredAccessoryBrowserDelegate> * _delegate;
    NSSet * _unconfiguredAccessories;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSPredicate * _accessorySearchPredicate;
}

@property (weak, nonatomic) <EAWiFiUnconfiguredAccessoryBrowserDelegate> * delegate;
@property (readonly, copy) NSSet * unconfiguredAccessories;
@property (retain) NSObject<OS_dispatch_queue> * delegateQueue;
@property (retain) NSPredicate * accessorySearchPredicate;

- (void)_handleBrowserDidUpdateState:(NSObject *)arg0;
- (void)_handleNewAccessoriesNotification:(NSNotification *)arg0;
- (void)_handleRemovedAccessoriesNotification:(NSNotification *)arg0;
- (void)_handlePurgeAccessoriesSetNotification:(NSNotification *)arg0;
- (void)stopSearchingForUnconfiguredAccessories;
- (void)setAccessorySearchPredicate:(NSPredicate *)arg0;
- (void)_handleBrowserFinishedConfiguring:(id)arg0;
- (void)configureAccessory:(id)arg0 withConfigurationUIOnViewController:(BRController *)arg1;
- (NSPredicate *)accessorySearchPredicate;
- (NSSet *)unconfiguredAccessories;
- (void)startSearchingForUnconfiguredAccessoriesMatchingPredicate:(NSPredicate *)arg0;
- (void)dealloc;
- (void)setDelegate:(<EAWiFiUnconfiguredAccessoryBrowserDelegate> *)arg0;
- (<EAWiFiUnconfiguredAccessoryBrowserDelegate> *)delegate;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)delegateQueue;
- (void)setDelegateQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (EAWiFiUnconfiguredAccessoryBrowser *)initWithDelegate:(<EAWiFiUnconfiguredAccessoryBrowserDelegate> *)arg0 queue:(NSObject *)arg1;

@end
