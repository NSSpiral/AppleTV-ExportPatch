/* Runtime dump - PLBBSleepWakeMsg
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBBSleepWakeMsg : PLBBMsgRoot
{
    NSString * _swReason;
    NSString * _swAtCmd;
    NSString * _swRawData;
    NSNumber * _swSvcId;
    NSString * _swClientId;
    NSString * _swMsgId;
    NSString * _swMsgType;
    NSString * _swCmdName;
    NSString * _swCmdFullName;
    NSDictionary * _swIpData;
    NSString * _swRadioClass;
    NSString * _swCTData;
    NSString * _swChan;
    NSString * _swCmd;
    NSMutableDictionary * _commonInfo;
    NSMutableDictionary * _kvPairs;
}

@property (retain) NSString * swReason;
@property (retain) NSString * swAtCmd;
@property (retain) NSString * swRawData;
@property (retain) NSNumber * swSvcId;
@property (retain) NSString * swClientId;
@property (retain) NSString * swMsgId;
@property (retain) NSString * swMsgType;
@property (retain) NSString * swCmdName;
@property (retain) NSString * swCmdFullName;
@property (retain) NSDictionary * swIpData;
@property (retain) NSString * swRadioClass;
@property (retain) NSString * swCTData;
@property (retain) NSString * swChan;
@property (retain) NSString * swCmd;
@property (retain, nonatomic) NSMutableDictionary * commonInfo;
@property (retain, nonatomic) NSMutableDictionary * kvPairs;

+ (PLBBSleepWakeMsg *)entryEventPointDefinitionSleepWakeActivity;

- (void).cxx_destruct;
- (void)sendAndLogPLEntry:(id)arg0 withName:(NSString *)arg1 withType:(NSObject *)arg2;
- (NSString *)swReason;
- (NSString *)swRadioClass;
- (NSString *)swCmd;
- (NSString *)swAtCmd;
- (NSString *)swRawData;
- (NSString *)swChan;
- (NSString *)swClientId;
- (NSNumber *)swSvcId;
- (NSString *)swMsgId;
- (NSString *)swMsgType;
- (NSString *)swCmdName;
- (NSString *)swCmdFullName;
- (void)processIPPacketWithEntry:(struct archive_entry *)arg0;
- (NSDictionary *)swIpData;
- (void)refreshSleepWakeActivity;
- (void)logEventPointSleepWake;
- (void)appendToErrStr:(id)arg0;
- (void)setSwReason:(NSString *)arg0;
- (void)setSwAtCmd:(NSString *)arg0;
- (void)setSwRawData:(NSString *)arg0;
- (void)setSwSvcId:(NSNumber *)arg0;
- (void)setSwClientId:(NSString *)arg0;
- (void)setSwMsgId:(NSString *)arg0;
- (void)setSwMsgType:(NSString *)arg0;
- (void)setSwCmdName:(NSString *)arg0;
- (void)setSwCmdFullName:(NSString *)arg0;
- (void)setSwIpData:(NSDictionary *)arg0;
- (void)setSwRadioClass:(NSString *)arg0;
- (NSString *)swCTData;
- (void)setSwCTData:(NSString *)arg0;
- (void)setSwChan:(NSString *)arg0;
- (void)setSwCmd:(NSString *)arg0;
- (NSMutableDictionary *)commonInfo;
- (void)setCommonInfo:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)kvPairs;
- (void)setKvPairs:(NSMutableDictionary *)arg0;

@end
