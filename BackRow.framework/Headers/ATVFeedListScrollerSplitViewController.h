/* Runtime dump - ATVFeedListScrollerSplitViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVListPreviewController.h>

@class BREvent;
@interface ATVFeedListScrollerSplitViewController : ATVListPreviewController
{
    char _moreInfo;
}

@property (nonatomic) char moreInfo;

- (char)brEventAction:(BREvent *)arg0;
- (NSObject *)_createMediaMenuView;
- (NSObject *)_createView;
- (char)moreInfo;
- (NSObject *)transitionType;
- (char)_topOfListIsFocused;
- (void)setMoreInfo:(char)arg0;

@end
