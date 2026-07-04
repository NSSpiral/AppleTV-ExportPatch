/* Runtime dump - PLManagedAdjustment
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLManagedAdjustment : _PLManagedAdjustment

@property (nonatomic) int adjustmentType;
@property (copy, nonatomic) NSString * filterName;
@property (copy, nonatomic) NSDictionary * filterSettings;
@property (copy, nonatomic) PLManagedAsset * asset;

+ (NSObject *)insertInPhotoLibrary:(NSObject *)arg0;
+ (void)fixupAssetSizeFromAdjustments:(id)arg0;
+ (NSSet *)ciFiltersForAdjustmentsOnManagedAsset:(NSSet *)arg0 forDestinationImageSize:(struct CGSize)arg1;
+ (NSString *)keyPathsForValuesAffectingValueForKey:(NSString *)arg0;
+ (NSSet *)ciFiltersForAdjustmentsOnManagedAsset:(NSSet *)arg0 forDestinationImageSize:(struct CGSize)arg1 effectFilterCount:(unsigned int *)arg2;
+ (NSSet *)ciFiltersForAdjustmentsOnManagedAsset:(NSSet *)arg0 forDestinationImageSize:(struct CGSize)arg1 withOriginalImageSize:(struct CGSize)arg2 effectFilterCount:(unsigned int *)arg3;
+ (void)convertAffineTransform:(struct CGAffineTransform)arg0 andCropRect:(struct CGRect)arg1 toStraightenAngle:(struct CGSize)arg2 andCropRect:(NSObject *)arg3;
+ (struct CGRect)convertCropRect:(NSObject *)arg0 fromImageSize:(SEL)arg1 toImageSize:(struct CGRect)arg2;
+ (void)convertStraightenAngle:(float)arg0 andCropRect:(struct CGRect)arg1 toAffineTransform:(struct CGSize)arg2 andCropRect:(NSObject *)arg3;

- (int)adjustmentType;
- (void)setAdjustmentType:(int)arg0;
- (NSDictionary *)metadataProperties;

@end
