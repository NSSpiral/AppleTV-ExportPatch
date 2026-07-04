/* Runtime dump - PFUbiquityMetadataFactoryFilePresenter
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityMetadataFactoryFilePresenter : NSObject <NSFilePresenter>
{
    NSURL * _presentedItemURL;
    PFUbiquityLocation * _presentedItemLocation;
}

@property (readonly, copy) NSURL * presentedItemURL;
@property (readonly, nonatomic) PFUbiquityLocation * presentedItemLocation;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, retain) NSOperationQueue * presentedItemOperationQueue;
@property (readonly, copy) NSURL * primaryPresentedItemURL;

+ (void)initialize;

- (PFUbiquityMetadataFactoryFilePresenter *)initWithMetadataStoreFileLocation:(PFUbiquityLocation *)arg0;
- (PFUbiquityLocation *)presentedItemLocation;
- (void)dealloc;
- (PFUbiquityMetadataFactoryFilePresenter *)init;
- (void)relinquishPresentedItemToReader:(NSObject *)arg0;
- (void)relinquishPresentedItemToWriter:(NSObject *)arg0;
- (void)savePresentedItemChangesWithCompletionHandler:(id /* block */)arg0;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)arg0;
- (NSURL *)presentedItemURL;
- (NSOperationQueue *)presentedItemOperationQueue;

@end
