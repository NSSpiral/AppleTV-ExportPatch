/* Runtime dump - MKPlaceViewNearbyAppCollectionViewCell
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceViewNearbyAppCollectionViewCell : UICollectionViewCell
{
    UILabel * _titleLabel;
    UILabel * _categoryLabel;
    UILabel * _priceLabel;
    UIImageView * _icon;
    NSDictionary * _storeData;
}

@property (retain, nonatomic) NSDictionary * storeData;

+ (float)heightWithIconSize:(struct CGSize)arg0;
+ (NSString *)reuseIdentifier;

- (NSDictionary *)storeData;
- (void)setStoreData:(NSDictionary *)arg0;
- (void)setImage:(UIImage *)arg0 animated:(char)arg1;
- (MKPlaceViewNearbyAppCollectionViewCell *)initWithFrame:(struct CGRect)arg0;
- (void)tintColorDidChange;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end
