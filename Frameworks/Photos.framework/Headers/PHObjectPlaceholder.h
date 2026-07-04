/* Runtime dump - PHObjectPlaceholder
 * Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHObjectPlaceholder : PHObject
{
    NSString * _localIdentifier;
    int _assetMediaType;
}

@property int assetMediaType;

- (PHObjectPlaceholder *)initWithLocalIdentifier:(NSString *)arg0;
- (void)setAssetMediaType:(int)arg0;
- (int)assetMediaType;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void).cxx_destruct;
- (NSString *)localIdentifier;

@end
