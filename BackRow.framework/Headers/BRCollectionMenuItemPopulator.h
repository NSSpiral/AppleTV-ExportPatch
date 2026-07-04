/* Runtime dump - BRCollectionMenuItemPopulator
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRBaseMenuItemLayerPopulator.h>

@class BRMenuItem;
@interface BRCollectionMenuItemPopulator : BRBaseMenuItemLayerPopulator

+ (char)canHandleObject:(NSObject *)arg0;

- (float)menuItemHeightForObject:(NSObject *)arg0 delegate:(NSObject *)arg1;
- (NSString *)numItemsString;
- (NSArray *)_folderItemTypes;
- (unsigned int)numItemsInCollection:(id)arg0 hasOnlySongs:(char *)arg1;
- (NSPredicate *)allowedTypesPredicate;
- (BRMenuItem *)menuItem;

@end
