/* Runtime dump - PFUbiquitySQLCorePeerRange
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquitySQLCorePeerRange : NSObject
{
    NSString * _owningPeerID;
    NSString * _entityName;
    NSNumber * _rangeStart;
    NSNumber * _rangeEnd;
    NSNumber * _peerStart;
    NSNumber * _peerEnd;
}

@property (readonly, nonatomic) NSString * owningPeerID;
@property (readonly, nonatomic) NSString * entityName;
@property (readonly, nonatomic) NSNumber * rangeStart;
@property (readonly, nonatomic) NSNumber * rangeEnd;
@property (readonly, nonatomic) NSNumber * peerStart;
@property (readonly, nonatomic) NSNumber * peerEnd;

- (NSString *)owningPeerID;
- (NSNumber *)rangeStart;
- (NSNumber *)rangeEnd;
- (NSNumber *)peerStart;
- (NSNumber *)peerEnd;
- (PFUbiquitySQLCorePeerRange *)initWithOwningPeerID:(NSString *)arg0 entityName:(NSString *)arg1 rangeStart:(NSNumber *)arg2 rangeEnd:(NSNumber *)arg3 peerStart:(NSNumber *)arg4 peerEnd:(NSNumber *)arg5;
- (void)dealloc;
- (NSString *)description;
- (NSString *)entityName;

@end
