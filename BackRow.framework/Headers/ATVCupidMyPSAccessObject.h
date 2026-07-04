/* Runtime dump - ATVCupidMyPSAccessObject
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVCupidAccessObject.h>

@protocol ATVCupidMyPSImageLoadTaskDelegate;
@protocol ATVPushNotificationListener;
@protocol MSDeleterPlugin;
@protocol MSSubscriberPlugin;

@class ATVCupidMyPSImageLoadTask, BRImageManager;
@interface ATVCupidMyPSAccessObject : ATVCupidAccessObject <MSSubscriberPlugin, MSDeleterPlugin, ATVCupidMyPSImageLoadTaskDelegate, ATVPushNotificationListener>
{
    struct sqlite3 * _db;
    NSArray * _assets;
    BRImageManager * _imageManager;
    <ATVCupidMyPSAccessObjectDelegate> * _delegate;
    <MSSubscriber> * _subscriber;
    ATVCupidMyPSImageLoadTask * _imageLoadTask;
}

@property (retain, nonatomic) NSArray * assets;
@property (retain, nonatomic) BRImageManager * imageManager;
@property (weak, nonatomic) <ATVCupidMyPSAccessObjectDelegate> * delegate;
@property (weak, nonatomic) <MSSubscriber> * subscriber;
@property (retain, nonatomic) ATVCupidMyPSImageLoadTask * imageLoadTask;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSNumber *)accessObjectWithAppleAccount:(ACAccount *)arg0;
+ (NSObject *)_dbCachePathForPersonID:(NSObject *)arg0;
+ (NSObject *)_imageCachePathForPersonID:(NSObject *)arg0;
+ (id /* <MSSubscriberPlugin> */)subscriberPluginForPersonID:(NSString *)arg0;
+ (id /* <MSDeleterPlugin> */)deleterPluginForPersonID:(NSString *)arg0;
+ (NSArray *)personIDsForPollingTriggeredByPushNotification;

- (void)setSubscriber:(<MSSubscriber> *)arg0;
- (void)_didRequestAssetRetrievalForAssetCollections:(id)arg0;
- (void)_didFinishRetrievingAsset:(NSSet *)arg0 imageData:(NSData *)arg1 error:(NSError *)arg2;
- (void)_didReceiveDeleteForAssetCollections:(id)arg0;
- (void)_didFinishDeletingAssetCollection:(id)arg0 error:(NSError *)arg1;
- (ATVCupidMyPSImageLoadTask *)imageLoadTask;
- (void)_imageLoadTaskPerform;
- (void)_createOrOpenDB;
- (id)_loadAssetsFromDB;
- (void)_loadImages;
- (void)setImageLoadTask:(ATVCupidMyPSImageLoadTask *)arg0;
- (void)_removeDB;
- (void)_purgeImages;
- (NSObject *)_assetForAssetID:(NSObject *)arg0;
- (NSObject *)_imageForAssetID:(NSObject *)arg0;
- (void)_insertDBAssets:(NSArray *)arg0;
- (void)_removeAssets:(NSArray *)arg0;
- (void)_updateDBAsset:(NSSet *)arg0 newState:(int)arg1;
- (void)_writeImageFromImageData:(NSData *)arg0 assetID:(NSString *)arg1 completionHandler:(id /* block */)arg2;
- (void)_removeDBAssets:(NSArray *)arg0;
- (void)_purgeImageForAssetID:(NSObject *)arg0;
- (void)imageLoadTaskDidChangeShouldPerformLoad:(ATVCupidMyPSImageLoadTask *)arg0;
- (void)removeAssetForAssetID:(NSObject *)arg0;
- (void)_runSetup;
- (NSObject *)_imageForAssetID:(NSObject *)arg0 canLoad:(char *)arg1;
- (NSObject *)_imageTokenForAssetID:(NSObject *)arg0;
- (void)_loadImageForImageTokens:(id)arg0;
- (void)setImageManager:(BRImageManager *)arg0;
- (void)_insertDBAsset:(NSSet *)arg0;
- (void)_removeDBAsset:(NSSet *)arg0;
- (NSObject *)_imagePathForAssetID:(NSObject *)arg0;
- (void)_tearDown;
- (<MSSubscriber> *)subscriber;
- (void)setDelegate:(<ATVCupidMyPSAccessObjectDelegate> *)arg0;
- (<ATVCupidMyPSAccessObjectDelegate> *)delegate;
- (NSDateFormatter *)_dateFormatter;
- (void).cxx_destruct;
- (BRImageManager *)imageManager;
- (void)pushNotificationServer:(ATVPushNotificationServer *)arg0 didReceiveMessageForTopic:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (void)pushNotificationServerTokenDidChange:(ATVPushNotificationServer *)arg0;
- (void)tearDown;
- (void)subscriberWillAssignPluginAsDelegateOfSubscriber:(id /* <MSSubscriber> */)arg0;
- (void)subscriber:(<MSSubscriber> *)arg0 didReceiveDeleteForAssetCollections:(NSArray *)arg1 streamID:(NSString *)arg2;
- (void)subscriber:(<MSSubscriber> *)arg0 didRequestAssetRetrievalForAssetCollections:(NSArray *)arg1 streamID:(NSString *)arg2;
- (void)subscriber:(<MSSubscriber> *)arg0 didFinishRequestingAssetRetrievalForStreamID:(NSString *)arg1;
- (void)subscriber:(<MSSubscriber> *)arg0 didFailToRetriveSubscriptionUpdateWithError:(NSError *)arg1;
- (void)subscriber:(<MSSubscriber> *)arg0 didFinishRetrievingAsset:(MSAsset *)arg1 error:(NSError *)arg2;
- (void)deleter:(MSDeleter *)arg0 didFinishDeletingAssetCollection:(MSAssetCollection *)arg1 error:(NSError *)arg2;
- (NSArray *)assets;
- (void)setAssets:(NSArray *)arg0;

@end
