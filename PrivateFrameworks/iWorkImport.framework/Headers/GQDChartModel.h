/* Runtime dump - GQDChartModel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDChartModel : NSObject
{
    struct __CFArray * mChartData;
    struct __CFArray * mColumnNames;
    struct __CFArray * mRowNames;
    struct __CFDictionary * mPropertyBag;
    long mDirection;
    struct __CFString * mTitle;
    struct __CFString * mCatagoryTitle;
    struct __CFString * mValueTitle;
    struct __CFString * mValue2Title;
    struct __CFBundle * mProcessorBundle;
    char mIsFormulaChart;
}

- (void)setProcessorBundle:(struct __CFBundle *)arg0;
- (void)transpose;
- (struct __CFArray *)seriesArray;
- (struct __CFDictionary *)propertiesForSeriesAtIndex:(long)arg0;
- (char)hasValueForProperty:(struct __CFString *)arg0 forSeriesAtIndex:(long)arg1 value:(void * *)arg2;
- (struct __CFArray *)columnNames;
- (struct __CFArray *)rowNames;
- (struct __CFDictionary *)propertyBag;
- (char)hasStringValueForProperty:(struct __CFString *)arg0 forSeriesAtIndex:(long)arg1 value:(struct __CFString * *)arg2;
- (char)hasIntValueForProperty:(struct __CFString *)arg0 forSeriesAtIndex:(long)arg1 value:(int *)arg2;
- (char)hasFloatValueForProperty:(struct __CFString *)arg0 forSeriesAtIndex:(long)arg1 value:(float *)arg2;
- (struct __CFString *)catagoryTitle;
- (struct __CFString *)valueTitle;
- (struct __CFString *)value2Title;
- (char)isFormulaChart;
- (void)dealloc;
- (struct __CFString *)title;
- (long)direction;
- (struct __CFArray *)chartData;

@end
