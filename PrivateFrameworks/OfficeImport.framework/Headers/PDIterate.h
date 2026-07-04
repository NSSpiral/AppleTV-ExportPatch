/* Runtime dump - PDIterate
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDIterate : NSObject
{
    int mType;
    char mIsBackwards;
    char mIsPercentage;
    double mValue;
}

- (char)isEqual:(NSObject *)arg0;
- (void)setType:(int)arg0;
- (int)type;
- (double)value;
- (void)setValue:(double)arg0;
- (char)isBackwards;
- (char)isValuePercentage;
- (void)setIsBackwards:(char)arg0;
- (void)setIsValuePercentage:(char)arg0;

@end
