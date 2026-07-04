/* Runtime dump - PFUbiquityPeerState
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityPeerState : NSManagedObject

@property (retain, nonatomic) NSString * lastProcessedTransactionLogURL;
@property (retain, nonatomic) NSString * storeName;
@property (retain, nonatomic) NSNumber * transactionNumber;
@property (retain, nonatomic) PFUbiquityPeer * peer;
@property (retain, nonatomic) PFUbiquityStoreMetadata * storeMetadata;

+ (NSString *)peerStateForStoreName:(NSString *)arg0 andPeerID:(NSObject *)arg1 inManagedObjectContext:(NSObject *)arg2 createIfMissing:(char)arg3;
+ (NSString *)peerStatesMatchingStoreName:(NSString *)arg0 inManagedObjectContext:(NSObject *)arg1;
+ (NSString *)peerStateForStoreName:(NSString *)arg0 andPeerID:(NSObject *)arg1 inManagedObjectContext:(NSObject *)arg2;
+ (NSString *)peerStatesMatchingStoreName:(NSString *)arg0 inManagedObjectContext:(NSObject *)arg1 omittingLocalPeerID:(NSObject *)arg2;

- (PFUbiquityPeerState *)initWithStoreName:(NSString *)arg0 insertIntoManagedObjectContext:(NSObject *)arg1;

@end
