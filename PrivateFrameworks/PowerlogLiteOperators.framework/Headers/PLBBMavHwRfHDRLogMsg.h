/* Runtime dump - PLBBMavHwRfHDRLogMsg
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBBMavHwRfHDRLogMsg : PLBasebandMessage
{
    unsigned char _inited;
    NSString * _error;
    NSNumber * _logDuration;
    NSNumber * _sDTXOnFrame;
    NSNumber * _sDTXOffFrame;
    NSNumber * _lDTXOnFrame;
    NSNumber * _lDTXOffFrame;
    NSNumber * _tDTXOnFrame;
    NSNumber * _tDTXOffFrame;
    NSMutableDictionary * _commonInfo;
    NSMutableDictionary * _kvPairs;
}

@property (retain) NSString * error;
@property (retain) NSNumber * logDuration;
@property (retain) NSNumber * sDTXOnFrame;
@property (retain) NSNumber * sDTXOffFrame;
@property (retain) NSNumber * lDTXOnFrame;
@property (retain) NSNumber * lDTXOffFrame;
@property (retain) NSNumber * tDTXOnFrame;
@property (retain) NSNumber * tDTXOffFrame;
@property (nonatomic) unsigned char inited;
@property (retain, nonatomic) NSMutableDictionary * commonInfo;
@property (retain, nonatomic) NSMutableDictionary * kvPairs;

+ (PLBBMavHwRfHDRLogMsg *)entryEventBackwardDefinitionBBMavHwRfHDR;

- (PLBBMavHwRfHDRLogMsg *)init;
- (void).cxx_destruct;
- (NSString *)error;
- (void)setError:(NSString *)arg0;
- (void)setLogDuration:(NSNumber *)arg0;
- (void)setHeaderWithSeqNum:(NSNumber *)arg0 andDate:(NSDate *)arg1 andTimeCal:(double)arg2;
- (NSNumber *)logDuration;
- (void)sendAndLogPLEntry:(id)arg0 withName:(NSString *)arg1 withType:(NSObject *)arg2;
- (NSMutableDictionary *)commonInfo;
- (void)setCommonInfo:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)kvPairs;
- (void)setKvPairs:(NSMutableDictionary *)arg0;
- (void)addPairWithKey:(NSString *)arg0 andWithVal:(id)arg1;
- (void)populateEntry:(id)arg0;
- (unsigned char)inited;
- (void)setInited:(unsigned char)arg0;
- (void)refreshRequest;
- (void)setSDTXOnFrame:(NSNumber *)arg0;
- (void)setSDTXOffFrame:(NSNumber *)arg0;
- (void)setLDTXOnFrame:(NSNumber *)arg0;
- (void)setLDTXOffFrame:(NSNumber *)arg0;
- (void)setTDTXOnFrame:(NSNumber *)arg0;
- (void)setTDTXOffFrame:(NSNumber *)arg0;
- (id)logEventBackwardBBMavHwRfHDR;
- (NSNumber *)sDTXOnFrame;
- (NSNumber *)sDTXOffFrame;
- (NSNumber *)lDTXOnFrame;
- (NSNumber *)lDTXOffFrame;
- (NSNumber *)tDTXOnFrame;
- (NSNumber *)tDTXOffFrame;

@end
