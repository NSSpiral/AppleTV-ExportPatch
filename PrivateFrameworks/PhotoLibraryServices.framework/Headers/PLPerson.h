/* Runtime dump - PLPerson
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPerson : PLManagedObject

@property (retain, nonatomic) NSString * personUUID;
@property (retain, nonatomic) NSString * fullName;
@property (retain, nonatomic) NSSet * personReferences;

+ (NSString *)entityName;
+ (NSString *)entityInManagedObjectContext:(NSObject *)arg0;
+ (PLPerson *)personWithUUID:(id)arg0 inManagedObjectContext:(NSObject *)arg1;
+ (NSObject *)insertIntoPhotoLibrary:(NSObject *)arg0 withPersonUUID:(NSString *)arg1 fullName:(NSString *)arg2;
+ (NSString *)allPersonsInManagedObjectContext:(NSObject *)arg0;

- (void)willSave;

@end
