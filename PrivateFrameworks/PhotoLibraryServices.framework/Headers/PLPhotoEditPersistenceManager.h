/* Runtime dump - PLPhotoEditPersistenceManager
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoEditPersistenceManager : NSObject

@property (readonly, nonatomic) NSString * latestFormatIdentifier;
@property (readonly, nonatomic) NSString * latestFormatVersion;

- (NSString *)latestFormatIdentifier;
- (NSString *)latestFormatVersion;
- (NSObject *)dataFromPhotoEditModel:(NSObject *)arg0 imageWidth:(unsigned int)arg1 imageHeight:(unsigned int)arg2 exifOrientation:(int)arg3;
- (char)loadPhotoEditData:(NSData *)arg0 formatIdentifier:(NSString *)arg1 formatVersion:(NSString *)arg2 intoModel:(NSObject *)arg3 baseOrientation:(int)arg4;
- (char)canInterpretDataWithFormatIdentifier:(NSString *)arg0 formatVersion:(NSString *)arg1;
- (NSData *)debugDescriptionForPhotoEditData:(NSData *)arg0 formatIdentifier:(NSString *)arg1 formatVersion:(NSString *)arg2;
- (NSArray *)_allConverterClasses;
- (Class)_latestExporterClass;
- (NSArray *)_allImporterClasses;
- (NSData *)debugDescriptionForAdjustmentData:(NSData *)arg0;

@end
