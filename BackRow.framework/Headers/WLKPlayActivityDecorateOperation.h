/* Runtime dump - WLKPlayActivityDecorateOperation
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/WLKNetworkRequestOperation.h>
@interface WLKPlayActivityDecorateOperation : WLKNetworkRequestOperation
{
    NSArray * _playActivityIdentifiers;
    NSDictionary * _metadataByIdentifier;
}

@property (readonly, copy, nonatomic) NSArray * playActivityIdentifiers;
@property (readonly, copy, nonatomic) NSDictionary * metadataByIdentifier;

+ (NSObject *)identifierForPlayActivityID:(NSObject *)arg0 channelID:(NSString *)arg1 duration:(AWDCompanionSyncFullSyncDuration *)arg2;

- (id)responseProcessor;
- (NSArray *)playActivityIdentifiers;
- (NSDictionary *)metadataByIdentifier;
- (WLKPlayActivityDecorateOperation *)initWithIdentifiers:(PCPersistentIdentifiers *)arg0;
- (WLKPlayActivityDecorateOperation *)initWithIdentifier:(NSString *)arg0;
- (void).cxx_destruct;
- (void)didFinish;

@end
