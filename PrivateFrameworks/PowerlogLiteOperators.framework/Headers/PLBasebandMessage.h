/* Runtime dump - PLBasebandMessage
 * Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBasebandMessage : NSObject
{
    NSData * rawData;
    unsigned int ticksInGoodState;
    unsigned int ticksInGPSONState;
    double timeCalibration;
    NSDate * _apTimestamp;
    PLBBMsg * _logger;
    PLAgent * _agent;
    NSNumber * _seqNum;
    NSDate * _date;
    NSString * _pload;
    NSNumber * _msgType;
    double _timeCal;
}

@property (readonly, retain, nonatomic) NSData * rawData;
@property (readonly, nonatomic) unsigned int ticksInGoodState;
@property (readonly, nonatomic) unsigned int ticksInGPSONState;
@property (readonly, retain, nonatomic) NSDate * timestamp;
@property (readonly, retain, nonatomic) NSDate * apTimestamp;
@property (readonly, retain, nonatomic) NSDate * calibratedTimestamp;
@property (nonatomic) double timeCalibration;
@property (retain) PLBBMsg * logger;
@property (retain, nonatomic) PLAgent * agent;
@property (retain, nonatomic) NSNumber * seqNum;
@property (retain, nonatomic) NSDate * date;
@property double timeCal;
@property (retain) NSString * pload;
@property (retain) NSNumber * msgType;

+ (NSData *)messageWithData:(NSData *)arg0;

- (void)dealloc;
- (NSDate *)timestamp;
- (NSDate *)date;
- (PLBasebandMessage *)initWithData:(NSData *)arg0;
- (NSData *)rawData;
- (void)setDate:(NSDate *)arg0;
- (void).cxx_destruct;
- (PLAgent *)agent;
- (void)setAgent:(PLAgent *)arg0;
- (NSNumber *)seqNum;
- (double)timeCal;
- (void)logWithLogger:(PLBBMsg *)arg0;
- (NSNumber *)msgType;
- (void)setSeqNum:(NSNumber *)arg0;
- (unsigned int)ticksInGoodState;
- (unsigned int)ticksInGPSONState;
- (NSDate *)apTimestamp;
- (NSDate *)calibratedTimestamp;
- (double)timeCalibration;
- (void)setTimeCalibration:(double)arg0;
- (char)isTimestampValid:(char *)arg0;
- (void)logEntry:(id)arg0 withBody:(NSObject *)arg1;
- (char)isCalibratedDateGood;
- (void)logMsgAll;
- (NSString *)pload;
- (void)setMsgType:(NSNumber *)arg0;
- (PLBBMsg *)logger;
- (void)setLogger:(PLBBMsg *)arg0;
- (void)setTimeCal:(double)arg0;
- (void)setPload:(NSString *)arg0;

@end
