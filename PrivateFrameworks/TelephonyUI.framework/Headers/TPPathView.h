/* Runtime dump - TPPathView
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPPathView : UIView
{
    UIBezierPath * _path;
    UIColor * _fillColor;
}

@property (retain, nonatomic) UIBezierPath * path;
@property (retain, nonatomic) UIColor * fillColor;

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (UIBezierPath *)path;
- (void)setFillColor:(UIColor *)arg0;
- (UIColor *)fillColor;
- (void)setPath:(UIBezierPath *)arg0;

@end
