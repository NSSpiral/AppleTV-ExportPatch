/* Runtime dump - UISearchResultsTableView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISearchResultsTableView : UITableView
{
    UISearchDisplayController * _controller;
    float _offsetForNoResultsMessage;
    UIView * _topShadowView;
}

@property (nonatomic) UISearchDisplayController * controller;
@property (retain, nonatomic) UIView * _topShadowView;

- (void)setContentOffset:(struct CGPoint)arg0;
- (void)_numberOfRowsDidChange;
- (UISearchResultsTableView *)initWithFrame:(struct CGRect)arg0 style:(struct CGSize)arg1;
- (UIView *)_topShadowView;
- (UISearchDisplayController *)controller;
- (void)setController:(UISearchDisplayController *)arg0;
- (void)_setOffsetForNoResultsMessage:(float)arg0;
- (float)_offsetForNoResultsMessage;
- (void)_setTopShadowView:(NSObject *)arg0;

@end
