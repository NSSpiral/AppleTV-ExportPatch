/* Runtime dump - BRAccountMenuItemPopulator
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRBaseMenuItemLayerPopulator.h>

@class BRMenuItem;
@interface BRAccountMenuItemPopulator : BRBaseMenuItemLayerPopulator

+ (char)canHandleObject:(NSObject *)arg0;

- (NSString *)title;
- (BRMenuItem *)menuItem;

@end
