/* Runtime dump - NSMutableParagraphStyle
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSMutableParagraphStyle : NSParagraphStyle

@property float lineSpacing;
@property float paragraphSpacing;
@property int alignment;
@property float firstLineHeadIndent;
@property float headIndent;
@property float tailIndent;
@property int lineBreakMode;
@property float minimumLineHeight;
@property float maximumLineHeight;
@property int baseWritingDirection;
@property float lineHeightMultiple;
@property float paragraphSpacingBefore;
@property float hyphenationFactor;
@property (copy, nonatomic) NSArray * tabStops;
@property (nonatomic) float defaultTabInterval;

- (void)setAlignment:(int)arg0;
- (NSMutableParagraphStyle *)copyWithZone:(struct _NSZone *)arg0;
- (void)setLineBreakMode:(int)arg0;
- (void)setMinimumLineHeight:(float)arg0;
- (void)setMaximumLineHeight:(float)arg0;
- (void)setLineSpacing:(float)arg0;
- (void)setBaseWritingDirection:(int)arg0;
- (void)setLineHeightMultiple:(float)arg0;
- (void)setParagraphSpacingBefore:(float)arg0;
- (void)setTighteningFactorForTruncation:(float)arg0;
- (void)_mutateTabStops;
- (void)setParagraphStyle:(TSWPParagraphStyle *)arg0;
- (void)setHyphenationFactor:(float)arg0;
- (void)setHeaderLevel:(int)arg0;
- (void)setHeadIndent:(float)arg0;
- (void)setFirstLineHeadIndent:(float)arg0;
- (void)setTailIndent:(float)arg0;
- (void)setParagraphSpacing:(float)arg0;
- (void)setTextLists:(id)arg0;
- (void)setTextBlocks:(id)arg0;
- (void)removeTabStop:(OADTabStop *)arg0;
- (void)addTabStop:(OADTabStop *)arg0;
- (void)setDefaultTabInterval:(float)arg0;
- (void)setTabStops:(NSArray *)arg0;

@end
