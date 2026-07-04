/* Runtime dump - OADParagraphProperties
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADParagraphProperties : OADCharacterProperties
{
    OADBulletSize * mBulletSize;
    OADBulletColor * mBulletColor;
    OADBulletFont * mBulletFont;
    OADBulletProperties * mBulletProperties;
    OADTextSpacing * mLineSpacing;
    OADTextSpacing * mBeforeSpacing;
    OADTextSpacing * mAfterSpacing;
    NSMutableArray * mTabStops;
    double mLeftMargin;
    double mRightMargin;
    double mIndent;
    double mDefaultTab;
    int mLevel;
    int mBulletCharSet;
    unsigned char mAlign;
    unsigned char mWrap;
    unsigned char mFontAlign;
    id mIsLatinLineBreak;
    id mIsHangingPunctuation;
    id mHasTabStops;
    id mHasLeftMargin;
    id mHasRightMargin;
    id mHasLevel;
    id mHasIndent;
    id mHasAlign;
    id mHasDefaultTab;
    id mHasWrap;
    id mHasFontAlign;
    id mHasIsLatinLineBreak;
    id mHasIsHangingPunctuation;
    id mHasBulletCharSet;
}

+ (OADParagraphProperties *)defaultProperties;

- (void)dealloc;
- (OADParagraphProperties *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void)setLevel:(int)arg0;
- (int)level;
- (void)setRightMargin:(double)arg0;
- (TSWPSpecLineSpacing *)lineSpacing;
- (void)setLineSpacing:(TSWPSpecLineSpacing *)arg0;
- (double)rightMargin;
- (char)hasLevel;
- (double)leftMargin;
- (void)setLeftMargin:(double)arg0;
- (void)setIndent:(double)arg0;
- (void)setBulletProperties:(NSDictionary *)arg0;
- (double)indent;
- (NSDictionary *)bulletProperties;
- (NSObject *)bulletSize;
- (double)nonOveridenLeftMargin;
- (char)hasBulletSize;
- (char)hasBulletFont;
- (UIFont *)bulletFont;
- (char)hasBulletColor;
- (UIColor *)bulletColor;
- (char)hasBulletProperties;
- (char)hasAlign;
- (char)hasLeftMargin;
- (char)hasIndent;
- (char)hasBeforeSpacing;
- (id)beforeSpacing;
- (char)hasAfterSpacing;
- (id)afterSpacing;
- (void)setDefaultTab:(double)arg0;
- (void)setIsLatinLineBreak:(char)arg0;
- (void)setIsHangingPunctuation:(char)arg0;
- (void)setBeforeSpacing:(id)arg0;
- (void)setAfterSpacing:(id)arg0;
- (void)setBulletColor:(UIColor *)arg0;
- (void)setBulletSize:(NSObject *)arg0;
- (void)setBulletFont:(UIFont *)arg0;
- (void)setBulletCharSet:(int)arg0;
- (id)addTabStop;
- (void)setFontAlign:(int)arg0;
- (char)hasTabStops;
- (char)hasRightMargin;
- (char)hasDefaultTab;
- (char)hasWrap;
- (char)hasFontAlign;
- (char)hasIsLatinLineBreak;
- (char)hasIsHangingPunctuation;
- (char)hasBulletCharSet;
- (void)clearTabStops;
- (unsigned int)tabStopCount;
- (NSObject *)tabStopAtIndex:(unsigned int)arg0;
- (double)defaultTab;
- (int)fontAlign;
- (char)isLatinLineBreak;
- (char)isHangingPunctuation;
- (int)bulletCharSet;
- (void)overrideWithProperties:(NSDictionary *)arg0;
- (void)removeUnnecessaryOverrides;
- (void)overrideWithCharacterProperties:(NSDictionary *)arg0;
- (OADParagraphProperties *)initWithDefaults;
- (char)hasLineSpacing;
- (int)align;
- (void)setAlign:(int)arg0;
- (int)wrap;
- (void)setWrap:(int)arg0;
- (NSArray *)tabStops;

@end
