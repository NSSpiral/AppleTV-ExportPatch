/* Runtime dump - MKDistanceFormatter
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKDistanceFormatter : NSFormatter
{
    NSLocale * _locale;
    unsigned int _units;
    unsigned int _unitStyle;
}

@property (copy, nonatomic) NSLocale * locale;
@property (nonatomic) unsigned int units;
@property (nonatomic) unsigned int unitStyle;

- (void)setUnitStyle:(unsigned int)arg0;
- (unsigned int)unitStyle;
- (char)isPartialStringValid:(id *)arg0 proposedSelectedRange:(struct _NSRange *)arg1 originalString:(NSString *)arg2 originalSelectedRange:(struct _NSRange)arg3 errorDescription:(id *)arg4;
- (char)_useMetric;
- (NSString *)stringFromDistance:(double)arg0;
- (double)distanceFromString:(NSString *)arg0;
- (MKDistanceFormatter *)init;
- (NSString *)description;
- (void)setLocale:(NSLocale *)arg0;
- (NSLocale *)locale;
- (void).cxx_destruct;
- (NSString *)stringForObjectValue:(id)arg0;
- (unsigned int)units;
- (void)setUnits:(unsigned int)arg0;
- (char)getObjectValue:(id *)arg0 forString:(NSString *)arg1 errorDescription:(id *)arg2;

@end
