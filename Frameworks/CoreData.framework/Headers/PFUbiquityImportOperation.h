/* Runtime dump - PFUbiquityImportOperation
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityImportOperation : NSOperation
{
    NSString * _localPeerID;
    NSString * _storeName;
    NSPersistentStore * _store;
    PFUbiquityLocation * _ubiquityRootLocation;
    NSLock * _delegateLock;
    char _lockedDelegateLock;
    NSObject * _delegate;
}

@property (readonly, nonatomic) NSString * localPeerID;
@property (readonly, nonatomic) NSString * storeName;
@property (readonly, nonatomic) PFUbiquityLocation * ubiquityRootLocation;
@property (readonly, nonatomic) NSPersistentStore * store;
@property NSObject * delegate;

- (NSPersistentStore *)store;
- (NSString *)localPeerID;
- (NSString *)storeName;
- (PFUbiquityLocation *)ubiquityRootLocation;
- (PFUbiquityImportOperation *)initWithPersistentStore:(char)arg0 localPeerID:(NSString *)arg1 andUbiquityRootLocation:(NSObject *)arg2;
- (NSObject *)retainedDelegate;
- (void)storeWillBeRemoved:(id)arg0;
- (void)lockDelegateLock;
- (void)unlockDelegateLock;
- (PFUbiquityImportOperation *)initWithStoreName:(NSString *)arg0 localPeerID:(NSString *)arg1 andUbiquityRootLocation:(NSObject *)arg2;
- (void)cancel;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (PFUbiquityImportOperation *)init;
- (NSString *)description;
- (NSObject *)delegate;

@end
