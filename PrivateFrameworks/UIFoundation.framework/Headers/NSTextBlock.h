/* Runtime dump - NSTextBlock
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextBlock : NSObject <NSCoding, NSCopying>
{
    void * _propVals;
    unsigned int _propMask;
    unsigned int _typeMask;
    id _primParamVal;
    id _otherParamVals;
    void * _blockPrimary;
    void * _blockSecondary;
}

+ (void)initialize;

- (void)dealloc;
- (void)setBackgroundColor:(UIColor *)arg0;
- (NSTextBlock *)initWithCoder:(NSCoder *)arg0;
- (UIColor *)backgroundColor;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSTextBlock *)init;
- (NSTextBlock *)copyWithZone:(struct _NSZone *)arg0;
- (void)setBorderColor:(UIColor *)arg0;
- (float)contentWidth;
- (unsigned int)verticalAlignment;
- (void)drawBackgroundWithFrame:(struct CGRect)arg0 inView:(struct CGSize)arg1 characterRange:(struct _NSRange)arg2 layoutManager:(_UIFieldEditorLayoutManager *)arg3;
- (float)widthForLayer:(int)arg0 edge:(unsigned int)arg1;
- (float)valueForDimension:(unsigned int)arg0;
- (unsigned int)widthValueTypeForLayer:(int)arg0 edge:(unsigned int)arg1;
- (unsigned int)valueTypeForDimension:(unsigned int)arg0;
- (void)_destroyFloatStorage;
- (void)_createFloatStorage;
- (void)_takeValuesFromTextBlock:(id /* block */)arg0;
- (void)_setValue:(float)arg0 type:(unsigned int)arg1 forParameter:(unsigned int)arg2;
- (float)_valueForParameter:(unsigned int)arg0;
- (unsigned int)_valueTypeForParameter:(unsigned int)arg0;
- (id)borderColorForEdge:(unsigned int)arg0;
- (void)setContentWidth:(float)arg0 type:(unsigned int)arg1;
- (unsigned int)contentWidthValueType;
- (void)setWidth:(float)arg0 type:(unsigned int)arg1 forLayer:(int)arg2;
- (struct CGRect)rectForLayoutAtPoint:(NSObject *)arg0 inRect:(SEL)arg1 textContainer:(struct CGPoint)arg2 characterRange:(struct CGRect)arg3;
- (struct CGRect)boundsRectForContentRect:(NSObject *)arg0 inRect:(SEL)arg1 textContainer:(struct CGRect)arg2 characterRange:(struct CGSize)arg3;
- (NSString *)_attributeDescription;
- (void)setValue:(float)arg0 type:(unsigned int)arg1 forDimension:(unsigned int)arg2;
- (void)setWidth:(float)arg0 type:(unsigned int)arg1 forLayer:(int)arg2 edge:(unsigned int)arg3;
- (void)setBorderColor:(UIColor *)arg0 forEdge:(unsigned int)arg1;
- (void)setVerticalAlignment:(unsigned int)arg0;

@end
