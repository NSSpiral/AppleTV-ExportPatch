/* Runtime dump - GQHBulletState
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHBulletState : NSObject
{
    struct __CFArray * mLevels;
    int mCurrentLevel;
}

+ (struct __CFString *)createLabelStr:(int)arg0 number:(int)arg1;

- (int)typeAtlevel:(int)arg0;
- (void)setType:(int)arg0 level:(int)arg1;
- (void)setNumber:(int)arg0 level:(int)arg1;
- (char)hasNumberAtLevel:(int)arg0;
- (int)numberAtLevel:(int)arg0;
- (void)setLabelType:(int)arg0 level:(int)arg1;
- (int)labelTypeAtLevel:(int)arg0;
- (void)setBulletChar:(struct __CFString *)arg0 level:(int)arg1;
- (struct __CFString *)bulletChar:(int)arg0;
- (void)setBulletIndent:(int)arg0 level:(int)arg1;
- (int)bulletIndentForLevel:(int)arg0;
- (void)setTextIndent:(int)arg0 level:(int)arg1;
- (int)textIndentForLevel:(int)arg0;
- (void)setListStyle:(NSObject *)arg0 atLevel:(int)arg1;
- (id)listStyleAtLevel:(int)arg0;
- (struct __CFString *)createTieredNumberStringForLevel:(int)arg0;
- (void)dealloc;
- (GQHBulletState *)init;
- (void)setCurrentLevel:(int)arg0;
- (int)currentLevel;

@end
