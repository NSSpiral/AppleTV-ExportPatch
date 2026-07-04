/* Runtime dump - EDFont
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDFont : NSObject <NSCopying, EDImmutableObject>
{
    EDResources * mResources;
    NSString * mName;
    EDColorReference * mColorReference;
    int mUnderline;
    int mScript;
    double mHeightInTwips;
    int mCharSet;
    int mFamily;
    unsigned int mWeight;
    BOOL mBold;
    BOOL mItalic;
    BOOL mShadow;
    BOOL mStrike;
    BOOL mOutline;
    BOOL mUnderlineOverridden;
    BOOL mStrikeOverridden;
    BOOL mBoldOverridden;
    BOOL mWeightOverridden;
    BOOL mItalicOverridden;
    BOOL mHeightOverridden;
    BOOL mDoNotModify;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSArray *)fontWithResources:(NSArray *)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (EDFont *)copyWithZone:(struct _NSZone *)arg0;
- (double)height;
- (UIColor *)color;
- (void)setColor:(UIColor *)arg0;
- (BOOL)isBold;
- (int)script;
- (void)setHeight:(double)arg0;
- (void)setScript:(int)arg0;
- (void)setShadow:(BOOL)arg0;
- (unsigned int)weight;
- (void)setWeight:(unsigned int)arg0;
- (BOOL)isBoldOverridden;
- (BOOL)isItalicOverridden;
- (BOOL)isUnderlineOverridden;
- (int)underline;
- (BOOL)isHeightOverridden;
- (BOOL)isItalic;
- (BOOL)isStrikeOverridden;
- (BOOL)isStrike;
- (int)family;
- (void)setFamily:(int)arg0;
- (void)setBold:(BOOL)arg0;
- (void)setItalic:(BOOL)arg0;
- (void)setUnderline:(int)arg0;
- (EDFont *)initWithResources:(NSArray *)arg0;
- (void)setStrike:(BOOL)arg0;
- (BOOL)isOutline;
- (BOOL)isShadow;
- (void)setCharSet:(int)arg0;
- (NSObject *)colorReference;
- (char)isEqualToFont:(UIFont *)arg0;
- (int)charSet;
- (BOOL)isWeightOverridden;
- (void)setDoNotModify:(BOOL)arg0;
- (void)setColorReference:(NSObject *)arg0;
- (void)setOutline:(BOOL)arg0;

@end
