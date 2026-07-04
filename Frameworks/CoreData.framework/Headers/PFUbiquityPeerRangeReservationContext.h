/* Runtime dump - PFUbiquityPeerRangeReservationContext
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityPeerRangeReservationContext : NSObject
{
    NSMutableDictionary * _peerEntityNameRangeStartSet;
    NSMutableDictionary * _globalIDToLocalURI;
    NSMutableArray * _unresolvedGlobalObjectIDs;
    NSManagedObjectContext * _moc;
    NSPersistentStore * _store;
    NSPersistentStoreCoordinator * _psc;
    NSMutableDictionary * _storeNameToFetchedMetadata;
    NSArray * _globalObjectIDs;
    int _numRangesToReserve;
}

@property (readonly, nonatomic) NSPersistentStoreCoordinator * psc;
@property (readonly, nonatomic) NSPersistentStore * store;
@property (readonly, nonatomic) NSManagedObjectContext * moc;
@property (readonly, nonatomic) NSArray * globalObjectIDs;
@property (readonly, nonatomic) int numRangesToReserve;
@property (readonly, nonatomic) NSDictionary * peerEntityNameRangeStartSet;

- (NSPersistentStore *)store;
- (NSPersistentStoreCoordinator *)psc;
- (NSArray *)globalObjectIDs;
- (PFUbiquityPeerRangeReservationContext *)initWithPersistentStore:(char)arg0 andGlobalObjectIDs:(id)arg1;
- (void)prepareForRangeReservationWithRangeStart:(id)arg0 andGlobalID:(NSObject *)arg1 andEntityName:(NSString *)arg2;
- (id)createLocalIDStringForStoreUUID:(id)arg0 entityName:(NSString *)arg1 andPrimaryKeyString:(NSString *)arg2;
- (int)numRangesToReserve;
- (char)createNewPeerRangesWithCache:(NSObject *)arg0 Error:(id *)arg1;
- (NSDictionary *)peerEntityNameRangeStartSet;
- (void)dealloc;
- (PFUbiquityPeerRangeReservationContext *)init;
- (NSManagedObjectContext *)moc;

@end
