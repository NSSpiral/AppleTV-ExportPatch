/* Runtime dump - TSUBasicProgress
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUBasicProgress : TSUProgress
{
    TSUBasicProgressStorage * mStorage;
}

@property double value;
@property char indeterminate;

- (void)dealloc;
- (TSUBasicProgress *)init;
- (double)value;
- (void)setValue:(double)arg0;
- (char)isIndeterminate;
- (void)setIndeterminate:(char)arg0;
- (double)maxValue;
- (TSUBasicProgress *)initWithMaxValue:(double)arg0;

@end
