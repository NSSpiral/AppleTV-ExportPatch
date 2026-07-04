/* Runtime dump - NSTextBlockLayoutHelper
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextBlockLayoutHelper : NSObject
{
    NSTextTableBlock * _block;
    struct _NSRange _charRange;
    struct _NSRange _glyphRange;
    struct CGRect _layoutRect;
    struct CGRect _boundsRect;
    float _lMargin;
    float _lBorder;
    float _lPadding;
    float _tMargin;
    float _tBorder;
    float _tPadding;
    float _width;
    float _height;
    float _rPadding;
    float _rBorder;
    float _rMargin;
    float _bPadding;
    float _bBorder;
    float _bMargin;
}

@property (readonly) NSTextTableBlock * block;

- (void)dealloc;
- (NSString *)description;
- (NSTextTableBlock *)block;
- (NSTextBlockLayoutHelper *)initWithTextBlock:(id /* block */)arg0 charRange:(struct _NSRange)arg1 glyphRange:(struct _NSRange)arg2 layoutRect:(struct CGRect)arg3 boundsRect:(struct CGSize)arg4 containerWidth:(float)arg5 allowMargins:(struct CGRect)arg6 collapseBorders:(struct CGSize)arg7 allowPadding:(id)arg8;
- (NSTextBlockLayoutHelper *)initWithTextBlock:(id /* block */)arg0 charRange:(struct _NSRange)arg1 text:(NSString *)arg2 layoutManager:(_UIFieldEditorLayoutManager *)arg3 containerWidth:(float)arg4 collapseBorders:(char)arg5;
- (NSTextBlockLayoutHelper *)initWithTextBlock:(id /* block */)arg0 charIndex:(unsigned int)arg1 text:(NSString *)arg2 layoutManager:(_UIFieldEditorLayoutManager *)arg3 containerWidth:(float)arg4 collapseBorders:(char)arg5;
- (NSTextBlockLayoutHelper *)initWithTextTable:(NSTextTable *)arg0 charIndex:(unsigned int)arg1 text:(NSString *)arg2 layoutManager:(_UIFieldEditorLayoutManager *)arg3 containerWidth:(float)arg4 collapseBorders:(char)arg5;

@end
