/* Runtime dump - GQHLassoState
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHLassoState : GQHState
{
    GQHXML * mNavigation;
    int mSheetCount;
    int mTableCount;
    struct __CFString * mCssUri;
    struct __CFString * mCurrentSheetFilename;
    struct __CFString * mCurrentSheetUri;
    struct CGPoint mMaxCanvasPoint;
    unsigned int mCurrentDrawableZOrder;
    unsigned int mZOrderedDrawableCount;
    struct __CFDictionary * mDrawableUidToCssZOrderClassMap;
    struct __CFArray * mSheetCssUriList;
    struct __CFString * mSheetCssFilename;
    struct __CFString * mSheetOneCss;
    struct __CFString * mSheetOneLastCSS;
    char * mFirstWorkspaceName;
    BOOL mIsProgressiveMode;
    GQHXML * mIndex;
    struct __CFArray * mSheetFilenameList;
    struct __CFArray * mSheetUriList;
    struct __CFArray * mSheetCssLastUriList;
    struct __CFString * mSheetCssLastFilename;
}

- (char)drawablesNeedCssZOrdering;
- (void)addedDrawableWithBounds:(struct CGRect)arg0;
- (char)finishMainHtml;
- (char)inProgressiveMode;
- (char)writeIndexPageWithIFrame:(int)arg0;
- (void)writeIndexPageWithDocumentSize:(struct CGSize)arg0;
- (void)beginNewSheet:(char *)arg0 processorState:(NSObject *)arg1;
- (int)endSheet;
- (struct __CFString *)cssZOrderClassForDrawableUid:(char *)arg0;
- (unsigned int)currentDrawableZOrder;
- (void)addStyle:(struct __CFString *)arg0 className:(struct __CFString *)arg1 srcStyle:(NSObject *)arg2;
- (void)writeNavigationPage:(id)arg0;
- (void)cacheAnchorForIndexPage:(char *)arg0;
- (void)writeAnchorInNavigationPage:(char *)arg0;
- (struct __CFString *)writeTabsJS;
- (struct CGPoint)maxCanvasPoint;
- (struct __CFString *)makeInlineStyle:(struct __CFString *)arg0;
- (void)addCachedStyle:(struct __CFString *)arg0;
- (void)dealloc;
- (void).cxx_construct;
- (GQHLassoState *)initWithState:(NSObject *)arg0;

@end
