/* Runtime dump - BRSongMenuItemPopulator
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRBaseMenuItemLayerPopulator.h>

@class BRMenuItem;
@interface BRSongMenuItemPopulator : BRBaseMenuItemLayerPopulator

+ (char)canHandleObject:(NSObject *)arg0;

- (float)menuItemHeightForObject:(NSObject *)arg0 delegate:(NSObject *)arg1;
- (BRMenuItem *)menuItem;

@end
