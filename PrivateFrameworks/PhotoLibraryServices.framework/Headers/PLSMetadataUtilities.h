/* Runtime dump - PLSMetadataUtilities
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSMetadataUtilities : NSObject

+ (void)_writeData:(NSData *)arg0 toFile:(NSString *)arg1;
+ (NSObject *)_allAlbumsInPhotoLibrary:(NSObject *)arg0;
+ (NSSet *)_detailsForAsset:(NSSet *)arg0 includingLocal:(char)arg1 includingFingerprints:(char)arg2;
+ (void)_writeJSONForAssets:(NSArray *)arg0 toFile:(NSString *)arg1;
+ (char)_writeDetails:(id)arg0 forEntityNamed:(id)arg1 toFilepath:(id)arg2 withDefaultFilename:(NSString *)arg3;
+ (PLSMetadataUtilities *)_detailsForAlbum:(id)arg0;
+ (NSObject *)_nameForAdjustmentType:(int)arg0;
+ (NSString *)allAssetsDetailsWriteToPath:(NSString *)arg0 includingLocal:(char)arg1 includingFingerprints:(char)arg2 forAlbumTitled:(id)arg3;
+ (NSString *)allAlbumsDetailsWriteToPath:(NSString *)arg0;

@end
