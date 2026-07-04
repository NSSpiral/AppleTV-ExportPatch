/* Runtime dump - UIDocumentStorageManager
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDocumentStorageManager : NSObject
{
    NSObject<OS_dispatch_queue> * _ivarQueue;
    _UIDocumentStorage * _storage;
    NSMutableSet * _observers;
    NSMetadataQuery * _query;
    NSDictionary * _identifiersToURLMap;
    NSURL * _defaultURL;
}

@property (readonly) char usesUbiquitousStorage;
@property (readonly) NSURL * documentStorageURL;
@property (readonly) NSURL * dataStorageURL;

+ (void)requestSharedManager:(NSObject *)arg0;

- (UIDocumentStorageManager *)init;
- (void)removeObserver:(NSObject *)arg0;
- (NSArray *)_queryResults;
- (NSURL *)documentStorageURL;
- (UIDocumentStorageManager *)_initWithCompletionHandler:(id /* block */)arg0;
- (void)_ubiquityIdentityTokenChanged;
- (void)runSetupProcessWithCompletionHandler:(id /* block */)arg0;
- (NSURL *)dataStorageURL;
- (NSString *)_userICloudChoiceForIdentityToken:(NSString *)arg0;
- (void)_finishSetupWithDecision:(char)arg0 completionHandler:(id /* block */)arg1;
- (void)_loadUserICloudChoiceWithCompletionHandler:(id /* block */)arg0;
- (void)_setStorage:(NSStorage *)arg0;
- (void)_resetQuery;
- (NSArray *)_userICloudChoiceArray;
- (void)_initialGatherFinished;
- (void)_updateObservers;
- (void)_queryUpdated;
- (id)_observeContentsOfDirectories:(id)arg0 sortedWithDescriptors:(NSArray *)arg1 updateHandler:(id /* block */)arg2;
- (char)usesUbiquitousStorage;
- (NSObject *)_identifierToURLMap;
- (void)_appActivated:(id)arg0;
- (void)_storeUserICloudChoice:(char)arg0 forIdentityToken:(NSString *)arg1;
- (void)willAddURL:(NSURL *)arg0;
- (void)willRemoveURL:(NSURL *)arg0;
- (void)willMoveURL:(NSURL *)arg0 toURL:(NSURL *)arg1;
- (id)observeContentsOfDirectory:(id)arg0 sortedWithDescriptors:(NSArray *)arg1 updateHandler:(id /* block */)arg2;
- (NSString *)observeContentsOfUbiquitousContainersWithIdentifiers:(id)arg0 sortedWithDescriptors:(NSArray *)arg1 updateHandler:(id /* block */)arg2;
- (void)updateObserver:(NSObject *)arg0 withSortDescriptors:(NSArray *)arg1;

@end
