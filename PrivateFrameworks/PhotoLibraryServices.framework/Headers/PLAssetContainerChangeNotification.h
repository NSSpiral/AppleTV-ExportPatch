/* Runtime dump - PLAssetContainerChangeNotification
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAssetContainerChangeNotification : PLContainerChangeNotification
{
    char _titleDidChange;
    char _keyAssetDidChange;
    NSDictionary * _userInfo;
}

@property (readonly, retain, nonatomic) <PLAssetContainer> * container;
@property (readonly, retain, nonatomic) NSObject<PLAlbumProtocol> * album;
@property (readonly, nonatomic) char titleDidChange;
@property (readonly, nonatomic) char keyAssetDidChange;

+ (NSObject *)notificationWithContainer:(<PLAssetContainer> *)arg0 snapshot:(NSObject *)arg1 changedAssets:(struct changeList_s)arg2;

- (void)dealloc;
- (NSString *)description;
- (NSString *)name;
- (NSDictionary *)userInfo;
- (<PLAssetContainer> *)container;
- (void)_calculateDiffs;
- (NSObject *)assetContainer;
- (char)_getOldSet:(id *)arg0 newSet:(id *)arg1;
- (struct NSObject *)album;
- (char)titleDidChange;
- (char)keyAssetDidChange;
- (char)hasDeletes;
- (NSString *)_contentRelationshipName;

@end
