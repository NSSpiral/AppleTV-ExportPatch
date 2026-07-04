/* Runtime dump - BTLEAccessory
 * Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface BTLEAccessory : NSObject
{
    CBPeripheral * _peripheral;
    NSString * _name;
    double _lastSeen;
    int _lastRSSI;
}

@property (retain, nonatomic) CBPeripheral * peripheral;
@property (copy, nonatomic) NSString * name;
@property (nonatomic) double lastSeen;
@property (nonatomic) int RSSI;

- (void)dealloc;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (BTLEAccessory *)initWithPeripheral:(CBPeripheral *)arg0;
- (void)setLastSeen:(double)arg0;
- (double)lastSeen;
- (CBPeripheral *)peripheral;
- (void)setRSSI:(int)arg0;
- (int)RSSI;
- (void)setPeripheral:(CBPeripheral *)arg0;

@end
