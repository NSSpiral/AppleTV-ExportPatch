/* Runtime dump - PLBBTelephonyActivityMsg
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBBTelephonyActivityMsg : PLBBMsgRoot
{
    NSString * _activeBand;
    NSString * _dataStatus;
    NSString * _currentRat;
    NSString * _preferredRat;
    NSString * _campedRat;
    NSString * _callStatus;
    NSString * _airplaneMode;
    NSString * _simStatus;
    NSNumber * _signalStrength;
    NSNumber * _signalBars;
}

@property (retain) NSString * activeBand;
@property (retain) NSString * dataStatus;
@property (retain) NSString * currentRat;
@property (retain) NSString * preferredRat;
@property (retain) NSString * campedRat;
@property (retain) NSString * callStatus;
@property (retain) NSString * airplaneMode;
@property (retain) NSString * simStatus;
@property (retain) NSNumber * signalStrength;
@property (retain) NSNumber * signalBars;

+ (PLBBTelephonyActivityMsg *)entryEventPointDefinitionTelephonyActivity;

- (void).cxx_destruct;
- (NSNumber *)signalStrength;
- (void)setSignalStrength:(NSNumber *)arg0;
- (void)sendAndLogPLEntry:(id)arg0 withName:(NSString *)arg1 withType:(NSObject *)arg2;
- (NSString *)activeBand;
- (NSString *)dataStatus;
- (NSString *)currentRat;
- (NSString *)preferredRat;
- (NSString *)campedRat;
- (NSString *)callStatus;
- (NSString *)airplaneMode;
- (NSString *)simStatus;
- (NSNumber *)signalBars;
- (void)refreshTelephonyActivity;
- (void)logPointIntervalTelephonyActivity;
- (void)setActiveBand:(NSString *)arg0;
- (void)setDataStatus:(NSString *)arg0;
- (void)setCurrentRat:(NSString *)arg0;
- (void)setPreferredRat:(NSString *)arg0;
- (void)setCampedRat:(NSString *)arg0;
- (void)setCallStatus:(NSString *)arg0;
- (void)setAirplaneMode:(NSString *)arg0;
- (void)setSimStatus:(NSString *)arg0;
- (void)setSignalBars:(NSNumber *)arg0;

@end
