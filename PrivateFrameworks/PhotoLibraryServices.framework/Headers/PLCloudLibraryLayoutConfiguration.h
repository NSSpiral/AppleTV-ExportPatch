/* Runtime dump - PLCloudLibraryLayoutConfiguration
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudLibraryLayoutConfiguration : NSObject
{
    NSArray * layoutBuckets;
    PLPhotoLibrary * photoLibrary;
}

@property (retain, nonatomic) NSArray * layoutBuckets;
@property (retain, nonatomic) PLPhotoLibrary * photoLibrary;

- (PLPhotoLibrary *)photoLibrary;
- (void)setPhotoLibrary:(PLPhotoLibrary *)arg0;
- (NSArray *)layoutBuckets;
- (void)setLayoutBuckets:(NSArray *)arg0;

@end
