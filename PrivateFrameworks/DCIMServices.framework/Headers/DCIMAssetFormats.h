/* Runtime dump - DCIMAssetFormats
 * Image: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
 */

@interface DCIMAssetFormats : NSObject

+ (struct CGSize)sizeForFormat:(int)arg0;
+ (int)thumbnailFormat;
+ (int)wildcatStackFormat;
+ (int)masterThumbnailFormat;
+ (struct CGSize)scaledSizeForSize:(struct CGSize)arg0 format:(int)arg1 capLength:(char)arg2;
+ (char)formatSizeIsShortSide:(int)arg0;

@end
