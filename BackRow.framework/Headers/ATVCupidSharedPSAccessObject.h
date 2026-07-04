/* Runtime dump - ATVCupidSharedPSAccessObject
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVCupidAccessObject.h>

@protocol ATVPushNotificationListener;
@protocol MSASModelObserver;
@protocol MSASPlugin;
@interface ATVCupidSharedPSAccessObject : ATVCupidAccessObject <MSASPlugin, MSASModelObserver, ATVPushNotificationListener>
{
    ACAccount * appleAccount;
    <ATVCupidSharedPSAccessObjectDelegate> * _delegate;
    id _completionHandler;
    NSCache * _mediaURLCache;
}

@property (weak, nonatomic) <ATVCupidSharedPSAccessObjectDelegate> * delegate;
@property (retain, nonatomic) ACAccount * appleAccount;
@property (copy, nonatomic) id completionHandler;
@property (retain, nonatomic) NSCache * mediaURLCache;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSNumber *)accessObjectWithAppleAccount:(ACAccount *)arg0;
+ (void)initialize;
+ (NSObject *)delegatePluginForPersonID:(NSString *)arg0;

- (void)removeAssetForAssetID:(NSObject *)arg0;
- (void)_runSetup;
- (NSObject *)_imageForAssetID:(NSObject *)arg0 canLoad:(char *)arg1;
- (NSObject *)_imageTokenForAssetID:(NSObject *)arg0;
- (void)_loadImageForImageTokens:(id)arg0;
- (void)setAppleAccount:(ACAccount *)arg0;
- (unsigned int)numberOfAssetsForAlbumID:(NSObject *)arg0;
- (NSObject *)invitationForAlbumID:(NSObject *)arg0;
- (NSObject *)accessControlsForAlbumID:(NSObject *)arg0;
- (char)isAlbumUnviewedForAlbumID:(NSObject *)arg0;
- (id)albumIDs;
- (NSObject *)captionForAssetID:(NSObject *)arg0;
- (NSObject *)commentsForAssetID:(NSObject *)arg0;
- (NSObject *)lastViewedCommentDateForAssetID:(NSObject *)arg0;
- (char)isAssetUnviewedForAssetID:(NSObject *)arg0;
- (void)resolveMediaURLForMSAsset:(NSSet *)arg0 completionHandler:(id /* block */)arg1;
- (NSObject *)_serverSideModel;
- (NSCache *)mediaURLCache;
- (void)_didFinishRetrievingAsset:(NSSet *)arg0 inAlbum:(MSASAlbum *)arg1 imageData:(NSData *)arg2 error:(NSError *)arg3;
- (void)setMediaURLCache:(NSCache *)arg0;
- (NSSet *)_imageTokenForMSAsset:(NSSet *)arg0;
- (NSObject *)albumForAlbumID:(NSObject *)arg0;
- (void)removeAlbumForAlbumID:(NSObject *)arg0;
- (void)setAlbumIsViewedForAlbumID:(NSObject *)arg0;
- (void)acceptInvitationForAlbumID:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)rejectInvitationForAlbumID:(NSObject *)arg0;
- (void)unsubsribeFromAlbumForAlbumID:(NSObject *)arg0;
- (NSObject *)assetForAssetID:(NSObject *)arg0;
- (NSObject *)assetsForAlbumID:(NSObject *)arg0;
- (NSObject *)latestAssetForAlbumID:(NSObject *)arg0;
- (void)addComment:(MSASComment *)arg0 forAssetID:(NSObject *)arg1;
- (void)removeCommentForCommentID:(NSObject *)arg0;
- (void)setLastViewedCommentDate:(NSDate *)arg0 forAssetID:(NSObject *)arg1;
- (void)_tearDown;
- (void)setDelegate:(<ATVCupidSharedPSAccessObjectDelegate> *)arg0;
- (<ATVCupidSharedPSAccessObjectDelegate> *)delegate;
- (id /* block */)completionHandler;
- (void).cxx_destruct;
- (void)setCompletionHandler:(id /* block */)arg0;
- (ACAccount *)appleAccount;
- (void)pushNotificationServer:(ATVPushNotificationServer *)arg0 didReceiveMessageForTopic:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (void)pushNotificationServerTokenDidChange:(ATVPushNotificationServer *)arg0;
- (void)tearDown;
- (void)MSASModel:(id /* <MSASModel> */)arg0 didFinishAcceptingInvitation:(MSASInvitation *)arg1 forAlbum:(MSASAlbum *)arg2 error:(NSError *)arg3;
- (void)MSASModel:(id /* <MSASModel> */)arg0 didFindAlbumMetadataChange:(MSASAlbum *)arg1;
- (void)MSASModel:(id /* <MSASModel> */)arg0 didFindAccessControlChange:(MSASSharingRelationship *)arg1 inAlbum:(MSASAlbum *)arg2;
- (void)MSASModel:(id /* <MSASModel> */)arg0 didFindCommentChange:(MSASComment *)arg1 inAssetCollection:(MSASAssetCollection *)arg2 inAlbum:(MSASAlbum *)arg3;
- (void)MSASModel:(id /* <MSASModel> */)arg0 didMarkAssetCollection:(MSASAssetCollection *)arg1 asHavingUnreadComments:(char)arg2 inAlbum:(MSASAlbum *)arg3;
- (void)MSASModel:(id /* <MSASModel> */)arg0 didMarkAlbum:(MSASAlbum *)arg1 asHavingUnreadContent:(char)arg2;
- (void)MSASModel:(id /* <MSASModel> */)arg0 didFinishRetrievingAsset:(MSAsset *)arg1 inAlbum:(MSASAlbum *)arg2 error:(NSError *)arg3;
- (void)MSASModel:(id /* <MSASModel> */)arg0 didFindNewAlbums:(NSArray *)arg1 info:(NSDictionary *)arg2;
- (void)MSASModel:(id /* <MSASModel> */)arg0 didFindDeletedAlbums:(NSArray *)arg1 info:(NSDictionary *)arg2;
- (void)MSASModel:(id /* <MSASModel> */)arg0 didFindNewAssetCollections:(NSArray *)arg1 inAlbum:(MSASAlbum *)arg2 info:(NSDictionary *)arg3;
- (void)MSASModel:(id /* <MSASModel> */)arg0 didFindDeletedAssetCollections:(NSArray *)arg1 inAlbum:(MSASAlbum *)arg2 info:(NSDictionary *)arg3;
- (void)MSASModel:(id /* <MSASModel> */)arg0 didFindNewAccessControls:(NSArray *)arg1 inAlbum:(MSASAlbum *)arg2 info:(NSDictionary *)arg3;
- (void)MSASModel:(id /* <MSASModel> */)arg0 didFindDeletedAccessControls:(NSArray *)arg1 inAlbum:(MSASAlbum *)arg2 info:(NSDictionary *)arg3;
- (void)MSASModel:(id /* <MSASModel> */)arg0 didFindNewComments:(NSArray *)arg1 forAssetCollection:(MSASAssetCollection *)arg2 inAlbum:(MSASAlbum *)arg3 info:(NSDictionary *)arg4;
- (void)MSASModel:(id /* <MSASModel> */)arg0 didFindDeletedComments:(NSArray *)arg1 forAssetCollection:(MSASAssetCollection *)arg2 inAlbum:(MSASAlbum *)arg3 info:(NSDictionary *)arg4;
- (NSArray *)albums;

@end
