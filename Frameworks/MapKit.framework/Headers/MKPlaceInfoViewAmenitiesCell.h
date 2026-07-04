/* Runtime dump - MKPlaceInfoViewAmenitiesCell
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceInfoViewAmenitiesCell : ABContactCell
{
    NSMutableArray * _labels;
    NSMutableArray * _values;
    NSArray * _keyValues;
    NSMutableArray * _labelConstraints;
}

@property (retain, nonatomic) NSArray * keyValues;
@property (retain, nonatomic) NSMutableArray * labelConstraints;

+ (float)intrinsicContentHeight;
+ (NSString *)reuseIdentifier;

- (void)contentSizeDidChange;
- (void)refreshContent;
- (NSMutableArray *)labelConstraints;
- (void)setLabelConstraints:(NSMutableArray *)arg0;
- (NSArray *)keyValues;
- (NSString *)attributeLabelWithString:(NSString *)arg0;
- (NSString *)attributeValueWithString:(NSString *)arg0;
- (void)addConstraintsForKeyLabel:(NSString *)arg0 andMatchingValueLabel:(NSString *)arg1;
- (void)addWidthAndSideSpacingConstraintsForLabels:(id)arg0;
- (void)setKeyValues:(NSArray *)arg0;
- (void)dealloc;
- (MKPlaceInfoViewAmenitiesCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (void)layoutMarginsDidChange;
- (void)tintColorDidChange;
- (void).cxx_destruct;

@end
