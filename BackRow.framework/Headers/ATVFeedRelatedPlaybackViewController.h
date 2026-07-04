/* Runtime dump - ATVFeedRelatedPlaybackViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVRelatedPlaybackViewController.h>

@protocol ATVUpdatable;

@class ATVFeedDocument, ATVFeedElement, ATVFeedRelatedPlaybackElement, ATVVideoAsset, BRControl, BRListControl, BRListView, BRMenuItem;
@interface ATVFeedRelatedPlaybackViewController : ATVRelatedPlaybackViewController <ATVUpdatable>
{
    ATVFeedElement * _playerElement;
    ATVFeedDocument * _feedDocument;
    ATVVideoAsset * _upNextVideo;
    <BRImageProxy> * _upNextVideoImageProxy;
    BRControl * _relatedPlayerView;
    BRListView * _optionsView;
}

@property (readonly, retain, nonatomic) ATVFeedElement * playerElement;
@property (retain, nonatomic) ATVFeedDocument * feedDocument;
@property (readonly, retain, nonatomic) ATVFeedRelatedPlaybackElement * relatedPlaybackElement;
@property (retain, nonatomic) ATVVideoAsset * upNextVideo;
@property (retain, nonatomic) <BRImageProxy> * upNextVideoImageProxy;
@property (retain, nonatomic) BRControl * relatedPlayerView;
@property (retain, nonatomic) BRListView * optionsView;

- (BRMenuItem *)list:(BRListControl *)arg0 menuItemForRowAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfSectionsInList:(BRListControl *)arg0;
- (long)list:(BRListControl *)arg0 numberOfRowsInSection:(long)arg1;
- (BRControl *)list:(BRListControl *)arg0 sectionHeaderForSection:(long)arg1;
- (float)list:(BRListControl *)arg0 heightForItemAtIndexPath:(NSIndexPath *)arg1;
- (void)_imageUpdated:(id)arg0;
- (ATVFeedDocument *)feedDocument;
- (void)updateWithPropertyList:(NSDictionary *)arg0;
- (void)updateWithFeedElement:(ATVFeedElement *)arg0;
- (void)setFeedDocument:(ATVFeedDocument *)arg0;
- (ATVFeedRelatedPlaybackViewController *)initWithPlayer:(ATVPlayer *)arg0 playerElement:(ATVFeedElement *)arg1;
- (ATVFeedRelatedPlaybackElement *)relatedPlaybackElement;
- (BRListView *)optionsView;
- (char)_canDisplayUpNextMenuSection;
- (void)setUpNextVideoImageProxy:(<BRImageProxy> *)arg0;
- (NSString *)_upNextTimeString;
- (char)_handleUpNextMenuItemSelection:(id)arg0;
- (char)_containsOptions:(NSDictionary *)arg0;
- (void)setUpNextVideo:(ATVVideoAsset *)arg0;
- (void)setRelatedPlayerView:(BRControl *)arg0;
- (void)setOptionsView:(BRListView *)arg0;
- (<BRImageProxy> *)upNextVideoImageProxy;
- (NSObject *)_makeRelatedPlaybackView;
- (ATVFeedElement *)playerElement;
- (NSSet *)_upNextJSParamterFromVideoAsset:(NSSet *)arg0 context:(struct OpaqueJSContext *)arg1;
- (ATVVideoAsset *)upNextVideo;
- (BRControl *)relatedPlayerView;
- (void)_prepareRelatedPlayback;
- (void)_cancelPreparation;
- (void)_presentationDidBegin;
- (void)_remainingPlaybackTimeDidChange;
- (void)_cleanup;
- (void).cxx_destruct;

@end
