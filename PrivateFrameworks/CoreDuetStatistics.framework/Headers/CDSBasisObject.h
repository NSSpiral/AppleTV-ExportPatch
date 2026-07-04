/* Runtime dump - CDSBasisObject
 * Image: /System/Library/PrivateFrameworks/CoreDuetStatistics.framework/CoreDuetStatistics
 */

@interface CDSBasisObject : NSObject
{
    unsigned long long _localTime;
    NSDate * _creationDate;
    NSString * _basisValueString;
    unsigned long long _basisUint64Value;
    double _basisDoubleValue;
    unsigned long long _attributeId;
    char _risingEdge;
    char _fallingEdge;
    double _duration;
    int _type;
}

@property (nonatomic) unsigned long long localTime;
@property (retain, nonatomic) NSDate * creationDate;
@property (retain, nonatomic) NSString * basisValueString;
@property (nonatomic) unsigned long long basisUint64Value;
@property (nonatomic) double basisDoubleValue;
@property (nonatomic) char risingEdge;
@property (nonatomic) char fallingEdge;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long attributeId;
@property (nonatomic) int type;

- (double)duration;
- (void)setDuration:(double)arg0;
- (void)setType:(int)arg0;
- (int)type;
- (void).cxx_destruct;
- (void)setLocalTime:(unsigned long long)arg0;
- (unsigned long long)localTime;
- (NSDate *)creationDate;
- (char)risingEdge;
- (char)fallingEdge;
- (CDSBasisObject *)initWithLocalTime:(unsigned long long)arg0 creationDate:(NSDate *)arg1 basisValueString:(NSString *)arg2 basisUint64Value:(unsigned long long)arg3 basisDoubleValue:(double)arg4 risingEdge:(char)arg5 fallingEdge:(char)arg6 duration:(double)arg7 attributeId:(unsigned long long)arg8 type:(int)arg9;
- (NSString *)basisValueString;
- (void)setBasisValueString:(NSString *)arg0;
- (unsigned long long)basisUint64Value;
- (void)setBasisUint64Value:(unsigned long long)arg0;
- (double)basisDoubleValue;
- (void)setBasisDoubleValue:(double)arg0;
- (void)setRisingEdge:(char)arg0;
- (void)setFallingEdge:(char)arg0;
- (unsigned long long)attributeId;
- (void)setAttributeId:(unsigned long long)arg0;
- (void)setCreationDate:(NSDate *)arg0;

@end
