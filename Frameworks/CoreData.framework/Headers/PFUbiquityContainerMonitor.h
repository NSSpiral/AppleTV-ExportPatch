/* Runtime dump - PFUbiquityContainerMonitor
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityContainerMonitor : NSObject
{
    PFUbiquityLocation * _ubiquityRootLocation;
    NSString * _localPeerID;
    NSString * _storeName;
    int _containerState;
    int _monitorState;
    char _hasScheduledCheckBlock;
    int _scheduleSpinLock;
    NSObject<OS_dispatch_queue> * _processingQueue;
    <NSObject><NSCopying><NSCoding> * _currentIdentityToken;
    PFUbiquityContainerIdentifier * _containerIdentifier;
    NSString * _identityTokenOverride;
}

@property (nonatomic) int containerState;
@property (nonatomic) int monitorState;
@property (readonly, nonatomic) PFUbiquityContainerIdentifier * containerIdentifier;
@property (readonly, nonatomic) <NSObject><NSCopying><NSCoding> * currentIdentityToken;

- (char)startMonitor:(id *)arg0;
- (void)stopMonitor;
- (PFUbiquityContainerMonitor *)initWithProcessingQueue:(NSObject<OS_dispatch_queue> *)arg0 localPeerID:(NSString *)arg1 storeName:(NSString *)arg2 andUbiquityRootLocation:(NSObject *)arg3;
- (int)containerState;
- (int)monitorState;
- (<NSObject><NSCopying><NSCoding> *)currentIdentityToken;
- (void)willChangeContainerState;
- (void)didChangeContainerState;
- (void)willChangeMonitorState;
- (void)didChangeMonitorState;
- (void)willChangeContainerIdentifier:(unsigned int)arg0;
- (void)containerDeleteDetected:(id)arg0;
- (void)didChangeContainerIdentifier:(unsigned int)arg0;
- (void)_applicationResumed:(id)arg0;
- (void)ubiquityIdentityChanged:(NSNotification *)arg0;
- (void)setMonitorState:(int)arg0;
- (void)setContainerIdentifier:(PFUbiquityContainerIdentifier *)arg0 transitionType:(unsigned int)arg1;
- (void)scheduleCheckBlock:(id /* block */)arg0;
- (void)checkStoresAndContainer:(NSObject *)arg0;
- (void)setContainerState:(int)arg0;
- (void)dealloc;
- (PFUbiquityContainerMonitor *)init;
- (NSString *)description;
- (PFUbiquityContainerIdentifier *)containerIdentifier;

@end
