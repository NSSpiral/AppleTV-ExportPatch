/* Runtime dump - PLPhotoEditTempDataConverter
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoEditTempDataConverter : NSObject <PLPhotoEditDataImporter>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)loadPhotoEditData:(NSData *)arg0 formatIdentifier:(NSString *)arg1 formatVersion:(NSString *)arg2 intoModel:(NSObject *)arg3 baseOrientation:(int)arg4;
+ (char)canInterpretDataWithFormatIdentifier:(NSString *)arg0 formatVersion:(NSString *)arg1;
+ (NSData *)debugDescriptionForPhotoEditData:(NSData *)arg0 formatIdentifier:(NSString *)arg1 formatVersion:(NSString *)arg2;

@end
