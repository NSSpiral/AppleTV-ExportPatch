/* Runtime dump - PFUbiquityContainerIdentifier
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityContainerIdentifier : NSObject <NSFilePresenter>
{
    NSString * _storeName;
    NSString * _localPeerID;
    PFUbiquityLocation * _ubiquityRootLocation;
    NSString * _uuidString;
    PFUbiquityLocation * _uuidFileLocation;
    NSURL * _presentedItemURL;
    char _usedExistingUUIDFile;
}

@property (readonly, nonatomic) NSString * uuidString;
@property (readonly, nonatomic) PFUbiquityLocation * uuidFileLocation;
@property (readonly, nonatomic) char usedExistingUUIDFile;
@property (readonly, copy) NSURL * presentedItemURL;
@property (readonly) NSOperationQueue * presentedItemOperationQueue;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, copy) NSURL * primaryPresentedItemURL;

- (NSString *)uuidString;
- (PFUbiquityContainerIdentifier *)initWithLocalPeerID:(NSString *)arg0 storeName:(NSString *)arg1 andUbiquityRootLocation:(NSObject *)arg2;
- (char)identifyContainer:(id *)arg0;
- (char)usedExistingUUIDFile;
- (char)replaceIdentifierWithUUID:(id)arg0 error:(id *)arg1;
- (void)setUUIDStringFromLocation:(NSObject *)arg0;
- (char)writeToDisk:(id *)arg0;
- (PFUbiquityLocation *)uuidFileLocation;
- (void)dealloc;
- (PFUbiquityContainerIdentifier *)init;
- (NSString *)description;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)arg0;
- (NSURL *)presentedItemURL;
- (NSOperationQueue *)presentedItemOperationQueue;

@end
