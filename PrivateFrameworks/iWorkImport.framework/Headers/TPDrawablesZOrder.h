/* Runtime dump - TPDrawablesZOrder
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPDrawablesZOrder : TSPObject
{
    NSMutableArray * _drawables;
}

@property (readonly, nonatomic) unsigned int drawableCount;

- (TPDrawablesZOrder *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)removeDrawable:(GQHPagesFloatingDrawable *)arg0;
- (void)moveDrawables:(id)arg0 toIndexes:(NSArray *)arg1;
- (unsigned int)zOrderOfDrawable:(id)arg0;
- (unsigned int)insertDrawable:(id)arg0 atZOrder:(unsigned int)arg1;
- (void)moveDrawable:(id)arg0 toZOrder:(unsigned int)arg1;
- (id)orderedDrawables:(id)arg0;
- (void)removeDrawableAtZOrder:(unsigned int)arg0;
- (void)moveDrawableAtZOrder:(unsigned int)arg0 toZOrder:(unsigned int)arg1;
- (id)drawableAtZOrder:(unsigned int)arg0;
- (void)moveDrawables:(id)arg0 toZOrder:(unsigned int)arg1;
- (void)swapDrawableAtZOrder:(unsigned int)arg0 withDrawableAtZOrder:(unsigned int)arg1;
- (void)dealloc;
- (TPDrawablesZOrder *)initWithContext:(TSPObjectContext *)arg0;
- (unsigned int)drawableCount;
- (unsigned int)addDrawable:(GQHPagesFloatingDrawable *)arg0;

@end
