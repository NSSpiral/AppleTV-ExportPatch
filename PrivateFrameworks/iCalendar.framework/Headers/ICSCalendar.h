/* Runtime dump - ICSCalendar
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSCalendar : ICSComponent
{
    NSMutableSet * _keys;
    NSMutableDictionary * _masters;
    NSMutableDictionary * _occurrences;
    NSMutableDictionary * _timezones;
    NSMutableArray * _parsingErrors;
}

@property (retain, nonatomic) NSString * calscale;
@property (nonatomic) int method;
@property (retain, nonatomic) NSString * prodid;
@property (retain, nonatomic) NSString * version;
@property (retain, nonatomic) ICSDuration * x_apple_auto_refresh;
@property (retain, nonatomic) ICSColor * x_apple_calendar_color;
@property char x_apple_ignore_on_restore;
@property (retain, nonatomic) NSString * x_wr_caldesc;
@property (retain, nonatomic) NSString * x_wr_calname;
@property (retain, nonatomic) NSString * x_wr_relcalid;
@property (retain, nonatomic) NSString * x_wr_timezone;
@property int x_calendarserver_access;

+ (int)compareCalendarServerAccess:(int)arg0 withAccess:(int)arg1;
+ (NSString *)name;
+ (NSString *)ICSStringFromMethod:(int)arg0;
+ (int)methodFromICSString:(NSString *)arg0;
+ (int)calendarServerAccessFromICSString:(NSString *)arg0;
+ (ICSCalendar *)calendarWithKnownTimeZones;
+ (ICSCalendar *)defaultProdid;
+ (void)setDefaultProdid:(id)arg0;
+ (ICSCalendar *)ICSStringFromCalendarServerAccess:(int)arg0;

- (NSArray *)componentKeys;
- (NSString *)componentForKey:(NSString *)arg0;
- (NSString *)componentOccurrencesForKey:(NSString *)arg0;
- (void)setComponents:(NSArray *)arg0 options:(int)arg1;
- (NSDate *)systemTimeZoneForDate:(NSDate *)arg0;
- (void)dealloc;
- (ICSCalendar *)init;
- (ICSCalendar *)_init;
- (int)method;
- (void)setVersion:(NSString *)arg0;
- (NSString *)version;
- (NSString *)timeZoneForKey:(NSString *)arg0;
- (NSDate *)systemDateForDate:(NSDate *)arg0 options:(int)arg1;
- (void)setProdid:(NSString *)arg0;
- (void)setComponents:(NSArray *)arg0;
- (void)addComponent:(_UIDatePickerComponent *)arg0;
- (void)setMethod:(int)arg0;
- (NSString *)propertiesToIncludeForChecksumVersion:(int)arg0;
- (void)setCalscale:(NSString *)arg0;
- (NSDate *)systemCalendarForDate:(NSDate *)arg0 options:(int)arg1;
- (void)_addTimeZonesInComponent:(id)arg0 toSet:(NSSet *)arg1;
- (void)_addTimeZonesInComponent:(id)arg0 toDictionary:(NSDictionary *)arg1;
- (NSArray *)_timeZonesForComponents:(NSArray *)arg0 options:(int)arg1;
- (void)_addComponent:(_UIDatePickerComponent *)arg0;
- (NSString *)calscale;
- (NSString *)prodid;
- (ICSDuration *)x_apple_auto_refresh;
- (void)setX_apple_auto_refresh:(ICSDuration *)arg0;
- (ICSColor *)x_apple_calendar_color;
- (void)setX_apple_calendar_color:(ICSColor *)arg0;
- (void)setX_wr_caldesc:(NSString *)arg0;
- (NSString *)x_wr_caldesc;
- (NSString *)x_wr_calname;
- (void)setX_wr_calname:(NSString *)arg0;
- (NSString *)x_wr_relcalid;
- (void)setX_wr_relcalid:(NSString *)arg0;
- (NSString *)x_wr_timezone;
- (void)setX_wr_timezone:(NSString *)arg0;
- (void)setComponents:(NSArray *)arg0 timeZones:(char)arg1;
- (void)addParsingError:(NSError *)arg0;
- (NSMutableArray *)parsingErrors;
- (void)fixComponent;
- (void)fixPropertiesInheritance;
- (void)fixEntities;

@end
