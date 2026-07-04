/* Runtime dump - BRCDataOrDocsScopeGatherer
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDataOrDocsScopeGatherer : BRCNotificationGatherer
{
    NSMutableArray * _gatheringContainers;
    unsigned long long _gatheringRankCur;
    unsigned long long _gatheringRankMax;
    NSString * _gatheringNamePrefix;
    BRCItemID * _gatheredChildrenItemID;
}

@property (retain, nonatomic) BRCItemID * gatheredChildrenItemID;

- (void).cxx_destruct;
- (BRCDataOrDocsScopeGatherer *)initWithNotificationPipe:(BRCNotificationPipe *)arg0 reply:(id /* block */)arg1;
- (char)continueGatheringWithBatchSize:(int)arg0;
- (NSObject *)_gatheringDescendantOfContainerWithID:(int)arg0;
- (NSObject *)_gatheringNotDescendantOfContainerWithID:(int)arg0;
- (BRCItemID *)gatheredChildrenItemID;
- (void)setGatheredChildrenItemID:(BRCItemID *)arg0;

@end
