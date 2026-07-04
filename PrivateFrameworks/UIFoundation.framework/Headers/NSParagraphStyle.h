/* Runtime dump - NSParagraphStyle
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSParagraphStyle : NSObject <NSCopying, NSMutableCopying, NSCoding>
{
    float _lineSpacing;
    float _paragraphSpacing;
    float _headIndent;
    float _tailIndent;
    float _firstLineHeadIndent;
    float _minimumLineHeight;
    float _maximumLineHeight;
    NSArray * _tabStops;
    struct ? _flags;
    float _defaultTabInterval;
    id _extraData;
}

@property (readonly) float lineSpacing;
@property (readonly) float paragraphSpacing;
@property (readonly) int alignment;
@property (readonly) float headIndent;
@property (readonly) float tailIndent;
@property (readonly) float firstLineHeadIndent;
@property (readonly) float minimumLineHeight;
@property (readonly) float maximumLineHeight;
@property (readonly) int lineBreakMode;
@property (readonly) int baseWritingDirection;
@property (readonly) float lineHeightMultiple;
@property (readonly) float paragraphSpacingBefore;
@property (readonly) float hyphenationFactor;
@property (readonly, copy, nonatomic) NSArray * tabStops;
@property (readonly, nonatomic) float defaultTabInterval;

+ (int)defaultWritingDirectionForLanguage:(NSString *)arg0;
+ (void)initialize;
+ (NSParagraphStyle *)defaultParagraphStyle;
+ (int)_defaultWritingDirection;

- (int)_ui_resolvedTextAlignment;
- (NSParagraphStyle *)retain;
- (void)release;
- (void)dealloc;
- (NSParagraphStyle *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSParagraphStyle *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)retainCount;
- (unsigned int)hash;
- (NSString *)description;
- (NSParagraphStyle *)copyWithZone:(struct _NSZone *)arg0;
- (char)_tryRetain;
- (char)_isDeallocating;
- (int)alignment;
- (int)lineBreakMode;
- (float)minimumLineHeight;
- (float)maximumLineHeight;
- (float)lineSpacing;
- (NSParagraphStyle *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (int)baseWritingDirection;
- (id)textBlocks;
- (float)firstLineHeadIndent;
- (float)hyphenationFactor;
- (float)tighteningFactorForTruncation;
- (float)lineHeightMultiple;
- (void)_allocExtraData;
- (float)paragraphSpacingBefore;
- (int)headerLevel;
- (float)paragraphSpacing;
- (float)tailIndent;
- (float)defaultTabInterval;
- (NSObject *)_initWithParagraphStyle:(TSWPParagraphStyle *)arg0;
- (void)_deallocExtraData;
- (char)_isSuitableForFastStringDrawingWithAlignment:(int *)arg0 lineBreakMode:(int *)arg1 tighteningFactorForTruncation:(float *)arg2;
- (float)headIndent;
- (id)textLists;
- (NSArray *)tabStops;

@end
