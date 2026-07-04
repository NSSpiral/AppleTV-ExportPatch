/* Runtime dump - PLObjectSnapshot
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLObjectSnapshot : NSObject
{
    PLManagedObject * _managedObject;
    NSKnownKeysDictionary * _snapshotValues;
    struct __CFDictionary * _indexMaps;
}

@property (readonly, retain, nonatomic) PLManagedObject * managedObject;

+ (NSObject *)snapshotForManagedObject:(NSObject *)arg0 changeNotificationCenter:(PLChangeNotificationCenter *)arg1 useCommitedValues:(char)arg2;
+ (struct __CFDictionary *)_createIndexMapsSnapshotForManagedObject:(NSObject *)arg0 changeNotificationCenter:(PLChangeNotificationCenter *)arg1;

- (void)dealloc;
- (PLObjectSnapshot *)init;
- (NSString *)description;
- (void)setAssetsSnapshot:(NSObject *)arg0;
- (char)hasSnapshotValueForProperty:(NSString *)arg0;
- (PLManagedObject *)managedObject;
- (NSString *)_allSnapshotValuesDescription;
- (PLObjectSnapshot *)initWithManagedObject:(PLManagedObject *)arg0 properties:(NSDictionary *)arg1 toOneRelationships:(id)arg2 indexMaps:(struct __CFDictionary *)arg3 useCommitedValues:(char)arg4;
- (NSObject *)_snapshotValueForProperty:(NSString *)arg0;
- (NSObject *)indexMapStateForDerivedObject:(NSObject *)arg0;
- (NSObject *)snapshotValueForProperty:(NSString *)arg0;
- (NSObject *)filteredIndexesForFilter:(NSObject *)arg0;

@end
