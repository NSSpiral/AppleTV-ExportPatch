/* Runtime dump - OITSUBasicProgress
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUBasicProgress : OITSUProgress
{
    OITSUBasicProgressStorage * mStorage;
}

@property double value;
@property char indeterminate;

- (void)dealloc;
- (OITSUBasicProgress *)init;
- (double)value;
- (void)setValue:(double)arg0;
- (char)isIndeterminate;
- (void)setIndeterminate:(char)arg0;
- (double)maxValue;
- (OITSUBasicProgress *)initWithMaxValue:(double)arg0;

@end
