/* Runtime dump - PLMomentList
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMomentList : PLManagedObject <PLAssetContainerList, PLMomentListData>
{
    PLMomentNameInfo * _cachedNameInfo;
    char _loadedNameInfo;
}

@property (nonatomic) short granularityLevel;
@property (nonatomic) int sortIndex;
@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) NSString * title2;
@property (retain, nonatomic) NSString * title3;
@property (retain, nonatomic) NSDate * startDate;
@property (retain, nonatomic) NSDate * representativeDate;
@property (retain, nonatomic) NSDate * endDate;
@property (retain, nonatomic) NSOrderedSet * momentsForMegaMoment;
@property (retain, nonatomic) NSOrderedSet * momentsForYear;
@property (retain, nonatomic) NSData * reverseLocationData;
@property (nonatomic) char reverseLocationDataIsValid;
@property (retain, nonatomic) NSString * uuid;
@property (readonly, retain, nonatomic) NSString * localizedTitle;
@property (readonly, retain, nonatomic) NSArray * localizedLocationNames;
@property (nonatomic) short generationType;
@property (retain, nonatomic) NSOrderedSet * moments;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) unsigned int containersCount;
@property (readonly, retain, nonatomic) NSObject<NSCopying> * uniqueObjectID;
@property (retain, nonatomic) NSArray * userTitles;

+ (NSString *)entityName;
+ (NSString *)entityInManagedObjectContext:(NSObject *)arg0;
+ (NSString *)allMomentListsRequiringAnalysisInManagedObjectContext:(NSObject *)arg0 error:(id *)arg1;
+ (PLMomentList *)findOrCreateYearMomentListForYear:(int)arg0 inManagedObjectContext:(NSObject *)arg1;
+ (NSString *)allMomentListsInManagedObjectContext:(NSObject *)arg0 forLevel:(short)arg1 error:(id *)arg2;
+ (NSString *)allMomentListsRequiringAnalysisInManagedObjectContext:(NSObject *)arg0 forLevel:(short)arg1 error:(id *)arg2;
+ (NSObject *)allMomentListsInLibrary:(NSObject *)arg0 forLevel:(short)arg1;
+ (PLMomentList *)descriptionForGranularityLevel:(short)arg0;
+ (NSString *)allMomentListsInManagedObjectContext:(NSObject *)arg0 forLevel:(short)arg1 error:(id *)arg2 returnsObjectsAsFaults:(char)arg3;
+ (NSObject *)allMomentListsInLibrary:(NSObject *)arg0 forLevel:(short)arg1 returnsObjectsAsFaults:(char)arg2;
+ (PLMomentList *)findOrCreateMegaMomentListForLeftoverMomentsInMonth:(int)arg0 inYear:(int)arg1 withDay:(int)arg2 inManagedObjectContext:(NSObject *)arg3;

- (void)dealloc;
- (char)isEmpty;
- (NSString *)localizedTitle;
- (NSArray *)localizedLocationNames;
- (char)supportsDiagnosticInformation;
- (id)diagnosticInformation;
- (void)delete;
- (void)awakeFromInsert;
- (void)willSave;
- (void)didTurnIntoFault;
- (char)validateForInsert:(id *)arg0;
- (char)validateForUpdate:(id *)arg0;
- (NSObject<NSCopying> *)uniqueObjectID;
- (NSOrderedSet *)containers;
- (char)canEditContainers;
- (NSString *)containersRelationshipName;
- (unsigned int)containersCount;
- (NSString *)_typeDescription;
- (NSOrderedSet *)moments;
- (void)removeMoments:(id)arg0;
- (void)addMoments:(id)arg0;
- (void)addMomentToFront:(id)arg0;
- (void)setMoments:(NSOrderedSet *)arg0;
- (NSString *)momentListDebugDescription;
- (void)setUserTitles:(NSArray *)arg0;
- (NSArray *)userTitles;
- (void)_updateCachedNameInfoIfNeeded;
- (void)removeMomentsForMegaMomentObject:(NSObject *)arg0;
- (void)removeMomentsForYearObject:(NSObject *)arg0;
- (char)_validateForInsertOrUpdate:(id *)arg0;
- (void)invalidateNameInfo;
- (void)addMoments:(id)arg0 forMomentListLevel:(short)arg1;
- (void)removeMoments:(id)arg0 forMomentListLevel:(short)arg1;
- (void)addMoment:(PLMoment *)arg0 forMegaMomentAtIndex:(unsigned int)arg1;
- (void)addMomentsForMegaMomentObject:(NSObject *)arg0;
- (void)addMomentsForYearObject:(NSObject *)arg0;
- (void)addMomentsForMegaMoment:(id)arg0;
- (void)addMomentsForYear:(id)arg0;
- (void)removeMomentsForMegaMoment:(id)arg0;
- (void)removeMomentsForYear:(id)arg0;
- (void)insertObject:(NSObject *)arg0 inMomentsForMegaMomentAtIndex:(unsigned int)arg1;
- (NSString *)pl_debugDescription;
- (char)isMeaningful;
- (void)removeObjectFromMomentsForMegaMomentAtIndex:(unsigned int)arg0;
- (void)replaceObjectInMomentsForMegaMomentAtIndex:(unsigned int)arg0 withObject:(NSObject *)arg1;
- (void)insertMomentsForMegaMoment:(id)arg0 atIndexes:(NSArray *)arg1;
- (void)removeMomentsForMegaMomentAtIndexes:(NSArray *)arg0;
- (void)replaceMomentsForMegaMomentAtIndexes:(NSArray *)arg0 withMomentsForMegaMoment:(NSOrderedSet *)arg1;
- (void)insertObject:(NSObject *)arg0 inMomentsForYearAtIndex:(unsigned int)arg1;
- (void)removeObjectFromMomentsForYearAtIndex:(unsigned int)arg0;
- (void)replaceObjectInMomentsForYearAtIndex:(unsigned int)arg0 withObject:(NSObject *)arg1;
- (void)insertMomentsForYear:(id)arg0 atIndexes:(NSArray *)arg1;
- (void)removeMomentsForYearAtIndexes:(NSArray *)arg0;
- (void)replaceMomentsForYearAtIndexes:(NSArray *)arg0 withMomentsForYear:(NSOrderedSet *)arg1;
- (void)addMoment:(PLMoment *)arg0 forMomentListLevel:(short)arg1;
- (void)removeMoment:(PLMoment *)arg0 forMomentListLevel:(short)arg1;

@end
