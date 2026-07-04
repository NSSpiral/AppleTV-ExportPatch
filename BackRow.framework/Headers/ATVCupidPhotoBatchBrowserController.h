/* Runtime dump - ATVCupidPhotoBatchBrowserController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVCupidPhotoBrowserTemplate.h>

@protocol ATVCarouselViewDataSource;

@class ATVCarouselView, ATVPhotoBatchBrowserView, BRControl, BRPhotoBrowserBannerButton;
@interface ATVCupidPhotoBatchBrowserController : ATVCupidPhotoBrowserTemplate <ATVCarouselViewDataSource>
{
    char _commentButtonUpdatePending;
    ATVPhotoBatchBrowserView * _photoBatchBrowserView;
    NSArray * _photoBatches;
    int _selectedBatchIndex;
    BRPhotoBrowserBannerButton * _commentsButton;
}

@property (retain, nonatomic) ATVPhotoBatchBrowserView * photoBatchBrowserView;
@property (copy, nonatomic) NSArray * photoBatches;
@property (nonatomic) int selectedBatchIndex;
@property (retain, nonatomic) BRPhotoBrowserBannerButton * commentsButton;
@property (nonatomic) char commentButtonUpdatePending;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)wasPushed;
- (NSArray *)providersForContextMenu;
- (unsigned int)numberOfItemsForCarouselView:(ATVCarouselView *)arg0;
- (BRControl *)carouselView:(ATVCarouselView *)arg0 itemAtIndex:(unsigned int)arg1;
- (void)wasExhumed;
- (ATVCupidPhotoBatchBrowserController *)initForCollection:(RadioArtworkCollection *)arg0 dataClient:(ATVDataClient *)arg1;
- (void)_reloadView;
- (void)_focusPhotoAtIndex:(int)arg0;
- (NSObject *)_sortedResultForResult:(NSObject *)arg0;
- (int)_fullScreenControllerType;
- (char)_dataRequiresUpdateWithNotification:(NSNotification *)arg0;
- (void)_screensaverPhotosDidChange:(NSDictionary *)arg0;
- (ATVPhotoBatchBrowserView *)photoBatchBrowserView;
- (void)setSelectedBatchIndex:(int)arg0;
- (void)setPhotoBatchBrowserView:(ATVPhotoBatchBrowserView *)arg0;
- (char)commentButtonUpdatePending;
- (void)_updateNewCommentsButton;
- (NSArray *)photoBatches;
- (int)selectedBatchIndex;
- (NSArray *)_batchesForPhotos:(id)arg0;
- (void)setPhotoBatches:(NSArray *)arg0;
- (void)setCommentButtonUpdatePending:(char)arg0;
- (char)_shouldDisplayScreensaverButton;
- (id)_photosWithNewComments:(int *)arg0;
- (BRPhotoBrowserBannerButton *)commentsButton;
- (void)setCommentsButton:(BRPhotoBrowserBannerButton *)arg0;
- (char)_handleNewCommentsSelection:(id)arg0;
- (void)dealloc;
- (void)_updateButtons;
- (void).cxx_destruct;

@end
