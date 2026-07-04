/* Runtime dump - ATVMusicStoreOneUpViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVOneupViewController.h>

@class ATVCarouselView, BRControl, BRController;
@interface ATVMusicStoreOneUpViewController : ATVOneupViewController
{
    BRController * _stackController;
    NSArray * _items;
    int _selectedIndex;
}

@property (readonly, copy, nonatomic) NSArray * items;
@property (nonatomic) int selectedIndex;
@property (readonly, weak, nonatomic) BRController * stackController;

- (unsigned int)numberOfItemsForCarouselView:(ATVCarouselView *)arg0;
- (BRControl *)carouselView:(ATVCarouselView *)arg0 itemAtIndex:(unsigned int)arg1;
- (ATVMusicStoreOneUpViewController *)initWithItems:(NSArray *)arg0 selectedIndex:(int)arg1;
- (BRController *)stackController;
- (NSArray *)items;
- (int)selectedIndex;
- (void)setSelectedIndex:(int)arg0;
- (void).cxx_destruct;

@end
