/* Runtime dump - PLManagedObject
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLManagedObject : NSManagedObject

@property (readonly, retain, nonatomic) PLPhotoLibrary * photoLibrary;
@property (readonly, nonatomic) char isRegisteredWithUserInterfaceContext;
@property (readonly, copy, nonatomic) NSString * shortObjectIDURI;
@property (readonly, copy, nonatomic) NSString * pl_shortDescription;

- (PLPhotoLibrary *)photoLibrary;
- (void)willSave;
- (char)isRegisteredWithUserInterfaceContext;
- (NSString *)pl_shortDescription;
- (NSString *)shortObjectIDURI;

@end
