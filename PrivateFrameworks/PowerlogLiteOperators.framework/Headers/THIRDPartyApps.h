/* Runtime dump - THIRDPartyApps
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface THIRDPartyApps : NSObject
{
    NSString * processName;
    int wifiIn;
    int wifiOut;
    int cellIn;
    int cellOut;
}

@property (retain, nonatomic) NSString * processName;
@property (nonatomic) int wifiIn;
@property (nonatomic) int wifiOut;
@property (nonatomic) int cellIn;
@property (nonatomic) int cellOut;

- (NSString *)processName;
- (void).cxx_destruct;
- (int)cellIn;
- (int)cellOut;
- (int)wifiIn;
- (int)wifiOut;
- (void)setProcessName:(NSString *)arg0;
- (void)setWifiIn:(int)arg0;
- (void)setWifiOut:(int)arg0;
- (void)setCellIn:(int)arg0;
- (void)setCellOut:(int)arg0;

@end
