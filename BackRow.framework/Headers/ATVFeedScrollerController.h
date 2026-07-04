/* Runtime dump - ATVFeedScrollerController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVFeedController.h>

@class ATVFeedElement, ATVFeedRootElement, BRControl, BRScrollControl;
@interface ATVFeedScrollerController : ATVFeedController
{
    BRScrollControl * _scroller;
}

@property (readonly, nonatomic) BRControl * headerControl;

- (void)wasPushed;
- (BRControl *)headerControl;
- (ATVFeedScrollerController *)initWithFeedElement:(ATVFeedElement *)arg0;
- (char)_canHandleUpdateWithFeedElement:(ATVFeedRootElement *)arg0 loadType:(int)arg1;
- (char)showsHeader;
- (void)_handleUpdateWithFeedElement:(ATVFeedRootElement *)arg0 loadType:(int)arg1;
- (char)_updateContentWithLoadType:(int)arg0;
- (char)_hasFixedHeader;
- (id)_containerWithControl:(BRControl *)arg0 size:(struct CGRect)arg1;
- (void)dealloc;
- (ATVFeedScrollerController *)initWithDictionary:(NSDictionary *)arg0;
- (NSString *)accessibilityLabel;

@end
