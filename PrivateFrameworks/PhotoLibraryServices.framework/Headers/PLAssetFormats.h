/* Runtime dump - PLAssetFormats
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAssetFormats : NSObject

+ (struct CGSize)sizeForFormat:(int)arg0;
+ (char)formatIsCropped:(int)arg0;
+ (char)formatIsFullscreen:(int)arg0;
+ (char)formatIsReferringToLatestVersion:(int)arg0;
+ (char)formatIsBadgedForVideo:(int)arg0;
+ (unsigned int)minShortSideForFullSizeFormat:(int)arg0;
+ (unsigned int)desiredLongSideForFullSizeFormat:(int)arg0;
+ (unsigned int)maxLongSideForFullSizeFormat:(int)arg0;
+ (struct CGSize)scaledSizeForSize:(struct CGSize)arg0 format:(int)arg1 capLength:(char)arg2;
+ (char)transformForImage:(struct CGImage *)arg0 captureOrientation:(int)arg1 format:(int)arg2 sizeInOut:(struct CGSize *)arg3 contextSizeOut:(struct CGSize *)arg4 transformOut:(struct CGAffineTransform *)arg5;
+ (char)formatSizeIsShortSide:(int)arg0;
+ (NSString *)descriptionForImageFormat:(int)arg0;
+ (NSString *)descriptionForVideoFormat:(int)arg0;
+ (char)isAlbumVideoPath:(NSString *)arg0;
+ (int)bestFormatWithSize:(struct CGSize)arg0 contentMode:(int)arg1 demoteFactor:(double)arg2 srcAspectRatio:(double)arg3 isTableFormat:(char *)arg4 desiredImagePixelSize:(struct CGSize *)arg5;

@end
