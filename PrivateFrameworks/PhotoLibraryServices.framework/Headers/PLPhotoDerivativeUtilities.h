/* Runtime dump - PLPhotoDerivativeUtilities
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoDerivativeUtilities : NSObject

+ (NSSet *)generateDerivativeForMSAsset:(NSSet *)arg0 derivativeType:(int)arg1 withSpecificationInfo:(NSDictionary *)arg2 collectionGUID:(NSString *)arg3;
+ (char)resizeImageForUtiType:(NSObject *)arg0 masterFilePath:(NSString *)arg1 derivedSize:(struct CGSize)arg2 derivedAssetPath:(NSString *)arg3;
+ (struct CGSize)_sizeOfImageAtPath:(NSString *)arg0;
+ (char)_resizeImageUsingNewScalerForUtiType:(NSObject *)arg0 inputFilePath:(NSString *)arg1 outputFilePath:(NSString *)arg2 derivedSize:(struct CGSize)arg3;
+ (char)_isOrientationUpForImageProperties:(NSDictionary *)arg0;
+ (char)_resizeImageUsingHWForUtiType:(NSObject *)arg0 inputFilePath:(NSString *)arg1 outputFilePath:(NSString *)arg2 derivedSize:(struct CGSize)arg3;
+ (char)_resizeImageUsingSWForUtiType:(NSObject *)arg0 inputFilePath:(NSString *)arg1 outputFilePath:(NSString *)arg2 derivedSize:(struct CGSize)arg3;

@end
