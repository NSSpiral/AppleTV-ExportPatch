/* Runtime dump - TSWPShapeRepMagicMoveTextChunk
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPShapeRepMagicMoveTextChunk : NSObject
{
    char _hasListLabel;
    char _isVisible;
    TSWPShapeRep * _rep;
    NSString * _stringValue;
    NSMutableIndexSet * _unhandledIndexSet;
    int _stageIndex;
    float _opacityFromRenderer;
    struct _NSRange _range;
}

@property (nonatomic) TSWPShapeRep * rep;
@property (nonatomic) struct _NSRange range;
@property (copy, nonatomic) NSString * stringValue;
@property (nonatomic) char hasListLabel;
@property (retain, nonatomic) NSMutableIndexSet * unhandledIndexSet;
@property (nonatomic) int stageIndex;
@property (nonatomic) char isVisible;
@property (nonatomic) float opacityFromRenderer;

- (void)setRep:(TSWPShapeRep *)arg0;
- (TSWPShapeRep *)rep;
- (int)stageIndex;
- (char)hasListLabel;
- (void)setHasListLabel:(char)arg0;
- (NSMutableIndexSet *)unhandledIndexSet;
- (void)setUnhandledIndexSet:(NSMutableIndexSet *)arg0;
- (void)setStageIndex:(int)arg0;
- (void)setIsVisible:(char)arg0;
- (float)opacityFromRenderer;
- (void)setOpacityFromRenderer:(float)arg0;
- (void)dealloc;
- (TSWPShapeRepMagicMoveTextChunk *)init;
- (NSString *)description;
- (char)isVisible;
- (struct _NSRange)range;
- (NSString *)stringValue;
- (void)setStringValue:(NSString *)arg0;
- (void).cxx_construct;
- (void)setRange:(struct _NSRange)arg0;

@end
