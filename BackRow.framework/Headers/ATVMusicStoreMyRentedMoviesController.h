/* Runtime dump - ATVMusicStoreMyRentedMoviesController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRController.h>

@class ATVRentedMediaProvider, BRControl, BRCursorControl, BRGridControl, BRGridView, BRScrollControl;
@interface ATVMusicStoreMyRentedMoviesController : BRController
{
    char _allowOurselfToBeRemovedFromStack;
    ATVRentedMediaProvider * _rentals;
    BRScrollControl * _scroller;
    BRGridView * _grid;
    BRCursorControl * _cursor;
    int _numberOfExistingRentals;
}

@property (readonly) ATVRentedMediaProvider * rentals;
@property (readonly) BRScrollControl * scroller;
@property (readonly) BRGridView * grid;
@property (readonly) BRCursorControl * cursor;
@property (readonly) int numberOfExistingRentals;
@property (readonly) char allowOurselfToBeRemovedFromStack;

- (void)layoutSubcontrols;
- (long)numberOfItemsInGrid:(BRGridControl *)arg0;
- (long)numberOfColumnsInGrid:(BRGridControl *)arg0;
- (BRControl *)grid:(BRGridView *)arg0 itemAtIndex:(long)arg1;
- (float)grid:(BRGridView *)arg0 heightForItemAtIndex:(long)arg1;
- (ATVMusicStoreMyRentedMoviesController *)initWithRentalsProvider:(ATVRentedMediaProvider *)arg0;
- (void)_rentalsUpdated:(id)arg0;
- (void)_setupView;
- (ATVRentedMediaProvider *)rentals;
- (int)numberOfExistingRentals;
- (char)allowOurselfToBeRemovedFromStack;
- (void)dealloc;
- (ATVMusicStoreMyRentedMoviesController *)init;
- (BRScrollControl *)scroller;
- (BRCursorControl *)cursor;
- (BRGridView *)grid;

@end
