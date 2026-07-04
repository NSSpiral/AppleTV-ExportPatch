/* Runtime dump - ATVMonitoredItemInfo
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVMonitoredItemInfo : NSObject
{
    NSNumber * _itemID;
    int _status;
    unsigned int _countOfMonitoringClients;
}

@property (readonly, copy, nonatomic) NSNumber * itemID;
@property (nonatomic) int status;
@property (nonatomic) unsigned int countOfMonitoringClients;

- (NSString *)description;
- (void).cxx_destruct;
- (int)status;
- (void)setStatus:(int)arg0;
- (void)didAddMonitoringClient;
- (void)didRemoveMonitoringClient;
- (unsigned int)countOfMonitoringClients;
- (void)setCountOfMonitoringClients:(unsigned int)arg0;
- (NSNumber *)itemID;
- (ATVMonitoredItemInfo *)initWithItemID:(NSNumber *)arg0;

@end
