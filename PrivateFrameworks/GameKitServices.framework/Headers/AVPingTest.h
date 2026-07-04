/* Runtime dump - AVPingTest
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface AVPingTest : NSObject
{
    NSString * ipAsString;
    char usingWifi;
    NSString * interfaceNameToTest;
    float min;
    float max;
    float avg;
    float stddev;
    float packetLossRate;
    int lastReturnedError;
}

@property (readonly, nonatomic) char usingWifi;
@property (readonly, nonatomic) float min;
@property (readonly, nonatomic) float max;
@property (readonly, nonatomic) float avg;
@property (readonly, nonatomic) float stddev;
@property (readonly, nonatomic) float packetLossRate;

- (void)dealloc;
- (NSString *)description;
- (int)start;
- (float)packetLossRate;
- (void)calculateInterfaceName;
- (int)parseResults:(char *)arg0 secondLastLine:(char *)arg1;
- (AVPingTest *)initWithIPAsString:(NSString *)arg0 usingWifi:(char)arg1;
- (char)usingWifi;
- (float)avg;
- (float)stddev;
- (char)parsePingLineForBadInterface:(char *)arg0;
- (char)parsePingLineForBadCommand:(char *)arg0;
- (char)parsePingLineForPLR:(char *)arg0;
- (char)parsePingLineForLatencyStats:(char *)arg0;
- (float)max;
- (float)min;

@end
