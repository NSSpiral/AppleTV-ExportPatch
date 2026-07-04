/* Runtime dump - WebSelectionRect
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebSelectionRect : NSObject <NSCopying>
{
    struct CGRect m_rect;
    int m_writingDirection;
    char m_isLineBreak;
    char m_isFirstOnLine;
    char m_isLastOnLine;
    char m_containsStart;
    char m_containsEnd;
    char m_isInFixedPosition;
    char m_isHorizontal;
}

@property (nonatomic) struct CGRect rect;
@property (nonatomic) int writingDirection;
@property (nonatomic) char isLineBreak;
@property (nonatomic) char isFirstOnLine;
@property (nonatomic) char isLastOnLine;
@property (nonatomic) char containsStart;
@property (nonatomic) char containsEnd;
@property (nonatomic) char isInFixedPosition;
@property (nonatomic) char isHorizontal;

+ (struct CGRect)startEdge:(struct CGRect)arg0;
+ (struct CGRect)endEdge:(struct CGRect)arg0;
+ (struct CGRect)selectionRect;

- (WebSelectionRect *)init;
- (NSString *)description;
- (WebSelectionRect *)copyWithZone:(struct _NSZone *)arg0;
- (struct CGRect)rect;
- (void)setRect:(struct CGRect)arg0;
- (void)setIsHorizontal:(char)arg0;
- (char)isHorizontal;
- (char)isInFixedPosition;
- (char)containsStart;
- (int)writingDirection;
- (char)containsEnd;
- (void)setContainsEnd:(char)arg0;
- (void)setContainsStart:(char)arg0;
- (void)setWritingDirection:(int)arg0;
- (void)setIsLineBreak:(char)arg0;
- (void)setIsFirstOnLine:(char)arg0;
- (void)setIsLastOnLine:(char)arg0;
- (void)setIsInFixedPosition:(char)arg0;
- (char)isLineBreak;
- (char)isFirstOnLine;
- (char)isLastOnLine;

@end
