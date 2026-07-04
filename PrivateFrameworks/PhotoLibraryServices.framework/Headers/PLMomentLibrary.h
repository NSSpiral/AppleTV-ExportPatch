/* Runtime dump - PLMomentLibrary
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLMomentLibrary : PLManagedObject <PLAssetContainerList, PLMomentContainer>

@property (retain, nonatomic) NSOrderedSet * moments;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) unsigned int containersCount;

+ (NSString *)entityName;
+ (NSString *)entityInManagedObjectContext:(NSObject *)arg0;
+ (void)addSingletonObjectsToContext:(NSObject *)arg0;
+ (PLMomentLibrary *)sharedMomentLibraryInManagedObjectContext:(NSObject *)arg0;
+ (PLMomentLibrary *)sharedMomentLibraryInManagedObjectContext:(NSObject *)arg0 createIfNecessary:(char)arg1;

- (char)isEmpty;
- (void)prepareForDeletion;
- (NSOrderedSet *)containers;
- (char)canEditContainers;
- (NSString *)containersRelationshipName;
- (unsigned int)containersCount;
- (NSString *)_typeDescription;
- (void)removeMomentsObject:(NSObject *)arg0;
- (void)insertObject:(NSObject *)arg0 inMomentsAtIndex:(unsigned int)arg1;
- (void)removeMoments:(id)arg0;
- (void)addMoments:(id)arg0;
- (void)removeObjectFromMomentsAtIndex:(unsigned int)arg0;
- (void)replaceObjectInMomentsAtIndex:(unsigned int)arg0 withObject:(NSObject *)arg1;
- (void)insertMoments:(id)arg0 atIndexes:(NSArray *)arg1;
- (void)removeMomentsAtIndexes:(NSArray *)arg0;
- (void)replaceMomentsAtIndexes:(NSArray *)arg0 withMoments:(NSOrderedSet *)arg1;
- (void)addMomentsObject:(NSObject *)arg0;

@end
