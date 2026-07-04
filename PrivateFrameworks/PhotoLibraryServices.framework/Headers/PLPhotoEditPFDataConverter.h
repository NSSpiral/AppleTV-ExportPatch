/* Runtime dump - PLPhotoEditPFDataConverter
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoEditPFDataConverter : NSObject <PLPhotoEditDataImporter, PLPhotoEditDataExporter>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)dataFromPhotoEditModel:(NSObject *)arg0 imageWidth:(unsigned int)arg1 imageHeight:(unsigned int)arg2 exifOrientation:(int)arg3;
+ (char)loadPhotoEditData:(NSData *)arg0 formatIdentifier:(NSString *)arg1 formatVersion:(NSString *)arg2 intoModel:(NSObject *)arg3 baseOrientation:(int)arg4;
+ (NSString *)formatVersion;
+ (char)canInterpretDataWithFormatIdentifier:(NSString *)arg0 formatVersion:(NSString *)arg1;
+ (NSData *)debugDescriptionForPhotoEditData:(NSData *)arg0 formatIdentifier:(NSString *)arg1 formatVersion:(NSString *)arg2;
+ (NSString *)formatIdentifier;
+ (PLPhotoEditPFDataConverter *)_knownFormatVersions;
+ (char)_validateValueTypesForKeys:(NSArray *)arg0 requiredKeys:(NSArray *)arg1 inDictionary:(NSDictionary *)arg2 error:(id *)arg3;
+ (int)_supportLevelForSettings:(NSDictionary *)arg0 typesForKnownKeys:(NSArray *)arg1 requiredKeys:(NSArray *)arg2;
+ (NSDictionary *)_filtersForLegacyAutoEnhanceSettingsDictionary:(NSDictionary *)arg0;
+ (char)validateAdjustmentsEnvelope:(id)arg0;
+ (PLPhotoEditPFDataConverter *)_supportedAdjustments;
+ (PLPhotoEditPFDataConverter *)_settingsDictionaryForLegacyAutoEnhanceFilters:(id)arg0;

@end
