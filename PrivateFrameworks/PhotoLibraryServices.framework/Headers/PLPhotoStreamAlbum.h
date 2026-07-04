/* Runtime dump - PLPhotoStreamAlbum
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoStreamAlbum : PLManagedAlbum

@property (retain, nonatomic) NSString * personID;

+ (NSString *)entityName;
+ (NSObject *)photoStreamAlbumWithStreamID:(NSObject *)arg0 inPhotoLibrary:(NSObject *)arg1 createIfNeeded:(char)arg2;
+ (NSString *)entityInManagedObjectContext:(NSObject *)arg0;
+ (NSObject *)keyPathsForValuesAffectingPersonID;

- (char)shouldDeleteWhenEmpty;
- (NSString *)personID;
- (void)addAssetOrderedByDataTaken:(id)arg0;
- (void)enforceImageLimitIfNecessary;
- (void)awakeFromInsert;
- (void)setPersonID:(NSString *)arg0;

@end
