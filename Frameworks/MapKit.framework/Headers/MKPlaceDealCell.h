/* Runtime dump - MKPlaceDealCell
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceDealCell : ABContactCell

@property (retain, nonatomic) NSString * dealTitle;

+ (NSString *)reuseIdentifier;

- (NSString *)dealTitle;
- (void)setDealTitle:(NSString *)arg0;
- (void)layoutSubviews;
- (MKPlaceDealCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;

@end
