/* Runtime dump - NSTimeZone
 * Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSTimeZone : NSObject <NSCopying, NSSecureCoding>

@property (readonly, copy) NSString * name;
@property (readonly, copy) NSData * data;

+ (NSObject *)calendarTimeZone;
+ (NSDictionary *)abbreviationDictionary;
+ (void)setDefaultTimeZone:(NSObject *)arg0;
+ (NSArray *)knownTimeZoneNames;
+ (void)setAbbreviationDictionary:(NSDictionary *)arg0;
+ (NSTimeZone *)timeZoneDataVersion;
+ (NSTimeZone *)timeZoneWithName:(NSString *)arg0 data:(NSData *)arg1;
+ (void)resetSystemTimeZone;
+ (NSTimeZone *)allocWithZone:(struct _NSZone *)arg0;
+ (char)supportsSecureCoding;
+ (NSTimeZone *)defaultTimeZone;
+ (NSObject *)localTimeZone;
+ (NSObject *)systemTimeZone;
+ (NSTimeZone *)timeZoneWithName:(NSString *)arg0;
+ (NSTimeZone *)timeZoneWithAbbreviation:(id)arg0;
+ (NSTimeZone *)timeZoneForSecondsFromGMT:(int)arg0;

- (NSDate *)descriptionForDate:(NSDate *)arg0;
- (char)isEquivalentTo:(id)arg0;
- (char)isUTC;
- (NSDate *)ICSComputeTimeZoneChangeListFromDate:(NSDate *)arg0 toDate:(NSDate *)arg1;
- (NSCoder *)replacementObjectForPortCoder:(NSCoder *)arg0;
- (NSTimeZone *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (Class)classForCoder;
- (unsigned long)_cfTypeID;
- (char)isNSTimeZone__;
- (double)daylightSavingTimeOffsetForDate:(NSDate *)arg0;
- (NSDate *)abbreviationForDate:(NSDate *)arg0;
- (char)isDaylightSavingTimeForDate:(NSDate *)arg0;
- (NSString *)localizedName:(int)arg0 locale:(NSObject *)arg1;
- (NSTimeZone *)initWithName:(NSString *)arg0 data:(NSData *)arg1;
- (char)isEqualToTimeZone:(NSObject *)arg0;
- (double)daylightSavingTimeOffset;
- (NSObject *)nextDaylightSavingTimeTransition;
- (NSTimeZone *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)name;
- (NSTimeZone *)copyWithZone:(struct _NSZone *)arg0;
- (NSData *)data;
- (NSDate *)nextDaylightSavingTimeTransitionAfterDate:(NSDate *)arg0;
- (int)secondsFromGMTForDate:(NSDate *)arg0;
- (NSTimeZone *)initWithName:(NSString *)arg0;
- (id)abbreviation;
- (char)isDaylightSavingTime;
- (int)secondsFromGMT;

@end
