/* Runtime dump - ATVFullScreenPhotoBrowserController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRViewController.h>

@protocol ATVCarouselViewDataSource;

@class ATVCarouselView, ATVPhotoDetailView, ATVPhotoMetadataViewConfigurator, ATVPhotoPlayerSwapViewController, BRControl, BREvent;
@interface ATVFullScreenPhotoBrowserController : BRViewController <ATVCarouselViewDataSource>
{
    char _shouldDisplayFullScreenCommentsBadge;
    int _type;
    NSArray * _photos;
    int _selectedIndex;
    id _photoDetails;
    id _photoAssetDetails;
    id _photoMetadataDetails;
    id _onPhotoSelection;
    id _onLikeSelection;
    id _onMetadataRequiresUpdate;
    id _onMarkCommentsAsViewed;
    id _onContextMenu;
    NSDictionary * _likeImageProxies;
    float _likeGap;
    NSMutableDictionary * _transitioningInfo;
    NSTimer * _photoMetadataViewRedisplayTimer;
    NSDate * _photoMetadataViewRedisplayTime;
    NSDictionary * _contributorLineAttributes;
    ATVPhotoPlayerSwapViewController * _playerVC;
    struct ATVFullScreenPhotoSelectionMemento _photoSelectionMemento;
}

@property (nonatomic) int type;
@property (readonly, retain, nonatomic) ATVPhotoDetailView * photoDetailView;
@property (copy, nonatomic) NSArray * photos;
@property (nonatomic) int selectedIndex;
@property (readonly, nonatomic) id selectedPhoto;
@property (nonatomic) char shouldDisplayContributorLine;
@property (nonatomic) char shouldDisplayFullScreenCommentsBadge;
@property (copy, nonatomic) id photoDetails;
@property (copy, nonatomic) id photoAssetDetails;
@property (copy, nonatomic) id photoMetadataDetails;
@property (copy, nonatomic) id onPhotoSelection;
@property (copy, nonatomic) id onLikeSelection;
@property (copy, nonatomic) id onMetadataRequiresUpdate;
@property (copy, nonatomic) id onMarkCommentsAsViewed;
@property (copy, nonatomic) id onContextMenu;
@property (copy, nonatomic) NSDictionary * likeImageProxies;
@property (nonatomic) float likeGap;
@property (readonly, nonatomic) ATVPhotoMetadataViewConfigurator * photoMetadataView;
@property (nonatomic) struct ATVFullScreenPhotoSelectionMemento photoSelectionMemento;
@property (retain, nonatomic) NSMutableDictionary * transitioningInfo;
@property (weak, nonatomic) NSTimer * photoMetadataViewRedisplayTimer;
@property (retain, nonatomic) NSDate * photoMetadataViewRedisplayTime;
@property (retain, nonatomic) NSDictionary * contributorLineAttributes;
@property (retain, nonatomic) ATVPhotoPlayerSwapViewController * playerVC;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)brEventAction:(BREvent *)arg0;
- (void)wasPushed;
- (void)wasPopped;
- (NSString *)accessibilityRangeString;
- (NSArray *)providersForContextMenu;
- (unsigned int)numberOfItemsForCarouselView:(ATVCarouselView *)arg0;
- (BRControl *)carouselView:(ATVCarouselView *)arg0 itemAtIndex:(unsigned int)arg1;
- (char)accessibilityOutputsRangeForChildren;
- (void)updatePhotoAtIndex:(unsigned int)arg0 updatedPhoto:(UIImage *)arg1;
- (void)setShouldDisplayContributorLine:(char)arg0;
- (void)setShouldDisplayFullScreenCommentsBadge:(char)arg0;
- (void)setPhotoDetails:(id)arg0;
- (void)setPhotoAssetDetails:(id)arg0;
- (void)setPhotoMetadataDetails:(id)arg0;
- (UIImage *)selectedPhoto;
- (void)startPlaybackForSelectedPhotoWithMediaAsset:(<BRMediaAsset> *)arg0;
- (void)setOnPhotoSelection:(id)arg0;
- (void)setOnLikeSelection:(id)arg0;
- (void)reloadPhotoMetadata;
- (void)setOnMetadataRequiresUpdate:(NSDate *)arg0;
- (void)setOnMarkCommentsAsViewed:(id)arg0;
- (void)setOnContextMenu:(id)arg0;
- (void)setPhotos:(NSArray *)arg0 initialIndex:(int)arg1;
- (ATVPhotoDetailView *)photoDetailView;
- (void)reloadPhotoMetadataHeader;
- (char)shouldDisplayContributorLine;
- (void)setPhotoSelectionMemento:(struct ATVFullScreenPhotoSelectionMemento)arg0;
- (void)setTransitioningInfo:(NSMutableDictionary *)arg0;
- (void)_handleSelectionChangeWithPhotosUpdated:(char)arg0;
- (void)setLikeImageProxies:(NSDictionary *)arg0;
- (void)setLikeGap:(float)arg0;
- (void)_updateCommentsBadgeWithAnimationDuration:(double)arg0;
- (ATVPhotoMetadataViewConfigurator *)photoMetadataView;
- (id)photoAssetDetails;
- (id)photoMetadataDetails;
- (void)_updateHeaderWithContributorLine:(id)arg0 liked:(id)arg1 likeStatus:(int)arg2 commentsBadgeCount:(unsigned int)arg3;
- (struct CGSize)_commentsScreenImageSize;
- (ATVPhotoPlayerSwapViewController *)playerVC;
- (void)setPlayerVC:(ATVPhotoPlayerSwapViewController *)arg0;
- (NSMutableDictionary *)transitioningInfo;
- (NSTimer *)photoMetadataViewRedisplayTimer;
- (id)onPhotoSelection;
- (void)_clearPhotoMetadataView;
- (NSDate *)onMetadataRequiresUpdate;
- (int)_updatePhotoSelectionTimestamp;
- (id)onMarkCommentsAsViewed;
- (id)onContextMenu;
- (id)photoDetails;
- (struct CGSize)_fullScreenSize;
- (void)_hidePhotoMetadataViewOnSelectionChange;
- (struct ATVFullScreenPhotoSelectionMemento)photoSelectionMemento;
- (NSDate *)photoMetadataViewRedisplayTime;
- (void)_handlePhotoMetadataViewRedisplayTimer:(NSObject *)arg0;
- (void)setPhotoMetadataViewRedisplayTimer:(NSTimer *)arg0;
- (NSDictionary *)_contributorLineAttributes;
- (NSDictionary *)likeImageProxies;
- (float)likeGap;
- (char)_handleLikeSelection:(id)arg0;
- (char)shouldDisplayFullScreenCommentsBadge;
- (id)onLikeSelection;
- (id)_accessibilityLikeTextControl;
- (void)setPhotoMetadataViewRedisplayTime:(NSDate *)arg0;
- (NSDictionary *)contributorLineAttributes;
- (void)setContributorLineAttributes:(NSDictionary *)arg0;
- (void)setLikeImageUrl:(NSURL *)arg0 defaultURL:(NSURL *)arg1;
- (ATVFullScreenPhotoBrowserController *)init;
- (void)setType:(int)arg0;
- (int)type;
- (ATVFullScreenPhotoBrowserController *)initWithType:(int)arg0;
- (NSString *)accessibilityLabel;
- (int)selectedIndex;
- (void)setSelectedIndex:(int)arg0;
- (NSString *)accessibilityHint;
- (void).cxx_destruct;
- (void)setPhotos:(NSArray *)arg0;
- (NSArray *)photos;
- (NSString *)accessibilitySecondaryLabel;

@end
