/* Runtime dump - TSWPDateTimeSmartField
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPDateTimeSmartField : TSWPSmartField
{
    NSString * _format;
    NSString * _localeID;
    long _dateStyle;
    long _timeStyle;
    int _updatePlan;
    char _needsUpdate;
    NSDate * _date;
}

@property (copy, nonatomic) NSDate * date;
@property (copy, nonatomic) NSString * format;
@property (copy, nonatomic) NSString * localeIdentifier;
@property (nonatomic) long dateStyle;
@property (nonatomic) long timeStyle;
@property (nonatomic) int updatePlan;
@property (nonatomic) char needsUpdate;

+ (TSWPDateTimeSmartField *)dateStringFromTime:(double)arg0 withFormat:(NSString *)arg1 localeIdentifier:(NSString *)arg2 dateStyle:(long)arg3 timeStyle:(long)arg4;
+ (NSString *)newDateFormatWithLocaleIdentifier:(NSString *)arg0 dateStyle:(long)arg1 timeStyle:(long)arg2;

- (TSWPDateTimeSmartField *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (NSString *)copyWithContext:(NSObject *)arg0;
- (int)smartFieldKind;
- (void)setUpdatePlan:(int)arg0;
- (void)setFormat:(NSString *)arg0 localeIdentifier:(NSString *)arg1 dateStyle:(long)arg2 timeStyle:(long)arg3;
- (TSWPDateTimeSmartField *)initWithLocaleIdentifier:(NSString *)arg0 dateStyle:(long)arg1 timeStyle:(long)arg2 format:(NSString *)arg3 date:(NSDate *)arg4 updatePlan:(int)arg5 context:(NSObject *)arg6;
- (TSWPDateTimeSmartField *)initWithLocaleIdentifier:(NSString *)arg0 dateStyle:(long)arg1 timeStyle:(long)arg2 format:(NSString *)arg3 autoUpdate:(char)arg4 context:(NSObject *)arg5;
- (TSWPDateTimeSmartField *)initWithLocaleIdentifier:(NSString *)arg0 dateStyle:(long)arg1 timeStyle:(long)arg2 autoUpdate:(char)arg3 context:(NSObject *)arg4;
- (NSString *)generateInlineText;
- (int)updatePlan;
- (long)dateStyle;
- (long)timeStyle;
- (void)dealloc;
- (NSDate *)date;
- (NSString *)localeIdentifier;
- (void)setDate:(NSDate *)arg0;
- (void)setDateStyle:(long)arg0;
- (void)setTimeStyle:(long)arg0;
- (void)setNeedsUpdate:(char)arg0;
- (void)setLocaleIdentifier:(NSString *)arg0;
- (NSString *)format;
- (void)setFormat:(NSString *)arg0;
- (void)resetLocale;
- (char)needsUpdate;

@end
