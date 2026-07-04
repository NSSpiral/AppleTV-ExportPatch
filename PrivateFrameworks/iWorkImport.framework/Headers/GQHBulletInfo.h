/* Runtime dump - GQHBulletInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHBulletInfo : NSObject
{
    int mType;
    int mBulletIndent;
    int mTextIndent;
    struct __CFString * mChar;
    char mHasNumber;
    int mNumber;
    int mLabelType;
    GQDSStyle * mStyle;
}

- (int)labelType;
- (void)setBulletIndent:(int)arg0;
- (void)setHasNumber:(char)arg0;
- (char)hasNumber;
- (void)setLabelType:(int)arg0;
- (void)setBulletChar:(struct __CFString *)arg0;
- (struct __CFString *)bulletChar;
- (int)bulletIndent;
- (struct __CFString *)createTierStringNumber;
- (void)dealloc;
- (void)setType:(int)arg0;
- (int)type;
- (NSDictionary *)style;
- (void)setStyle:(NSObject *)arg0;
- (void)setNumber:(int)arg0;
- (int)number;
- (int)textIndent;
- (void)setTextIndent:(int)arg0;

@end
