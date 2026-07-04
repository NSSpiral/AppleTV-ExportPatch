/* Runtime dump - ATVPhotoFullScreenView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BREvent;
@interface ATVPhotoFullScreenView : BRControl
{
    char prefetchImages;
    char _initialLayoutCompleted;
    <ATVPhotoFullScreenViewDataSource> * dataSource;
    <ATVPhotoFullScreenViewDelegate> * delegate;
    long _startIndex;
    long _displayedItemIndex;
    int _startTouchXPosition;
    float _curTouchOffset;
    NSMutableArray * _requestedImages;
    unsigned int _lastRequestedItemIndex;
}

@property (nonatomic) <ATVPhotoFullScreenViewDataSource> * dataSource;
@property (nonatomic) <ATVPhotoFullScreenViewDelegate> * delegate;
@property (nonatomic) char prefetchImages;
@property (nonatomic) long _startIndex;
@property (nonatomic) long _displayedItemIndex;
@property (nonatomic) char _initialLayoutCompleted;
@property (nonatomic) int _startTouchXPosition;
@property (nonatomic) float _curTouchOffset;
@property (retain, nonatomic) NSMutableArray * _requestedImages;
@property (nonatomic) unsigned int _lastRequestedItemIndex;

+ (NSObject *)fullScreenWithStartIndex:(long)arg0;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (long)_startIndex;
- (void)_setImageLayerTargetBounds;
- (char)_initialLayoutCompleted;
- (int)_startTouchXPosition;
- (float)_curTouchOffset;
- (ATVPhotoFullScreenView *)initWithStartIndex:(long)arg0;
- (void)set_startIndex:(long)arg0;
- (void)set_displayedItemIndex:(long)arg0;
- (void)set_requestedImages:(NSMutableArray *)arg0;
- (void)set_lastRequestedItemIndex:(unsigned int)arg0;
- (void)setPrefetchImages:(char)arg0;
- (void)_requestedImageWritten:(id)arg0;
- (long)_displayedItemIndex;
- (long)_displayItemAtIndex:(long)arg0 withTransition:(char)arg1;
- (void)_requestNextImage;
- (void)_displayNextWithTransition:(char)arg0;
- (void)_displayPreviousWithTransition:(char)arg0;
- (char)prefetchImages;
- (void)set_initialLayoutCompleted:(char)arg0;
- (void)set_startTouchXPosition:(int)arg0;
- (void)set_curTouchOffset:(float)arg0;
- (NSMutableArray *)_requestedImages;
- (unsigned int)_lastRequestedItemIndex;
- (void)dealloc;
- (void)setDataSource:(<ATVPhotoFullScreenViewDataSource> *)arg0;
- (void)setDelegate:(<ATVPhotoFullScreenViewDelegate> *)arg0;
- (void)reload;
- (<ATVPhotoFullScreenViewDataSource> *)dataSource;
- (<ATVPhotoFullScreenViewDelegate> *)delegate;
- (NSString *)accessibilityLabel;
- (char)isAccessibilityElement;

@end
