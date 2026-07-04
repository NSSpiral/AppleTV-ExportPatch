/* Runtime dump - MSImageScalingSpecification
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSImageScalingSpecification : NSObject
{
    float _nominalShortSideLength;
    float _minimumLongSideLength;
    float _maximumLongSideLength;
    int _assetTypeFlags;
}

@property (nonatomic) float nominalShortSideLength;
@property (nonatomic) float minimumLongSideLength;
@property (nonatomic) float maximumLongSideLength;
@property (nonatomic) int assetTypeFlags;

+ (NSString *)specificationWithSharedAlbumSpecificationString:(NSString *)arg0;
+ (NSObject *)assetsToGenerateFromImageWithInputSize:(struct CGSize)arg0 toConformToSpecifications:(id)arg1;

- (NSString *)description;
- (void)setAssetTypeFlags:(int)arg0;
- (float)nominalShortSideLength;
- (float)minimumLongSideLength;
- (float)maximumLongSideLength;
- (void)setNominalShortSideLength:(float)arg0;
- (void)setMinimumLongSideLength:(float)arg0;
- (void)setMaximumLongSideLength:(float)arg0;
- (int)assetTypeFlags;
- (float)scaleFactorForInputSize:(struct CGSize)arg0;

@end
