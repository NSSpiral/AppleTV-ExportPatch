/* Runtime dump - MKPlaceInfoViewInlineMapCell
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceInfoViewInlineMapCell : ABContactCell
{
    UIImage * _inlineMap;
    UIImageView * _inlineMapView;
    NSArray * _marginConstraints;
}

@property (retain, nonatomic) UIImage * inlineMap;
@property (retain, nonatomic) UIImageView * inlineMapView;
@property (retain, nonatomic) NSArray * marginConstraints;

+ (char)requiresConstraintBasedLayout;
+ (NSString *)reuseIdentifier;

- (void)refreshMarginConstraints;
- (NSArray *)marginConstraints;
- (void)setMarginConstraints:(NSArray *)arg0;
- (void)setInlineMap:(UIImage *)arg0;
- (UIImage *)inlineMap;
- (UIImageView *)inlineMapView;
- (void)setInlineMapView:(UIImageView *)arg0;
- (MKPlaceInfoViewInlineMapCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (void)layoutMarginsDidChange;
- (void).cxx_destruct;

@end
