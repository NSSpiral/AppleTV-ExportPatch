/* Runtime dump - PFUbiquitySwitchboard
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquitySwitchboard : NSObject
{
    NSMutableDictionary * _storeNameToLocalPeerIDToEntry;
    NSMutableDictionary * _rootLocationToLocalPeerIDToFilePresenters;
    NSMutableDictionary * _rootLocationToLocalPeerIDToPreviousEntries;
    NSRecursiveLock * _registrationLock;
}

+ (PFUbiquitySwitchboard *)sharedSwitchboard;
+ (PFUbiquitySwitchboard *)ubiquitousExternalReferenceLocationForUUID:(id)arg0 inStore:(NSObject *)arg1;
+ (void)initialize;

- (NSString *)retainedEntryForStoreName:(NSString *)arg0 andLocalPeerID:(NSObject *)arg1;
- (void)unregisterCoordinator:(NSObject *)arg0;
- (void)unregisterPersistentStore:(NSObject *)arg0;
- (NSString *)createSetOfCoordinatorsForPersistentStoreName:(NSString *)arg0 andLocalPeerID:(NSObject *)arg1 atUbiquityRootLocation:(NSObject *)arg2;
- (NSObject *)filePresenterForUbiquityRootLocation:(NSObject *)arg0 andLocalPeerID:(NSObject *)arg1;
- (void)_removeFilePresenter:(PFUbiquityFilePresenter *)arg0;
- (void)coordinatorWillRemoveStore:(NSObject *)arg0;
- (void)addEntryToPreviousEntries:(NSArray *)arg0;
- (NSObject *)entryForStore:(NSObject *)arg0;
- (char)cacheFilePresenterForUbiquityRootLocation:(NSObject *)arg0 andLocalPeerID:(NSObject *)arg1;
- (void)removeFilePresenterCachedForUbiquityRootLocation:(NSObject *)arg0 andLocalPeerID:(NSObject *)arg1;
- (void)_addFilePresenter:(PFUbiquityFilePresenter *)arg0;
- (char)registerUbiquitizedPersistentStore:(NSObject *)arg0 forLocalPeerID:(NSObject *)arg1 withLocalRootLocation:(PFUbiquityLocation *)arg2 andUbiquityRootLocation:(NSObject *)arg3 error:(id *)arg4;
- (void)_quietlyMoveEntryToPreviousEntries:(NSArray *)arg0;
- (void)removeEntryFromPreviousEntries:(NSArray *)arg0;
- (void)releaseAllEntriesForStoreName:(NSString *)arg0 andPeerID:(NSObject *)arg1;
- (void)dealloc;
- (PFUbiquitySwitchboard *)init;
- (NSString *)description;

@end
