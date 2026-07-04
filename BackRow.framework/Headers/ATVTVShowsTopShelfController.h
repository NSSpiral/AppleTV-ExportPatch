/* Runtime dump - ATVTVShowsTopShelfController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/TVTopShelfController.h>

@class BRControl, BRMediaShelfView;
@interface ATVTVShowsTopShelfController : TVTopShelfController

- (BRControl *)mediaShelf:(BRMediaShelfView *)arg0 itemAtIndexPath:(NSIndexPath *)arg1;
- (long)numberOfFlatColumnsInMediaShelf:(BRMediaShelfView *)arg0;
- (float)horizontalGapForMediaShelf:(BRMediaShelfView *)arg0;

@end
