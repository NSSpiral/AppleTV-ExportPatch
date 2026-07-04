/* Runtime dump - PLAdditionalAssetAttributes
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAdditionalAssetAttributes : PLManagedObject

@property (retain, nonatomic) NSString * longDescription;
@property (retain, nonatomic) NSString * creatorBundleID;
@property (retain, nonatomic) NSString * customCollectionName;
@property (retain, nonatomic) NSString * customCollectionUUID;
@property (retain, nonatomic) NSString * customMomentName;
@property (retain, nonatomic) NSString * customMomentUUID;
@property (retain, nonatomic) NSString * editorBundleID;
@property (retain, nonatomic) NSString * exifTimestampString;
@property (retain, nonatomic) NSNumber * externalUsageIntent;
@property (retain, nonatomic) id importSessionID;
@property (retain, nonatomic) id originalAssetsUUID;
@property (retain, nonatomic) NSString * originalFilename;
@property (retain, nonatomic) NSNumber * originalFilesize;
@property (retain, nonatomic) NSData * originalHash;
@property (retain, nonatomic) NSNumber * originalHeight;
@property (retain, nonatomic) NSNumber * originalOrientation;
@property (retain, nonatomic) NSString * originalPath;
@property (retain, nonatomic) NSNumber * originalResourceChoice;
@property (retain, nonatomic) NSNumber * originalWidth;
@property (retain, nonatomic) NSString * publicGlobalUUID;
@property (retain, nonatomic) NSData * reverseLocationData;
@property (retain, nonatomic) NSNumber * reverseLocationDataIsValid;
@property (retain, nonatomic) NSString * timeZoneName;
@property (retain, nonatomic) NSNumber * timeZoneOffset;
@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) NSDate * lastUploadAttemptDate;
@property (retain, nonatomic) NSNumber * uploadAttempts;
@property (retain, nonatomic) PLManagedAsset * asset;
@property (retain, nonatomic) NSManagedObject * cloudMaster;
@property (retain, nonatomic) NSSet * cloudResources;
@property (retain, nonatomic) NSSet * keywords;
@property (retain, nonatomic) NSManagedObject * unmanagedAdjustment;
@property (retain, nonatomic) NSNumber * locationHash;
@property (retain, nonatomic) PLAssetDescription * assetDescription;
@property (retain, nonatomic) NSData * faceRegions;
@property (retain, nonatomic) NSSet * personReferences;

+ (NSDictionary *)listOfSyncedProperties;

- (NSString *)longDescription;
- (void)willSave;
- (char)validateForInsert:(id *)arg0;
- (char)validateForUpdate:(id *)arg0;
- (void)setLongDescription:(NSString *)arg0;
- (char)migrateReverseLocationDataFromKeyedArchiverFormat;
- (char)_needToSetModificationDateOnAsset:(NSSet *)arg0;

@end
