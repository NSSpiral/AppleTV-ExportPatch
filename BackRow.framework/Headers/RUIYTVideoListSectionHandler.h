/* Runtime dump - RUIYTVideoListSectionHandler
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol RUIYTListSectionHandling;
@protocol RUIYTVideoPlaybackAspectDelegate;

@class BRControl, RUIYTAssetsInfo, RUIYTListDataSourceAspect, RUIYTVideoPlaybackAspect;
@interface RUIYTVideoListSectionHandler : NSObject <RUIYTListSectionHandling, RUIYTVideoPlaybackAspectDelegate>
{
    RUIYTVideoPlaybackAspect * _videoPlaybackAspect;
    RUIYTListDataSourceAspect * _listDataSourceAspect;
    NSDictionary * _likesBadgeTextAttributes;
}

@property (readonly, weak, nonatomic) RUIYTListDataSourceAspect * listDataSourceAspect;
@property (retain, nonatomic) NSDictionary * likesBadgeTextAttributes;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSDictionary *)likesBadgeTextAttributes;
- (RUIYTListDataSourceAspect *)listDataSourceAspect;
- (char)itemSelectedAtIndex:(NSIndexPath *)arg0 action:(int)arg1 defer:(char *)arg2;
- (NSString *)itemIDForIndex:(NSIndexPath *)arg0;
- (float)itemHeightForIndex:(NSIndexPath *)arg0;
- (BRControl *)previewForIndex:(NSIndexPath *)arg0 defer:(char *)arg1;
- (char)isItemPlayableAtIndex:(NSIndexPath *)arg0;
- (void)moreAssetsAvailable:(RUIYTAssetsInfo *)arg0 forSection:(unsigned int)arg1;
- (char)moreAssetsFailed:(NSError *)arg0 forSection:(unsigned int)arg1;
- (char)loadMoreAssetsForVideoPlaybackAspect:(RUIYTVideoPlaybackAspect *)arg0;
- (void)playbackWillEndForVideoPlaybackAspect:(RUIYTVideoPlaybackAspect *)arg0 error:(NSError *)arg1;
- (RUIYTVideoListSectionHandler *)initWithListDataSourceAspect:(RUIYTListDataSourceAspect *)arg0 videoPlaybackAspect:(RUIYTVideoPlaybackAspect *)arg1;
- (void)setLikesBadgeTextAttributes:(NSDictionary *)arg0;
- (BRControl *)itemForIndex:(NSIndexPath *)arg0;
- (void).cxx_destruct;

@end
