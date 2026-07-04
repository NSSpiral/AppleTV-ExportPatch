/* Runtime dump - BRTumblerControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl, BREvent, BRImageControl;
@interface BRTumblerControl : BRControl
{
    unsigned int _currentIndex;
    unsigned int _itemCount;
    BRControl * _currentItem;
    BRControl * _nextItem;
    BRControl * _prevItem;
    BRControl * _nextNextItem;
    BRControl * _prevPrevItem;
    BRControl * _nextFade;
    BRControl * _prevFade;
    BRControl * _nextBlackout;
    BRControl * _prevBlackout;
    BRImageControl * _nextArrow;
    BRImageControl * _prevArrow;
    struct CGSize _sizeThatFits;
    <BRTumblerDataSource> * _dataSource;
    <BRTumblerDelegate> * _delegate;
    unsigned int _currentTransientIndex;
    NSTimer * _selectionChangeTimer;
}

@property (weak, nonatomic) <BRTumblerDataSource> * dataSource;
@property (weak, nonatomic) <BRTumblerDelegate> * delegate;
@property (readonly, nonatomic) BRControl * currentItem;
@property (nonatomic) unsigned int currentItemIndex;
@property (readonly) float itemPadding;
@property (nonatomic) unsigned int currentTransientIndex;
@property (weak, nonatomic) NSTimer * selectionChangeTimer;

- (char)brEventAction:(BREvent *)arg0;
- (void)layoutSubcontrols;
- (float)itemPadding;
- (struct CGPoint)_prevPrevPos;
- (struct CGPoint)_prevPos;
- (struct CGPoint)_nextPos;
- (struct CGPoint)_nextNextPos;
- (id)_arrowAnimations;
- (NSTimer *)selectionChangeTimer;
- (void)setSelectionChangeTimer:(NSTimer *)arg0;
- (void)setCurrentTransientIndex:(unsigned int)arg0;
- (struct CGPoint)_currentPos;
- (NSObject *)_controlFromDataSourceAtIndex:(unsigned int)arg0;
- (char)_handlePrevAnimated:(char)arg0;
- (char)_handleNextAnimated:(char)arg0;
- (void)_selectionChangeTimerHandler:(id /* block */)arg0;
- (id)CurrentItemIndexBinding;
- (void)_updateBoundCurrentItemIndex;
- (void)setCurrentItemIndex:(unsigned int)arg0;
- (unsigned int)currentItemIndex;
- (void)bindCurrentItemIndexBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (unsigned int)currentTransientIndex;
- (void)_updateCurentIndexWithTransientIndex;
- (void)setDataSource:(<BRTumblerDataSource> *)arg0;
- (void)setDelegate:(<BRTumblerDelegate> *)arg0;
- (BRTumblerControl *)init;
- (void)reload;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (<BRTumblerDataSource> *)dataSource;
- (<BRTumblerDelegate> *)delegate;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (NSString *)accessibilityLabel;
- (BRControl *)currentItem;
- (void).cxx_destruct;

@end
