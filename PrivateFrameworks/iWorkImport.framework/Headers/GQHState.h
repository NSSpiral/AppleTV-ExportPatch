/* Runtime dump - GQHState
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHState : NSObject
{
    GQHXML * mHtmlDoc;
    struct CGSize mScale;
    struct __CFString * mStyleData;
    GQHTableState * mTableState;
    GQSDocument * mProcessorState;
    struct __CFDictionary * mStyleIndexes;
    struct __CFDictionary * mStyleNameMap;
    struct __CFArray * mImplicitStyles;
    int mColoredBackgroundLayerCount;
    int mMultiColumnedDepth;
    struct __CFArray * mGraphicPropertiesStack;
    int mParagraphCount;
    int mParagraphIndex;
    int mCachedCellStyleIndex;
    struct __CFDictionary * mCachedTableStyles;
    int mCachedTextStyleIndex;
    struct __CFDictionary * mCachedTextStyles;
    int mInlineStyleIndex;
    struct __CFDictionary * mInlineStyles;
    struct __CFDictionary * mColorStrings;
    <GQHContext> * mShapeContext;
    int mOutlineLevel;
    int mOutlineStyleType;
    int mShapeIDCounter;
    unsigned int mTextScale;
}

- (NSObject *)tableState;
- (char)useOutline;
- (id)htmlDoc;
- (void)setParagraphCount:(int)arg0;
- (void)setParagraphIndex:(int)arg0;
- (NSObject *)processorState;
- (char)drawablesNeedCssZOrdering;
- (struct __CFString *)cssZOrderClassForDrawable:(id)arg0;
- (char)shouldMapLinkWithUrl:(struct __CFString *)arg0;
- (void)addedDrawableWithBounds:(struct CGRect)arg0;
- (char)allowInlineWrap;
- (struct __CFString *)getColorString:(NSString *)arg0;
- (void)setColoredBackground:(char)arg0;
- (struct __CFString *)createUniqueShapeId:(char *)arg0;
- (NSString *)shapeContext;
- (void)enterGraphicObject;
- (void)leaveGraphicObject;
- (char)finishMainHtml;
- (GQHState *)initWithState:(NSObject *)arg0 documentSize:(struct CGSize)arg1;
- (struct __CFString *)cssZOrderClassForDrawableUid:(char *)arg0;
- (void)addStyle:(struct __CFString *)arg0 className:(struct __CFString *)arg1 srcStyle:(NSObject *)arg2;
- (struct __CFString *)className:(NSString *)arg0;
- (struct __CFString *)makeInlineStyle:(struct __CFString *)arg0 inDocument:(char)arg1;
- (struct __CFString *)makeInlineStyle:(struct __CFString *)arg0;
- (void)addCachedStyle:(struct __CFString *)arg0;
- (void)setOutlineStyleType:(int)arg0;
- (char)needAbsolutelyPositionedTables;
- (void)pushImplicitStyle:(NSObject *)arg0;
- (NSObject *)implicitStyle;
- (void)popImplicitStyle;
- (int)outlineStyleType;
- (char)coloredBackground;
- (struct __CFString *)cachedClassStringForTextStyle:(NSObject *)arg0 implicitStyle:(NSObject *)arg1 isColoredBackground:(char)arg2 outlineLevel:(int)arg3 outlineType:(int)arg4 isSpan:(char)arg5;
- (int)paragraphIndex;
- (struct __CFString *)addCachedClassStringForTextStyle:(NSObject *)arg0 implicitStyle:(NSObject *)arg1 isColoredBackground:(char)arg2 outlineLevel:(int)arg3 outlineType:(int)arg4 isSpan:(char)arg5 baseClassString:(struct __CFString *)arg6 cssCachedStyle:(NSObject *)arg7;
- (void)invalidateTextScale;
- (GQHState *)initWithState:(NSObject *)arg0 needIndexFile:(char)arg1 documentSize:(struct CGSize)arg2;
- (int)indexForStyle:(char *)arg0;
- (void)setMultiColumned:(char)arg0;
- (struct __CFString *)createStyleName:(NSString *)arg0 type:(char *)arg1;
- (char)multiColumned;
- (struct __CFString *)cachedClassStringForCellStyle:(NSObject *)arg0 fillStyle:(NSObject *)arg1 cellClass:(Class)arg2 vectorStyles:(id *)arg3 groupLevel:(unsigned short)arg4 hasFormula:(char)arg5;
- (struct __CFString *)addCacheForCellStyle:(NSObject *)arg0 fillStyle:(NSObject *)arg1 cellClass:(Class)arg2 vectorStyles:(id *)arg3 groupLevel:(unsigned short)arg4 hasFormula:(char)arg5 baseClassString:(struct __CFString *)arg6 cssCachedStyle:(NSObject *)arg7;
- (void)dealloc;
- (struct CGSize)scale;
- (void)setScale:(struct CGSize)arg0;
- (void).cxx_construct;
- (GQHState *)initWithState:(NSObject *)arg0;
- (int)paragraphCount;
- (void)setOutlineLevel:(int)arg0;
- (int)outlineLevel;
- (void)setTextScale:(unsigned int)arg0;
- (unsigned int)textScale;

@end
