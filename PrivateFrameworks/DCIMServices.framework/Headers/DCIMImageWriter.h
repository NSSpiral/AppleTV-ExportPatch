/* Runtime dump - DCIMImageWriter
 * Image: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
 */

@interface DCIMImageWriter : NSObject

+ (DCIMImageWriter *)defaultFileExtensionForAssetType:(short)arg0;
+ (DCIMImageWriter *)uniqueIncomingPathForAssetWithUUID:(id)arg0 andExtension:(id)arg1 isPhotoStream:(char)arg2;
+ (void)writeableDataForImage:(UIImage *)arg0 previewImage:(UIImage *)arg1 imageData:(NSData *)arg2 imageUTIType:(struct __CFString *)arg3 exifProperties:(NSDictionary *)arg4 imageRefOut:(struct CGImage * *)arg5 lowResImageRefOut:(struct CGImage)arg6 thumbnailDataOut:(struct CGImage * *)arg7 imageUTITypeOut:(struct CGImage)arg8 exifPropertiesOut:(id *)arg9 isJPEGOut:(struct __CFString * *)arg10 imageDataOut:(struct __CFString *)arg11 imageOrientation:(id *)arg12;
+ (NSString *)incomingDirectoryPath;
+ (NSObject *)incomingDirectoryPathForPhotoStream;
+ (DCIMImageWriter *)incomingAssetFilenameDelimiter;
+ (DCIMImageWriter *)avalanchePathExtension;
+ (DCIMImageWriter *)sharedDCIMWriter;
+ (DCIMImageWriter *)largeThumbnailInflightPathExtension;
+ (DCIMImageWriter *)diagnosticPathExtension;
+ (NSObject *)preferredFileExtensionForType:(NSObject *)arg0;

- (NSObject *)_cameraAssetExtensionForType:(short)arg0;
- (void)_writeJPEGToPath:(NSString *)arg0 withData:(NSData *)arg1 thumbnail:(UIImage *)arg2 properties:(NSDictionary *)arg3 duringBurst:(char)arg4;
- (void)_writeJPEGFromIOSurface:(struct __IOSurface *)arg0 toPath:(NSString *)arg1 orientation:(int)arg2;
- (char)saveImageJobToDisk:(id)arg0;

@end
