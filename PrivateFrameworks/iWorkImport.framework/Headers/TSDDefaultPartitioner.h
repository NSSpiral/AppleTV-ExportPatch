/* Runtime dump - TSDDefaultPartitioner
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDDefaultPartitioner : NSObject <TSDPartitioner, TSDCanvasDelegate>
{
    NSObject<TSDInfo> * mInfo;
    TSDCanvas * mCanvas;
    TSDLayout * mLayout;
    TSUPointerKeyDictionary * mMainRepsByCanvas;
    TSUPointerKeyDictionary * mCachedImagesByCanvas;
    TSUPointerKeyDictionary * mPartialRepsByCanvas;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)p_generateLayouts;
- (void)p_teardownLayouts;
- (unsigned int)p_edgesForHintBounds:(struct CGRect)arg0;
- (NSObject *)p_nextHintForSize:(struct CGSize)arg0 previousHint:(NSObject *)arg1 horizontally:(char)arg2;
- (NSObject *)p_firstHintForSize:(struct CGSize)arg0;
- (NSObject *)nextHintForSize:(struct CGSize)arg0 parentLayout:(TSWPTextParentLayout *)arg1 previousHint:(NSObject *)arg2 horizontally:(char)arg3 outFinished:(char *)arg4;
- (id)layoutForHint:(TSTLayoutHint *)arg0 parentLayout:(TSWPTextParentLayout *)arg1;
- (NSObject *)i_layout;
- (NSObject *)nextLayoutForSize:(struct CGSize)arg0 parentLayout:(TSWPTextParentLayout *)arg1 previousHint:(NSObject *)arg2 horizontally:(char)arg3 outFinished:(char *)arg4;
- (char)didHint:(id)arg0 syncWithNextHint:(id)arg1 horizontally:(char)arg2 delta:(int)arg3;
- (NSObject *)hintForLayout:(NSObject *)arg0;
- (id)i_repForCanvas:(id)arg0;
- (struct CGImage *)i_cachedImageForCanvas:(id)arg0;
- (void)i_setCachedImage:(struct CGImage *)arg0 forCanvas:(GGLImageCanvas *)arg1;
- (void)i_removeCachedImageForCanvas:(id)arg0;
- (void)i_registerPartialRep:(NSObject *)arg0;
- (void)i_unregisterPartialRep:(NSObject *)arg0;
- (TSDDefaultPartitioner *)initWithInfo:(NSDictionary *)arg0;
- (void)dealloc;
- (NSString *)documentRoot;

@end
