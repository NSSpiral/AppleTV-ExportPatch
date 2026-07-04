/* Runtime dump - ATVUPPClientState
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVUPPClientState : NSObject
{
    NSMutableDictionary * _pendingChanges;
    NSMutableDictionary * _uppKeyToRecordMap;
    NSString * _lastSyncedDomainVersion;
}

@property (readonly, nonatomic) NSMutableDictionary * pendingChanges;
@property (readonly, nonatomic) NSMutableDictionary * uppKeyToRecordMap;
@property (copy) NSString * lastSyncedDomainVersion;

- (ATVUPPClientState *)init;
- (void).cxx_destruct;
- (NSMutableDictionary *)pendingChanges;
- (NSMutableDictionary *)uppKeyToRecordMap;
- (void)setLastSyncedDomainVersion:(NSString *)arg0;
- (NSString *)lastSyncedDomainVersion;

@end
