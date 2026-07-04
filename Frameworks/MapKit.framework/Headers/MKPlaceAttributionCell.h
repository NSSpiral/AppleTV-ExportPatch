/* Runtime dump - MKPlaceAttributionCell
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceAttributionCell : ABContactCell
{
    UILabel * _label;
    NSMutableArray * _scaledConstraints;
    NSArray * _marginConstraints;
}

@property (retain, nonatomic) NSAttributedString * attributionString;
@property (retain, nonatomic) UILabel * label;
@property (retain, nonatomic) NSMutableArray * scaledConstraints;
@property (retain, nonatomic) NSArray * marginConstraints;

+ (float)intrinsicContentHeight;
+ (NSString *)fontForLabel;

- (void)contentSizeDidChange;
- (void)refreshMarginConstraints;
- (NSArray *)marginConstraints;
- (void)setMarginConstraints:(NSArray *)arg0;
- (NSMutableArray *)scaledConstraints;
- (void)setScaledConstraints:(NSMutableArray *)arg0;
- (NSAttributedString *)attributionString;
- (void)setAttributionString:(NSAttributedString *)arg0;
- (NSString *)updatedAttributionStringFromString:(NSString *)arg0 updateColorOnly:(char)arg1;
- (void)dealloc;
- (MKPlaceAttributionCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (void)layoutMarginsDidChange;
- (void)tintColorDidChange;
- (UILabel *)label;
- (void)updateConstraints;
- (void)setLabel:(UILabel *)arg0;
- (void).cxx_destruct;

@end
