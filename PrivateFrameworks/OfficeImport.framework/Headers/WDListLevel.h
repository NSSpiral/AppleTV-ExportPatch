/* Runtime dump - WDListLevel
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDListLevel : NSObject
{
    WDDocument * mDocument;
    WDParagraphProperties * mParagraphProperties;
    WDCharacterProperties * mCharacterProperties;
    WDOfficeArt * mImage;
    long mStartNumber;
    int mNumberFormat;
    char mRestartNumbering;
    long mRestartLevel;
    char mLegal;
    int mSuffix;
    NSMutableString * mText;
    char mLegacy;
    long mLegacySpace;
    long mLegacyIndent;
    int mJustification;
}

- (void)dealloc;
- (void)setImage:(UIImage *)arg0;
- (NSString *)description;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (UIImage *)image;
- (WDListLevel *)initWithDocument:(NSObject *)arg0;
- (void)setLegacy:(char)arg0;
- (NSDictionary *)characterProperties;
- (NSDictionary *)paragraphProperties;
- (int)justification;
- (int)numberFormat;
- (long)startNumber;
- (void)setRestartNumbering:(char)arg0;
- (void)setLegal:(char)arg0;
- (void)setLegacySpace:(long)arg0;
- (void)setLegacyIndent:(long)arg0;
- (char)restartNumbering;
- (char)legal;
- (int)suffix;
- (void)setStartNumber:(long)arg0;
- (void)setJustification:(int)arg0;
- (void)setNumberFormat:(int)arg0;
- (void)setSuffix:(int)arg0;
- (char)startNumberOverridden;
- (char)numberFormatOverridden;
- (char)imageBullet;
- (char)imageBulletOverridden;
- (char)restartNumberingOverridden;
- (long)restartLevel;
- (void)setRestartLevel:(long)arg0;
- (char)restartLevelOverridden;
- (char)legalOverridden;
- (char)suffixOverridden;
- (char)textOverridden;
- (char)legacy;
- (long)legacySpace;
- (long)legacyIndent;
- (char)justificationOverridden;

@end
