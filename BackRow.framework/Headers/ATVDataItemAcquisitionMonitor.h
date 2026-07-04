/* Runtime dump - ATVDataItemAcquisitionMonitor
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVDataItemAcquisitionMonitor : NSObject
{
    <ATVDataItemAcquisitionDelegate> * _delegate;
    id _acquisitionMonitoringToken;
}

@property (weak, nonatomic) <ATVDataItemAcquisitionDelegate> * delegate;
@property (retain, nonatomic) id acquisitionMonitoringToken;

- (NSString *)acquisitionMonitoringToken;
- (void)setAcquisitionMonitoringToken:(NSString *)arg0;
- (void)dealloc;
- (void)setDelegate:(<ATVDataItemAcquisitionDelegate> *)arg0;
- (<ATVDataItemAcquisitionDelegate> *)delegate;
- (void).cxx_destruct;
- (ATVDataItemAcquisitionMonitor *)initWithDataItem:(ATVDataItem *)arg0;

@end
