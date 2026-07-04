/* Runtime dump - TPFloatingDrawables
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPFloatingDrawables : TSPObject <TSKDocumentObject>
{
    NSMutableDictionary * _drawablesByPageIndex;
    TSUPointerKeyDictionary * _pageIndexByDrawable;
    TPDocumentRoot * _documentRoot;
}

@property (readonly, nonatomic) TPDocumentRoot * documentRoot;

- (TPFloatingDrawables *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)willBeAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)wasAddedToDocumentRoot:(NSObject *)arg0 dolcContext:(NSObject *)arg1;
- (void)willBeRemovedFromDocumentRoot:(NSObject *)arg0;
- (void)wasRemovedFromDocumentRoot:(NSObject *)arg0;
- (void)removeDrawable:(GQHPagesFloatingDrawable *)arg0;
- (void)p_addDrawable:(id)arg0 toPageIndex:(unsigned int)arg1;
- (unsigned int)countOfAllDrawables;
- (NSObject *)drawablesOnPageIndex:(unsigned int)arg0;
- (void)addDrawable:(GQHPagesFloatingDrawable *)arg0 toPageIndex:(unsigned int)arg1 insertContext:(NSObject *)arg2 suppressDOLC:(char)arg3;
- (void)addDrawable:(GQHPagesFloatingDrawable *)arg0 toPageIndex:(unsigned int)arg1 insertContext:(NSObject *)arg2;
- (void)p_removeDrawable:(id)arg0;
- (void)removeDrawable:(GQHPagesFloatingDrawable *)arg0 suppressDOLC:(char)arg1;
- (unsigned int)pageIndexForDrawable:(id)arg0;
- (char)hasAnyDrawables;
- (id)allDrawables;
- (NSObject *)orderedDrawablesOnPageIndex:(unsigned int)arg0;
- (unsigned int)maximumPageIndex;
- (void)addDrawables:(TPFloatingDrawables *)arg0 toPageIndex:(unsigned int)arg1 insertContext:(NSObject *)arg2;
- (void)removeDrawables:(TPFloatingDrawables *)arg0;
- (void)moveDrawable:(id)arg0 toPageIndex:(unsigned int)arg1;
- (void)dealloc;
- (NSString *)description;
- (TPFloatingDrawables *)initWithContext:(TSPObjectContext *)arg0;
- (NSEnumerator *)drawableEnumerator;
- (TPDocumentRoot *)documentRoot;

@end
