/* Runtime dump - BRPosterBadgeInfo
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRControl;
@interface BRPosterBadgeInfo : NSObject
{
    int _position;
    BRControl * _badge;
    struct ? _inset;
}

@property (nonatomic) int position;
@property (retain, nonatomic) BRControl * badge;
@property (nonatomic) struct ? inset;

- (void)dealloc;
- (void)setInset:(struct ?)arg0;
- (void)setPosition:(int)arg0;
- (int)position;
- (struct ?)inset;
- (void)setBadge:(BRControl *)arg0;
- (BRControl *)badge;

@end
