/* Runtime dump - ATVPhotoCarouselViewUIDelegateItem
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRControl;
@interface ATVPhotoCarouselViewUIDelegateItem : NSObject
{
    BRControl * _item;
}

@property (retain, nonatomic) BRControl * item;
@property (readonly, retain, nonatomic) BRControl * centerBadge;
@property (readonly, retain, nonatomic) BRControl * shroud;
@property (readonly, retain, nonatomic) BRControl * leftShadow;
@property (readonly, retain, nonatomic) BRControl * rightShadow;

+ (NSObject *)uiDelegateItemWithItem:(BRControl *)arg0;

- (BRControl *)shroud;
- (BRControl *)leftShadow;
- (BRControl *)rightShadow;
- (BRControl *)centerBadge;
- (BRControl *)item;
- (void)setItem:(BRControl *)arg0;
- (void).cxx_destruct;

@end
