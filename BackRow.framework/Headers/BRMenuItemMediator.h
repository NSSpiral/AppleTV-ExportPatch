/* Runtime dump - BRMenuItemMediator
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRMenuItem;
@interface BRMenuItemMediator : NSObject
{
    BRMenuItem * _menuItem;
    SEL _mediaParadeSelector;
    SEL _menuSelector;
    id _object;
}

+ (NSObject *)mediatorWithMenuItem:(BRMenuItem *)arg0;

- (BRMenuItemMediator *)initWithMenuItem:(BRMenuItem *)arg0;
- (void)setMediaPreviewSelector:(SEL)arg0;
- (SEL)mediaPreviewSelector;
- (void)setMenuActionSelector:(SEL)arg0;
- (SEL)menuActionSelector;
- (void)setMenuActionSelector:(SEL)arg0 withObject:(NSObject *)arg1;
- (void)dealloc;
- (NSObject *)object;
- (BRMenuItem *)menuItem;

@end
