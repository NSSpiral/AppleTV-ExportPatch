/* Runtime dump - BRPhotoBrowserController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRController.h>

@protocol BRFullScreenPhotoControllerDelegate;

@class BRControl, BRCursorControl, BREvent, BRGridControl, BRMediaPlayer, BRPhotoBrowserBannerButton, BRPhotoBrowserHeaderControl, BRScrollControl, BRTextControl, BRWaitSpinnerControl;
@interface BRPhotoBrowserController : BRController <BRFullScreenPhotoControllerDelegate>
{
    <BRProvider> * _provider;
    int _style;
    NSString * _subtitleKey;
    NSDateFormatter * _formatter;
    long _providerDataCount;
    BRGridControl * _grid;
    BRWaitSpinnerControl * _spinner;
    BRCursorControl * _cursorControl;
    BRScrollControl * _scroller;
    BRTextControl * _noContentMessageControl;
    NSTimer * _noContentMessageTimer;
    char _isNetworkDependent;
    char _isValidWithZeroData;
    id _screenSaverSetCollectionBlock;
    id _photoSelectionBlock;
    BRPhotoBrowserHeaderControl * _header;
    BRPhotoBrowserBannerButton * _slideshowButton;
    id _onUpdateButtons;
    BRPhotoBrowserBannerButton * _useForScreensaverButton;
    double noContentErrorDisplayDelay;
}

@property (retain, nonatomic) BRPhotoBrowserHeaderControl * header;
@property (retain, nonatomic) BRPhotoBrowserBannerButton * slideshowButton;
@property (copy, nonatomic) id onUpdateButtons;
@property (copy, nonatomic) NSString * rightJustifiedText;
@property (nonatomic) double noContentErrorDisplayDelay;
@property (copy, nonatomic) id screenSaverSetCollectionBlock;
@property (copy, nonatomic) id photoSelectionBlock;
@property (retain, nonatomic) BRPhotoBrowserBannerButton * useForScreensaverButton;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)controllerForProvider:(NSObject *)arg0 style:(int)arg1;
+ (NSObject *)controllerForProvider:(NSObject *)arg0;

- (char)brEventAction:(BREvent *)arg0;
- (void)_focusChanged:(NSNotification *)arg0;
- (void)layoutSubcontrols;
- (void)wasPushed;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (NSString *)rightJustifiedText;
- (void)setRightJustifiedText:(NSString *)arg0;
- (void)_playerStateChanged:(NSNotification *)arg0;
- (void)setHorizontalGap:(struct ?)arg0;
- (void)setVerticalGap:(struct ?)arg0;
- (NSArray *)providersForContextMenu;
- (void)wasBuried;
- (void)wasExhumed;
- (id /* block */)screenSaverSetCollectionBlock;
- (void)_handleSlideshowSelection:(id)arg0;
- (void)_screensaverPhotosDidChange:(NSDictionary *)arg0;
- (BRPhotoBrowserBannerButton *)slideshowButton;
- (char)isNetworkDependent;
- (void)setDisplaysCount:(char)arg0;
- (void)setCursorStyle:(int)arg0;
- (struct ?)verticalGap;
- (void)setPhotoSelectionBlock:(id /* block */)arg0;
- (void)_providerUpdated:(id)arg0;
- (id /* block */)photoSelectionBlock;
- (void)setIsNetworkDependent:(char)arg0;
- (void)setIsValidWithZeroData:(char)arg0;
- (id)useForScreensaverButtonForCollection:(id)arg0 preHandler:(id /* block */)arg1 isCurrentlySet:(/* block */ id)arg2;
- (void)setOnUpdateButtons:(id)arg0;
- (void)setScreenSaverSetCollectionBlock:(id /* block */)arg0;
- (char)isValidAfterDataUpdate;
- (struct ?)horizontalGap;
- (void)setLastViewedSlideIndex:(int)arg0;
- (void)photoPlaybackWillStartForPlayer:(BRMediaPlayer *)arg0;
- (int)cursorStyle;
- (void)_handleUseForScreensaverSelection:(id)arg0;
- (void)_setupControls;
- (char)_isFacesView;
- (BRPhotoBrowserController *)initWithProvider:(<BRProvider> *)arg0 style:(int)arg1;
- (void)_handleSelection:(id)arg0;
- (void)setNoContentErrorDisplayDelay:(double)arg0;
- (void)_handleProviderDataCountChange;
- (id)onUpdateButtons;
- (double)noContentErrorDisplayDelay;
- (void)_noContentTimerFired:(id)arg0;
- (NSString *)_subtitleStringForKey:(NSString *)arg0;
- (id)_containerCollection;
- (void)setSubtitleKey:(NSString *)arg0;
- (void)setUseForScreensaverButton:(BRPhotoBrowserBannerButton *)arg0;
- (BRPhotoBrowserBannerButton *)useForScreensaverButton;
- (char)displaysCount;
- (struct ?)iconVerticalOffset;
- (void)_initiateSlideshowPlaybackAtIndex:(long)arg0 inCollection:(RadioArtworkCollection *)arg1 withOptions:(NSDictionary *)arg2;
- (void)_slideshowPlayerAssetChanged:(NSNotification *)arg0;
- (id)_mediaItemInContainingControl:(BRControl *)arg0;
- (void)_handleDeletePhotoStreamItemSelection:(id)arg0;
- (NSString *)subtitleKey;
- (char)isValidWithZeroData;
- (void)setSlideshowButton:(BRPhotoBrowserBannerButton *)arg0;
- (void)_showNoContentMessage;
- (void)_hideNoContentMessage;
- (UIImage *)icon;
- (void)dealloc;
- (void)setTitle:(NSString *)arg0;
- (NSString *)title;
- (int)style;
- (NSString *)accessibilityLabel;
- (void)setStyle:(int)arg0;
- (NSString *)subtitle;
- (void)setIcon:(UIImage *)arg0;
- (void)setSubtitle:(NSString *)arg0;
- (int)columnCount;
- (void)setColumnCount:(int)arg0;
- (void)setIndex:(unsigned int)arg0;
- (BRPhotoBrowserController *)initWithProvider:(<BRProvider> *)arg0;
- (<BRProvider> *)provider;
- (void)setProvider:(<BRProvider> *)arg0;
- (void)setHeader:(BRPhotoBrowserHeaderControl *)arg0;
- (BRPhotoBrowserHeaderControl *)header;
- (void)setIconVerticalOffset:(struct ?)arg0;

@end
