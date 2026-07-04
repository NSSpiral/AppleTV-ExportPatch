/* Runtime dump - PLManagedFace
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLManagedFace : PLManagedObject

@property (retain, nonatomic) PLManagedAsset * asset;
@property (nonatomic) struct CGRect relativeRect;
@property (nonatomic) short identifier;
@property (retain, nonatomic) NSString * albumUUID;

+ (NSString *)entityName;
+ (NSString *)entityInManagedObjectContext:(NSObject *)arg0;
+ (NSString *)insertInManagedObjectContext:(NSObject *)arg0;

- (short)identifier;
- (void)setIdentifier:(short)arg0;
- (void)delete;
- (void)setRelativeRect:(struct CGRect)arg0;
- (struct CGRect)relativeRect;

@end
