/* Runtime dump - BRPageStripView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BRCursorControl, BRDotArrayControl, BREvent, BRHeaderControl, BRImageControl;
@interface BRPageStripView : BRControl
{
    id _dataSource;
    id _delegate;
    BRHeaderControl * _headerControl;
    BRCursorControl * _cursor;
    BRDotArrayControl * _dotControl;
    BRImageControl * _overlayImageControl;
    BRControl * _descControl;
    int _selectedIndex;
    BRControl * _prevPrevControl;
    BRControl * _prevControl;
    BRControl * _selectedControl;
    BRControl * _nextControl;
    BRControl * _nextNextControl;
    char _isAnimating;
    BREvent * _skippedEvent;
}

@property (nonatomic) id dataSource;
@property (nonatomic) id delegate;
@property (copy, nonatomic) NSString * title;
@property (retain, nonatomic) ATVImage * headerImage;
@property (retain, nonatomic) ATVImage * overlayImage;
@property (nonatomic) int selectedIndex;
@property (readonly, nonatomic) BRDotArrayControl * dotControl;
@property (nonatomic) char cursorHidden;

+ (BRPageStripView *)pageStripView;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (void)setHeaderImage:(ATVImage *)arg0;
- (void)setCursorHidden:(char)arg0;
- (BRControl *)focusedControlForEvent:(BREvent *)arg0 focusPoint:(struct CGPoint *)arg1;
- (void)setOverlayImage:(ATVImage *)arg0;
- (char)_loadLeft;
- (char)_loadRight;
- (void)_setPagesTargetBounds;
- (char)isCursorHidden;
- (BRDotArrayControl *)dotControl;
- (struct CGPoint)_prevPrevPos;
- (struct CGPoint)_prevPos;
- (struct CGPoint)_selectedPos;
- (struct CGPoint)_nextPos;
- (struct CGPoint)_nextNextPos;
- (void)_removeNextNext:(id)arg0;
- (void)_animationFinished:(id)arg0;
- (void)_removePrevPrev:(id)arg0;
- (float)_xPosOffset;
- (float)_yPosOffset;
- (ATVImage *)overlayImage;
- (void)dealloc;
- (void)setDataSource:(NSObject *)arg0;
- (void)setDelegate:(NSObject *)arg0;
- (BRPageStripView *)init;
- (void)setTitle:(NSString *)arg0;
- (void)reload;
- (NSObject *)dataSource;
- (NSObject *)delegate;
- (NSString *)title;
- (int)selectedIndex;
- (void)setSelectedIndex:(int)arg0;
- (ATVImage *)headerImage;

@end
