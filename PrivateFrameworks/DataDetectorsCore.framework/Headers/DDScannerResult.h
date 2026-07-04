/* Runtime dump - DDScannerResult
 * Image: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

@interface DDScannerResult : NSObject <NSCoding, NSSecureCoding>
{
    struct __DDResult * _coreResult;
    NSArray * _subResultsCache;
}

@property struct _NSRange range;

+ (char)supportsSecureCoding;
+ (NSArray *)resultsFromCoreResults:(struct __CFArray *)arg0;
+ (NSObject *)resultFromCoreResult:(struct __DDResult *)arg0;

- (void)dealloc;
- (DDScannerResult *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (DDScannerResult *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (void *)value;
- (DDScannerResult *)copyWithZone:(struct _NSZone *)arg0;
- (struct _NSRange)range;
- (NSString *)valueForUndefinedKey:(NSString *)arg0;
- (CLLocation *)location;
- (void)setRange:(struct _NSRange)arg0;
- (struct __DDResult *)coreResult;
- (void)offsetRangeBy:(int)arg0;
- (DDScannerResult *)initWithCoreResult:(struct __DDResult *)arg0;
- (NSArray *)subResults;
- (NSString *)matchedString;
- (id)rawValue;
- (NSData *)contextualData;
- (void)setSubResults:(NSArray *)arg0;
- (struct ?)cfRange;
- (double)getDuration;
- (NSDate *)dateFromReferenceDate:(NSDate *)arg0 referenceTimezone:(NSObject *)arg1 timezoneRef:(id *)arg2 allDayRef:(char *)arg3;
- (char)extractStartDate:(id *)arg0 startTimezone:(id *)arg1 endDate:(id *)arg2 endTimezone:(id *)arg3 allDayRef:(char *)arg4 referenceDate:(NSDate *)arg5 referenceTimezone:(NSObject *)arg6;
- (char)getPhoneValue:(id *)arg0 label:(id *)arg1;
- (char)getMailValue:(id *)arg0 label:(id *)arg1;
- (char)getIMScreenNameValue:(id *)arg0 type:(id *)arg1;
- (char)getStreet:(id *)arg0 city:(id *)arg1 state:(id *)arg2 zip:(id *)arg3 country:(id *)arg4;
- (long)score;

@end
