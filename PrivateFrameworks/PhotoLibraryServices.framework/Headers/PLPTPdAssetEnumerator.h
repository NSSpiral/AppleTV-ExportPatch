/* Runtime dump - PLPTPdAssetEnumerator
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPTPdAssetEnumerator : NSObject <NSFastEnumeration>
{
    PLManagedObjectContext * _managedObjectContext;
    NSArray * _assetObjectIDs;
    NSArray * _albumObjectIDs;
    NSArray * _resultStore;
}

+ (PLPTPdAssetEnumerator *)enumeratorWithAssetObjectIDs:(NSArray *)arg0 albumObjectIDs:(NSArray *)arg1 managedObjectContext:(PLManagedObjectContext *)arg2;

- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (void)dealloc;
- (PLPTPdAssetEnumerator *)init;
- (unsigned int)getPTPdInfo:(id *)arg0 count:(unsigned int)arg1 fetchOffset:(unsigned int)arg2;
- (NSSet *)assetsFromOffset:(unsigned int)arg0 count:(unsigned int)arg1;

@end
