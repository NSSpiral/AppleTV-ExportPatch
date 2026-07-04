/* Runtime dump - ICSRecurrenceRule
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSRecurrenceRule : NSObject <NSCoding, ICSWriting>
{
    int _freq;
    NSMutableDictionary * _parameters;
}

@property (nonatomic) int freq;
@property (retain, nonatomic) ICSDateValue * until;
@property (nonatomic) NSNumber * count;
@property (nonatomic) NSNumber * interval;
@property (retain, nonatomic) NSArray * bysecond;
@property (retain, nonatomic) NSArray * byminute;
@property (retain, nonatomic) NSArray * byhour;
@property (retain, nonatomic) NSArray * byday;
@property (retain, nonatomic) NSArray * bymonthday;
@property (retain, nonatomic) NSArray * byyearday;
@property (retain, nonatomic) NSArray * byweekno;
@property (retain, nonatomic) NSArray * bymonth;
@property (retain, nonatomic) NSArray * bysetpos;
@property (nonatomic) NSNumber * wkst;

+ (NSString *)recurrenceRuleFromICSCString:(char *)arg0 withTokenizer:(<UITextInputTokenizer> *)arg1;
+ (NSString *)recurrenceRuleFromICSString:(NSString *)arg0;

- (ICSRecurrenceRule *)initWithFrequency:(int)arg0;
- (void)setWkst:(NSNumber *)arg0;
- (void)setUntil:(ICSDateValue *)arg0;
- (void)setByday:(NSArray *)arg0;
- (void)setBymonth:(NSArray *)arg0;
- (void)setBymonthday:(NSArray *)arg0;
- (void)setByweekno:(NSArray *)arg0;
- (void)setByyearday:(NSArray *)arg0;
- (void)setBysetpos:(NSArray *)arg0;
- (int)freq;
- (NSNumber *)wkst;
- (ICSDateValue *)until;
- (NSArray *)byday;
- (NSArray *)bymonth;
- (NSArray *)bymonthday;
- (NSArray *)byweekno;
- (NSArray *)byyearday;
- (NSArray *)bysetpos;
- (NSString *)parameterValueForName:(NSString *)arg0;
- (void)setParameterValue:(TDEffectParameterValue *)arg0 forName:(NSString *)arg1;
- (void)dealloc;
- (ICSRecurrenceRule *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSNumber *)count;
- (void)setCount:(NSNumber *)arg0;
- (void)setInterval:(NSNumber *)arg0;
- (NSNumber *)interval;
- (NSDictionary *)ICSStringWithOptions:(unsigned int)arg0;
- (NSString *)propertiesToIncludeForChecksumVersion:(int)arg0;
- (NSString *)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg0;
- (id)propertiesToObscure;
- (void)ICSStringWithOptions:(unsigned int)arg0 appendingToString:(NSString *)arg1;
- (NSString *)parametersToIncludeForChecksumVersion:(int)arg0;
- (id)parametersToObscure;
- (char)shouldObscureValue;
- (void)removeParameterValueForName:(NSString *)arg0;
- (void)_ICSStringWithOptions:(unsigned int)arg0 appendingToString:(NSString *)arg1;
- (NSArray *)byhour;
- (NSArray *)byminute;
- (NSArray *)bysecond;
- (void)cleanUpForStartDate:(NSDate *)arg0;
- (NSDate *)occurrencesForStartDate:(NSDate *)arg0 fromDate:(NSDate *)arg1 toDate:(NSDate *)arg2 inTimeZone:(NSObject *)arg3;
- (void)setFreq:(int)arg0;
- (void)setBysecond:(NSArray *)arg0;
- (void)setByminute:(NSArray *)arg0;
- (void)setByhour:(NSArray *)arg0;

@end
