/* Runtime dump - PLBBMsgHandler
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBBMsgHandler : NSObject
{
    NSData * _rawData;
    PLAgent * _agent;
    NSNumber * _seqNum;
    NSDate * _date;
    unsigned int _ticksInGoodState;
    unsigned int _ticksInGPSONState;
    NSDate * _timestamp;
    NSDate * _apTimestamp;
    NSDate * _calibratedTimestamp;
    double _timeCalibration;
}

@property (retain, nonatomic) NSData * rawData;
@property (retain, nonatomic) PLAgent * agent;
@property (retain, nonatomic) NSNumber * seqNum;
@property (retain, nonatomic) NSDate * date;
@property (readonly, nonatomic) unsigned int ticksInGoodState;
@property (readonly, nonatomic) unsigned int ticksInGPSONState;
@property (readonly, retain, nonatomic) NSDate * timestamp;
@property (readonly, retain, nonatomic) NSDate * apTimestamp;
@property (readonly, retain, nonatomic) NSDate * calibratedTimestamp;
@property (nonatomic) double timeCalibration;

+ (id /* block */)getMsgHandler;

- (PLBBMsgHandler *)init;
- (NSDate *)timestamp;
- (NSDate *)date;
- (NSData *)rawData;
- (void)setDate:(NSDate *)arg0;
- (void).cxx_destruct;
- (PLAgent *)agent;
- (void)setAgent:(PLAgent *)arg0;
- (NSNumber *)seqNum;
- (void)setSeqNum:(NSNumber *)arg0;
- (NSString *)decodeMsgHeader;
- (void)registerWithHandlerAs:(id)arg0 forType:(unsigned int)arg1;
- (void)handleMsg:(id)arg0 forAgent:(CBPairingAgent *)arg1;
- (void)setRawData:(NSData *)arg0;
- (unsigned int)ticksInGoodState;
- (unsigned int)ticksInGPSONState;
- (NSDate *)apTimestamp;
- (NSDate *)calibratedTimestamp;
- (double)timeCalibration;
- (void)setTimeCalibration:(double)arg0;

@end
