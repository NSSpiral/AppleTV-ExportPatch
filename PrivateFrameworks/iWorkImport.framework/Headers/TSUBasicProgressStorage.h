/* Runtime dump - TSUBasicProgressStorage
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUBasicProgressStorage : NSObject
{
    double mValue;
    double mMaxValue;
    char mIndeterminate;
}

@property double value;
@property double maxValue;
@property char indeterminate;

- (double)value;
- (void)setValue:(double)arg0;
- (void)setMaxValue:(double)arg0;
- (char)isIndeterminate;
- (void)setIndeterminate:(char)arg0;
- (double)maxValue;

@end
