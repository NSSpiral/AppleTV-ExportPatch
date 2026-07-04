/* Runtime dump - MKCustomSeparatorTableViewCell
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKCustomSeparatorTableViewCell : UITableViewCell
{
    MKViewWithHairline * _separatorView;
}

@property (nonatomic) char separatorHidden;
@property (nonatomic) float leftSeparatorInset;
@property (retain, nonatomic) UIColor * separatorColor;

- (char)isSeparatorHidden;
- (void)setSeparatorHidden:(char)arg0;
- (float)leftSeparatorInset;
- (void)setLeftSeparatorInset:(float)arg0;
- (MKCustomSeparatorTableViewCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (UIColor *)separatorColor;
- (void)setSeparatorColor:(UIColor *)arg0;
- (void).cxx_destruct;

@end
