/* Runtime dump - BRBaseMenuItemLayerPopulator
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRMenuItem;
@interface BRBaseMenuItemLayerPopulator : NSObject
{
    id _object;
    id _delegate;
    unsigned int _matchOrder;
}

+ (char)canHandleObject:(NSObject *)arg0;

- (NSString *)rightJustifiedText;
- (unsigned int)matchOrder;
- (NSObject *)menuItemForObject:(NSObject *)arg0 delegate:(NSObject *)arg1;
- (float)menuItemHeightForObject:(NSObject *)arg0 delegate:(NSObject *)arg1;
- (NSObject *)titleForObject:(NSObject *)arg0 delegate:(NSObject *)arg1;
- (CALayer *)dividerLayer;
- (NSString *)lowerLeftString;
- (NSString *)lowerCenteredString;
- (UIImage *)upperRightImage;
- (UIImage *)lowerRightImage;
- (char)shouldUseMultilineItem:(NSObject *)arg0;
- (void)dealloc;
- (BRBaseMenuItemLayerPopulator *)init;
- (NSString *)title;
- (NSString *)subtitle;
- (void)setObject:(NSObject *)arg0;
- (UIImage *)thumbnailImage;
- (BRMenuItem *)menuItem;

@end
