/* Runtime dump - ATVPhotoBatchView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRControl;
@interface ATVPhotoBatchView : BRControl
{
    id _photoSizeHandler;
    id _photoControlHandler;
    NSArray * _items;
    int _selectedIndex;
    BRControl * _descriptionView;
    NSArray * _photoViews;
    int _initialSelectedIndex;
    NSArray * _photoFramesFraction;
    struct ? _singleBlockSize;
    struct CGSize _calculatedSizeFraction;
    struct _NSRange _presentedBlocksRange;
    struct CGRect _activeRect;
}

@property (nonatomic) struct ? singleBlockSize;
@property (copy, nonatomic) id photoSizeHandler;
@property (copy, nonatomic) id photoControlHandler;
@property (copy, nonatomic) NSArray * items;
@property (nonatomic) int selectedIndex;
@property (retain, nonatomic) BRControl * descriptionView;
@property (readonly, nonatomic) struct CGSize descriptionArea;
@property (readonly, nonatomic) struct CGRect calculatedFocusRect;
@property (copy, nonatomic) NSArray * photoViews;
@property (nonatomic) int initialSelectedIndex;
@property (nonatomic) struct CGSize calculatedSizeFraction;
@property (retain, nonatomic) NSArray * photoFramesFraction;
@property (nonatomic) struct _NSRange presentedBlocksRange;
@property (nonatomic) struct CGRect activeRect;

- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)setFocusedControl:(BRControl *)arg0;
- (NSArray *)accessibilityControls;
- (void)setPhotoSizeHandler:(id /* block */)arg0;
- (void)setPhotoControlHandler:(id /* block */)arg0;
- (void)setDescriptionView:(BRControl *)arg0;
- (id)SelectedIndexBinding;
- (void)_updateBoundSelectedIndex;
- (void)setSingleBlockSize:(struct ?)arg0;
- (char)_calculatePhotoFrames;
- (void)setActiveRect:(struct CGRect)arg0;
- (void)setPresentedBlocksRange:(struct _NSRange)arg0;
- (struct _NSRange)presentedBlocksRange;
- (NSArray *)photoViews;
- (struct CGSize)descriptionArea;
- (NSArray *)photoFramesFraction;
- (BRControl *)descriptionView;
- (struct CGRect)activeRect;
- (void)_resetSelectedIndexWithControl:(BRControl *)arg0;
- (struct ?)singleBlockSize;
- (struct CGSize)calculatedSizeFraction;
- (id /* block */)photoControlHandler;
- (void)setPhotoViews:(NSArray *)arg0;
- (void)_selfFocusChanged:(NSNotification *)arg0;
- (NSObject *)_photoFramesFractionWithItemsInRange:(struct _NSRange)arg0 blockIndex:(int)arg1 offset:(float)arg2 width:(float *)arg3;
- (void)setCalculatedSizeFraction:(struct CGSize)arg0;
- (void)setPhotoFramesFraction:(NSArray *)arg0;
- (id /* block */)photoSizeHandler;
- (void)bindSelectedIndexBindingToObject:(NSObject *)arg0 withKeyPath:(NSString *)arg1 options:(NSDictionary *)arg2;
- (struct CGRect)calculatedFocusRect;
- (void)activateBlocksInRect:(struct CGRect)arg0;
- (char)accessibilityIgnoresControlReload;
- (unsigned int)countOfPhotos;
- (unsigned int)indexInPhotosOfObject:(NSObject *)arg0;
- (NSObject *)objectInPhotosAtIndex:(unsigned int)arg0;
- (void)dealloc;
- (ATVPhotoBatchView *)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (NSString *)accessibilityLabel;
- (NSArray *)items;
- (void)setItems:(NSArray *)arg0;
- (int)selectedIndex;
- (void)setSelectedIndex:(int)arg0;
- (int)initialSelectedIndex;
- (void).cxx_destruct;
- (void)setInitialSelectedIndex:(int)arg0;

@end
