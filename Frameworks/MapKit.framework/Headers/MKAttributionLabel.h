/* Runtime dump - MKAttributionLabel
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKAttributionLabel : UILabel
{
    unsigned int _mapType;
    char _useDarkText;
}

@property (nonatomic) unsigned int mapType;

- (void)_prepareLabel;
- (id)_attributesWithStroke:(char)arg0;
- (void)drawRect:(struct CGRect)arg0;
- (MKAttributionLabel *)init;
- (unsigned int)mapType;
- (void)setMapType:(unsigned int)arg0;

@end
