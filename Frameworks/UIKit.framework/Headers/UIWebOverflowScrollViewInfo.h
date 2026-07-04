/* Runtime dump - UIWebOverflowScrollViewInfo
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebOverflowScrollViewInfo : NSObject
{
    UIWebOverflowScrollView * _scrollView;
    CALayer * _scrollViewLayer;
    UIView * _oldSuperview;
}

@property (retain, nonatomic) UIWebOverflowScrollView * scrollView;
@property (retain, nonatomic) UIView * oldSuperview;

- (void)dealloc;
- (void)setScrollView:(UIWebOverflowScrollView *)arg0;
- (UIWebOverflowScrollView *)scrollView;
- (UIWebOverflowScrollViewInfo *)initWithScrollView:(UIWebOverflowScrollView *)arg0;
- (UIView *)oldSuperview;
- (void)setOldSuperview:(UIView *)arg0;

@end
