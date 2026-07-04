/* Runtime dump - BRSimpleMenuItemPopulator
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRBaseMenuItemLayerPopulator.h>

@class BRMenuItem;
@interface BRSimpleMenuItemPopulator : BRBaseMenuItemLayerPopulator

+ (char)canHandleObject:(NSObject *)arg0;

- (NSString *)title;
- (BRMenuItem *)menuItem;

@end
