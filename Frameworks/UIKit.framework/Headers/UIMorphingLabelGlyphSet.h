/* Runtime dump - UIMorphingLabelGlyphSet
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMorphingLabelGlyphSet : NSObject
{
    UIMorphingLabel * _label;
    NSAttributedString * _attributedString;
    struct __CTLine * _line;
    NSMutableArray * _glyphViews;
    unsigned int _glyphCount;
    unsigned short * _glyphs;
    struct CGRect * _glyphFrames;
    struct CGPoint * _glyphPositions;
    struct CGPoint _lineOrigin;
    float _lineWidth;
}

@property (readonly, nonatomic) unsigned int glyphCount;
@property (readonly, nonatomic) unsigned short * glyphs;
@property (readonly, nonatomic) struct CGRect * glyphFrames;
@property (readonly, nonatomic) struct CGPoint * glyphPositions;
@property (readonly, nonatomic) NSArray * glyphViews;
@property (readonly, nonatomic) NSAttributedString * attributedString;
@property (readonly, nonatomic) struct CGPoint lineOrigin;
@property (readonly, nonatomic) float lineWidth;

- (void)dealloc;
- (float)lineWidth;
- (NSAttributedString *)attributedString;
- (void)buildGlyphViews;
- (UIMorphingLabelGlyphSet *)initWithLabel:(UIMorphingLabel *)arg0 attributedString:(NSAttributedString *)arg1;
- (void)removeGlyphs;
- (void)placeGlyphs;
- (struct CGRect)boundingRectForGlyphsInRange:(NSObject *)arg0;
- (unsigned int)glyphCount;
- (unsigned short *)glyphs;
- (struct CGRect *)glyphFrames;
- (struct CGPoint *)glyphPositions;
- (NSArray *)glyphViews;
- (struct CGPoint)lineOrigin;

@end
