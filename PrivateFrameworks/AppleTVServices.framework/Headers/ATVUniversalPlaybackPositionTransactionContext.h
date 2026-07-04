/* Runtime dump - ATVUniversalPlaybackPositionTransactionContext
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVUniversalPlaybackPositionTransactionContext : NSObject <SBKUniversalPlaybackPositionTransactionContext>
{
    NSString * _capturedDomainVersion;
    ATVUPPClientState * _clientState;
    NSDictionary * _changes;
}

@property (readonly, nonatomic) ATVUPPClientState * clientState;
@property (readonly, nonatomic) NSDictionary * changes;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void).cxx_destruct;
- (ATVUniversalPlaybackPositionTransactionContext *)initWithClientState:(ATVUPPClientState *)arg0 changes:(NSDictionary *)arg1;
- (NSString *)lastSyncedDomainVersion;
- (NSDictionary *)changes;
- (ATVUPPClientState *)clientState;

@end
