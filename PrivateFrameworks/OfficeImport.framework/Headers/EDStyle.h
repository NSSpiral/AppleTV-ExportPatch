/* Runtime dump - EDStyle
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDStyle : NSObject <NSCopying, EDImmutableObject>
{
    EDResources * mResources;
    unsigned int mParentIndex;
    unsigned int mContentFormatId;
    unsigned int mFontIndex;
    unsigned int mFillIndex;
    unsigned int mAlignmentInfoIndex;
    unsigned int mBordersIndex;
    EDProtection * mProtection;
    unsigned int mIndex;
    BOOL mContentFormatOverridden;
    BOOL mFontOverridden;
    BOOL mFillOverridden;
    BOOL mAlignmentInfoOverridden;
    BOOL mBordersOverridden;
    BOOL mProtectionOverridden;
    BOOL mDoNotModify;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSArray *)styleWithResources:(NSArray *)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (EDStyle *)copyWithZone:(struct _NSZone *)arg0;
- (EDFill *)fill;
- (void)setFont:(UIFont *)arg0;
- (UIFont *)font;
- (unsigned int)index;
- (void)setIndex:(unsigned int)arg0;
- (BOOL)isFontOverridden;
- (BOOL)isFillOverridden;
- (void)setFill:(TSDFill *)arg0;
- (BOOL)isAlignmentInfoOverridden;
- (EDAlignmentInfo *)alignmentInfo;
- (BOOL)isContentFormatOverridden;
- (unsigned int)contentFormatId;
- (EDContentFormat *)contentFormat;
- (BOOL)isBordersOverridden;
- (EDBorders *)borders;
- (unsigned int)fillIndex;
- (void)setContentFormatId:(unsigned int)arg0;
- (void)setFontIndex:(unsigned int)arg0;
- (EDStyle *)initWithResources:(NSArray *)arg0;
- (unsigned int)fontIndex;
- (void)setContentFormat:(EDContentFormat *)arg0;
- (void)setParentIndex:(unsigned int)arg0;
- (void)setAlignmentInfo:(EDAlignmentInfo *)arg0;
- (void)setBorders:(EDBorders *)arg0;
- (void)setProtection:(EDProtection *)arg0;
- (void)setFontOverridden:(BOOL)arg0;
- (void)setAlignmentInfoOverridden:(BOOL)arg0;
- (void)setBordersOverridden:(BOOL)arg0;
- (void)setFillOverridden:(BOOL)arg0;
- (void)setProtectionOverridden:(BOOL)arg0;
- (void)setContentFormatOverridden:(BOOL)arg0;
- (EDProtection *)protection;
- (void)setDoNotModify:(BOOL)arg0;
- (char)isEquivalentToStyle:(NSObject *)arg0;
- (char)isEqualToStyle:(NSObject *)arg0;
- (BOOL)isProtectionOverridden;
- (unsigned int)parentIndex;
- (unsigned int)bordersIndex;
- (unsigned int)alignmentInfoIndex;
- (void)setAlignmentInfoIndex:(unsigned int)arg0;
- (void)setBordersIndex:(unsigned int)arg0;
- (void)setFillIndex:(unsigned int)arg0;
- (GLKShaderBlockNode *)parent;
- (void)setParent:(NSObject *)arg0;

@end
