/* Runtime dump - PFUbiquityPeer
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityPeer : NSManagedObject

@property (retain, nonatomic) NSString * peerKey;
@property (retain, nonatomic) NSString * peerCode;
@property (retain, nonatomic) NSSet * remoteStates;
@property (retain, nonatomic) NSSet * primaryKeyRanges;
@property (retain, nonatomic) NSSet * transactionEntries;
@property (retain, nonatomic) NSSet * localPeerStates;

+ (NSString *)allPeersInManagedObjectContext:(NSObject *)arg0;
+ (NSObject *)peerForPeerID:(NSObject *)arg0 inManagedObjectContext:(NSObject *)arg1 createIfMissing:(char)arg2;

@end
