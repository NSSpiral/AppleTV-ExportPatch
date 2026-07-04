/* Runtime dump - LTAVLeaseAgentPlayerAdaptor
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol LTAVLeaseAgentAdaptor;

@class LTAVLeaseAgent;
@interface LTAVLeaseAgentPlayerAdaptor : NSObject <LTAVLeaseAgentAdaptor>
{
    LTAVLeaseAgent * _leaseAgent;
}

@property (weak, nonatomic) LTAVLeaseAgent * leaseAgent;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)leaseAgent:(LTAVLeaseAgent *)arg0 didAttemptToAcquireLeaseForItem:(ATVDataItem *)arg1 withError:(NSError *)arg2 wasCancelled:(char)arg3;
- (void)leaseAgent:(LTAVLeaseAgent *)arg0 failedToReacquireLeaseWithError:(NSError *)arg1;
- (char)leaseAgent:(LTAVLeaseAgent *)arg0 currentItemIsIdenticalToItem:(ATVDataItem *)arg1;
- (void)_deviceWillSleep:(id)arg0;
- (void)_playerWillStop:(id)arg0;
- (void)_assetDidChange:(NSDictionary *)arg0;
- (LTAVLeaseAgentPlayerAdaptor *)initWithPlayer:(ATVPlayer *)arg0;
- (void)dealloc;
- (void).cxx_destruct;
- (LTAVLeaseAgent *)leaseAgent;
- (void)setLeaseAgent:(LTAVLeaseAgent *)arg0;

@end
