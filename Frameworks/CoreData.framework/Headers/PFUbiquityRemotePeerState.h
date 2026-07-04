/* Runtime dump - PFUbiquityRemotePeerState
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityRemotePeerState : NSManagedObject

@property (retain, nonatomic) NSNumber * transactionNumber;
@property (retain, nonatomic) NSString * peerID;
@property (retain, nonatomic) NSString * storeName;
@property (retain, nonatomic) PFUbiquityPeer * peer;

+ (NSString *)remotePeerStatesMatchingStoreName:(NSString *)arg0 inManagedObjectContext:(NSObject *)arg1;
+ (NSString *)remotePeerStatesMatchingStoreName:(NSString *)arg0 andPeerID:(NSObject *)arg1 inManagedObjectContext:(NSObject *)arg2;

- (PFUbiquityRemotePeerState *)initWithStoreName:(NSString *)arg0 andRemotePeerID:(NSObject *)arg1 insertIntoManagedObjectContext:(NSObject *)arg2;

@end
