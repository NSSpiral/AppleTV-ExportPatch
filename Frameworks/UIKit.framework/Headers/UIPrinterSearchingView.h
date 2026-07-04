/* Runtime dump - UIPrinterSearchingView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrinterSearchingView : UIView
{
    UILabel * _searchingLabel;
    UIActivityIndicatorView * _searchingIndicator;
    NSArray * _searchingLabelConstraints;
}

- (void)dealloc;
- (void)searchTimeout;
- (UIPrinterSearchingView *)initInView:(NSObject *)arg0;
- (void)setSearching:(char)arg0;

@end
