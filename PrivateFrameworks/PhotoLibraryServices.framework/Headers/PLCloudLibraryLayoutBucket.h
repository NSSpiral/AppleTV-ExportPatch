/* Runtime dump - PLCloudLibraryLayoutBucket
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudLibraryLayoutBucket : NSObject
{
    PLPhotoLibrary * _photoLibrary;
    unsigned short _category;
    PLCloudResourceRange * _mediumsRange;
    PLCloudResourceRange * _originalsRange;
    PLCloudResourceRange * _thumbnailsRange;
    id predicate;
    unsigned int budgetShare;
}

@property (nonatomic) unsigned int budgetShare;
@property (copy, nonatomic) id predicate;
@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) unsigned short category;
@property (readonly, nonatomic) unsigned long long totalAssetsCount;

- (void)dealloc;
- (NSString *)name;
- (unsigned short)category;
- (void)setPredicate:(NSPredicate *)arg0;
- (NSPredicate *)predicate;
- (unsigned long long)totalAssetsCount;
- (unsigned long long)totalSizeForQualityClass:(unsigned short)arg0 inRange:(struct _NSRange)arg1;
- (PLCloudLibraryLayoutBucket *)initWithIdentifier:(unsigned short)arg0 photoLibrary:(PLPhotoLibrary *)arg1;
- (void)setBudgetShare:(unsigned int)arg0;
- (NSSet *)cloudResourceFromAsset:(NSSet *)arg0 forQualityClass:(unsigned short)arg1;
- (unsigned int)includeAsset:(NSSet *)arg0;
- (unsigned int)excludeAsset:(NSSet *)arg0;
- (unsigned int)budgetShare;

@end
