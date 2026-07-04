/* Runtime dump - PLPersonReference
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPersonReference : PLManagedObject

@property (retain, nonatomic) NSString * personUUID;
@property (retain, nonatomic) NSData * personData;
@property (retain, nonatomic) PLAdditionalAssetAttributes * assetAttributes;
@property (retain, nonatomic) PLPerson * person;

+ (NSString *)entityName;
+ (NSString *)entityInManagedObjectContext:(NSObject *)arg0;
+ (NSObject *)insertIntoPhotoLibrary:(NSObject *)arg0 personUUID:(NSString *)arg1 personData:(NSData *)arg2;

- (void)willSave;

@end
