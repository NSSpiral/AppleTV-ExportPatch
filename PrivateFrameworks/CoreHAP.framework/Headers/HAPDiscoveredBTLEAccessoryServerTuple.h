/* Runtime dump - HAPDiscoveredBTLEAccessoryServerTuple
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPDiscoveredBTLEAccessoryServerTuple : NSObject
{
    HAPAccessoryServerBTLE * _accessoryServer;
    double _lastSeen;
}

@property (readonly, nonatomic) HAPAccessoryServerBTLE * accessoryServer;
@property (nonatomic) double lastSeen;

+ (NSObject *)discoveredAccessoryServerTupleWithAccessoryServer:(HAPAccessoryServerBTLE *)arg0;

- (void).cxx_destruct;
- (void)setLastSeen:(double)arg0;
- (HAPAccessoryServerBTLE *)accessoryServer;
- (double)lastSeen;

@end
