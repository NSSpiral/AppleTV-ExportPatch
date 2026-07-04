/* Runtime dump - TSCEWarning
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEWarning : NSObject
{
    NSDictionary * mMetadata;
    char mIgnored;
}

+ (char)setHasVisibleWarnings:(id)arg0;
+ (void)reportNonNumericCellWarningInContext:(struct TSCEWarningReportingContext *)arg0 reference:(NSObject *)arg1;
+ (void)reportMonthOutOfRangeWarningInContext:(struct TSCEWarningReportingContext *)arg0;
+ (void)reportDayOutOfRangeWarningInContext:(struct TSCEWarningReportingContext *)arg0;
+ (void)reportBoolToNumberConversionWarningInContext:(struct TSCEWarningReportingContext *)arg0;
+ (void)reportMismatchedSizesWarningInContext:(struct TSCEWarningReportingContext *)arg0;
+ (void)reportLossOfUnitsWarningInContext:(struct TSCEWarningReportingContext *)arg0;
+ (void)reportAutomaticUnitConversionWarningInContext:(struct TSCEWarningReportingContext *)arg0;
+ (void)reportComparisonWarningInContext:(struct TSCEWarningReportingContext *)arg0 leftType:(NSObject *)arg1 rightType:(int)arg2;

- (char)isIgnored;
- (void)setIgnored:(char)arg0;
- (id)displayStringWithCalculationEngine:(TSCECalculationEngine *)arg0 forTable:(struct __CFUUID *)arg1 andCellID:(struct ?)arg2;
- (id)copyByRemappingEntityIDs:(id)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSCEWarning *)initWithDictionary:(NSDictionary *)arg0;
- (NSString *)type;
- (TSCEWarning *)copyWithZone:(struct _NSZone *)arg0;

@end
