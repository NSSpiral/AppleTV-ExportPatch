/* Runtime dump - ATVPhotoBatchBrowserView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class ATVCarouselView, ATVCursorTracker, BRControl, BRGridView, BRPhotoBrowserHeaderControl;
@interface ATVPhotoBatchBrowserView : BRControl
{
    BRPhotoBrowserHeaderControl * _header;
    BRControl * _photoContainer;
    id _onContainerLayout;
    ATVCursorTracker * _cursorTracker;
}

@property (readonly, nonatomic) ATVCarouselView * carousel;
@property (readonly, nonatomic) BRGridView * grid;
@property (retain, nonatomic) BRPhotoBrowserHeaderControl * header;
@property (retain, nonatomic) BRControl * photoContainer;
@property (copy, nonatomic) id onContainerLayout;
@property (retain, nonatomic) ATVCursorTracker * cursorTracker;

- (void)layoutSubcontrols;
- (void)configureCarouselAsPhotoContainer;
- (void)setCursorTracker:(ATVCursorTracker *)arg0;
- (ATVCursorTracker *)cursorTracker;
- (NSObject *)onContainerLayout;
- (BRControl *)photoContainer;
- (void)setPhotoContainer:(BRControl *)arg0;
- (void)setOnContainerLayout:(NSObject *)arg0;
- (void)configureGridAsPhotoContainer;
- (void)focusGridControlAtIndex:(int)arg0;
- (ATVPhotoBatchBrowserView *)init;
- (NSString *)accessibilityLabel;
- (void).cxx_destruct;
- (ATVCarouselView *)carousel;
- (void)setHeader:(BRPhotoBrowserHeaderControl *)arg0;
- (BRPhotoBrowserHeaderControl *)header;
- (BRGridView *)grid;

@end
