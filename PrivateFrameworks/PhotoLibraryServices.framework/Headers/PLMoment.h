/* Runtime dump - PLMoment
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMoment : PLManagedObject <PLAssetContainer, PLMomentData_Private>
{
    PLMomentNameInfo * _cachedNameInfo;
    char _loadedNameInfo;
    char isRegisteredForChanges;
    char didRegisteredWithUserInterfaceContext;
}

@property (retain, nonatomic) NSString * uuid;
@property (retain, nonatomic) NSDate * endDate;
@property (retain, nonatomic) NSDate * representativeDate;
@property (retain, nonatomic) NSDate * startDate;
@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) NSString * title2;
@property (retain, nonatomic) NSString * title3;
@property (nonatomic) int cachedCount;
@property (nonatomic) int cachedPhotosCount;
@property (nonatomic) int cachedVideosCount;
@property (retain, nonatomic) NSOrderedSet * assets;
@property (retain, nonatomic) PLMomentList * yearMomentList;
@property (retain, nonatomic) PLMomentList * megaMomentList;
@property (retain, nonatomic) PLMomentLibrary * momentLibrary;
@property (retain, nonatomic) NSData * approximateLocationData;
@property (retain, nonatomic) NSData * reverseLocationData;
@property (nonatomic) char reverseLocationDataIsValid;
@property (nonatomic) short generationType;
@property (nonatomic) char isRegisteredForChanges;
@property (nonatomic) char didRegisteredWithUserInterfaceContext;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, copy, nonatomic) NSString * localizedTitle;
@property (readonly, nonatomic) unsigned int approximateCount;
@property (readonly, nonatomic) unsigned int assetsCount;
@property (readonly, nonatomic) unsigned int photosCount;
@property (readonly, nonatomic) unsigned int videosCount;
@property (readonly, nonatomic) char isEmpty;
@property (retain, nonatomic) PLManagedAsset * keyAsset;
@property (retain, nonatomic) PLManagedAsset * secondaryKeyAsset;
@property (retain, nonatomic) PLManagedAsset * tertiaryKeyAsset;
@property (readonly, nonatomic) char canShowComments;
@property (readonly, nonatomic) char canShowAvalancheStacks;
@property (readonly, copy, nonatomic) NSArray * localizedLocationNames;
@property (readonly, retain, nonatomic) NSObject<NSCopying> * uniqueObjectID;
@property (retain, nonatomic) CLLocation * approximateLocation;
@property (retain, nonatomic) NSArray * userTitles;

+ (NSString *)entityName;
+ (NSString *)entityInManagedObjectContext:(NSObject *)arg0;
+ (NSString *)allMomentsRequiringAnalysisInManagedObjectContext:(NSObject *)arg0 error:(id *)arg1;
+ (NSString *)allMomentsInManagedObjectContext:(NSObject *)arg0 error:(id *)arg1;
+ (NSString *)allAssetsIncludedInMomentsInManagedObjectContext:(NSObject *)arg0 IDsOnly:(char)arg1 error:(id *)arg2;
+ (NSObject *)allMomentsInLibrary:(NSObject *)arg0;
+ (NSObject *)allAssetsIncludedInMomentsInLibrary:(NSObject *)arg0;
+ (NSString *)insertNewMomentInManagedObjectContext:(NSObject *)arg0 error:(id *)arg1;

- (void)dealloc;
- (char)isEmpty;
- (NSString *)localizedTitle;
- (char)isCloudSharedAlbum;
- (NSMutableOrderedSet *)mutableAssets;
- (struct CGImage *)posterImage;
- (NSURL *)groupURL;
- (char)canPerformEditOperation:(unsigned int)arg0;
- (unsigned int)approximateCount;
- (unsigned int)assetsCount;
- (unsigned int)photosCount;
- (unsigned int)videosCount;
- (PLManagedAsset *)keyAsset;
- (void)setKeyAsset:(PLManagedAsset *)arg0;
- (PLManagedAsset *)secondaryKeyAsset;
- (void)setSecondaryKeyAsset:(PLManagedAsset *)arg0;
- (PLManagedAsset *)tertiaryKeyAsset;
- (void)setTertiaryKeyAsset:(PLManagedAsset *)arg0;
- (char)canShowComments;
- (char)canShowAvalancheStacks;
- (NSArray *)localizedLocationNames;
- (char)supportsDiagnosticInformation;
- (id)diagnosticInformation;
- (void)delete;
- (void)awakeFromInsert;
- (void)willSave;
- (char)isRegisteredForChanges;
- (void)setDidRegisteredWithUserInterfaceContext:(char)arg0;
- (void)registerForChanges;
- (char)didRegisteredWithUserInterfaceContext;
- (void)unregisterForChanges;
- (void)insertAssets:(NSArray *)arg0 atIndexes:(NSArray *)arg1;
- (void)removeAssetsAtIndexes:(NSArray *)arg0;
- (void)replaceAssetsAtIndexes:(NSArray *)arg0 withAssets:(NSOrderedSet *)arg1;
- (void)awakeFromFetch;
- (void)willTurnIntoFault;
- (void)didTurnIntoFault;
- (char)validateForInsert:(id *)arg0;
- (char)validateForUpdate:(id *)arg0;
- (NSObject<NSCopying> *)uniqueObjectID;
- (unsigned int)countForAssetsOfKind:(short)arg0;
- (void)setIsRegisteredForChanges:(char)arg0;
- (CLLocation *)approximateLocation;
- (void)setUserTitles:(NSArray *)arg0;
- (NSArray *)userTitles;
- (void)_updateCachedNameInfoIfNeeded;
- (char)_validateForInsertOrUpdate:(id *)arg0;
- (void)replaceObjectInAssetsAtIndex:(unsigned int)arg0 withObject:(NSObject *)arg1;
- (void)removeAssetsObject:(NSObject *)arg0;
- (void)invalidateNameInfo;
- (void)replaceAssetDataAtIndex:(unsigned int)arg0 withAssetData:(NSData *)arg1;
- (void)removeAssetData:(NSData *)arg0;
- (void)setApproximateLocation:(CLLocation *)arg0;
- (void)insertObject:(NSObject *)arg0 inAssetsAtIndex:(unsigned int)arg1;
- (void)removeObjectFromAssetsAtIndex:(unsigned int)arg0;
- (void)addAssetsObject:(NSObject *)arg0;
- (void)addAssets:(NSArray *)arg0;
- (void)removeAssets:(NSArray *)arg0;

@end
