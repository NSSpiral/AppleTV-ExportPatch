/* Runtime dump - TSCHText
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHText : NSObject
{
    TSUCache * mTSWPTextCache;
    TSUCache * mTSWPColumnCache;
    TSUCache * mNumberWidthCache;
    TSUCache * mDigitWidthFonts;
}

+ (TSCHText *)sharedText;
+ (TSCHText *)allocWithZone:(struct _NSZone *)arg0;
+ (TSCHText *)_singletonAlloc;

- (void)drawText:(NSString *)arg0 paragraphStyle:(TSWPParagraphStyle *)arg1 intoContext:(struct CGContext *)arg2 atPosition:(struct CGPoint)arg3 viewScale:(float)arg4;
- (struct CGSize)measureText:(NSString *)arg0 paragraphStyle:(TSWPParagraphStyle *)arg1;
- (struct CGSize)measureText:(NSString *)arg0 paragraphStyle:(TSWPParagraphStyle *)arg1 outErasableFrame:(struct CGRect *)arg2;
- (void)drawText:(NSString *)arg0 paragraphStyle:(TSWPParagraphStyle *)arg1 intoContext:(struct CGContext *)arg2 wrapWidth:(float)arg3 atPosition:(struct CGPoint)arg4 range:(struct _NSRange)arg5 viewScale:(float)arg6;
- (void)drawText:(NSString *)arg0 paragraphStyle:(TSWPParagraphStyle *)arg1 intoContext:(struct CGContext *)arg2 wrapWidth:(float)arg3 atPosition:(struct CGPoint)arg4 viewScale:(float)arg5;
- (void)drawText:(NSString *)arg0 paragraphStyle:(TSWPParagraphStyle *)arg1 intoContext:(struct CGContext *)arg2 viewScale:(float)arg3;
- (void)drawText:(NSString *)arg0 paragraphStyle:(TSWPParagraphStyle *)arg1 intoContext:(struct CGContext *)arg2 atPosition:(struct CGPoint)arg3 range:(struct _NSRange)arg4 viewScale:(float)arg5;
- (struct CGSize)measureText:(NSString *)arg0 paragraphStyle:(TSWPParagraphStyle *)arg1 wrapWidth:(float)arg2;
- (struct CGSize)measureText:(NSString *)arg0 paragraphStyle:(TSWPParagraphStyle *)arg1 wrapWidth:(float)arg2 outErasableFrame:(struct CGRect *)arg3;
- (struct CGRect)frameForRange:(NSObject *)arg0 inText:(SEL)arg1 paragraphStyle:(struct _NSRange)arg2 wrapWidth:(id)arg3 outErasableFrame:(struct CGRect *)arg4;
- (struct CGRect)frameForRange:(NSObject *)arg0 inText:(SEL)arg1 paragraphStyle:(struct _NSRange)arg2 outErasableFrame:(struct CGRect *)arg3;
- (struct __CTFont *)retainedCTFontForParagraphStyle:(NSObject *)arg0;
- (NSObject *)p_wpTextForParagraphStyle:(NSObject *)arg0 textBlack:(char)arg1;
- (NSString *)p_newWPColumnForText:(NSString *)arg0 wpTextObject:(NSObject *)arg1 wrapWidth:(float)arg2;
- (NSString *)p_wpColumnForText:(NSString *)arg0 paragraphStyle:(TSWPParagraphStyle *)arg1 textBlack:(char)arg2 wrapWidth:(float)arg3;
- (NSString *)p_wpStorageForAttributedString:(struct __CFAttributedString *)arg0 paragraphStyle:(TSWPParagraphStyle *)arg1;
- (struct CGSize)measureText:(NSString *)arg0 paragraphStyle:(TSWPParagraphStyle *)arg1 wrapWidth:(float)arg2 outErasableFrame:(struct CGRect *)arg3 checkNumberTemplates:(struct CGSize)arg4;
- (char)p_styleSupportsEqualDigits:(id)arg0;
- (struct CGSize)p_wpWidthForNumberTemplate:(id)arg0 paragraphStyle:(TSWPParagraphStyle *)arg1;
- (struct CGSize)measureAttributedString:(struct __CFAttributedString *)arg0 paragraphStyle:(TSWPParagraphStyle *)arg1 outErasableFrame:(struct CGRect *)arg2;
- (struct CGRect)frameForRange:(NSObject *)arg0 inText:(SEL)arg1 paragraphStyle:(struct _NSRange)arg2;
- (void)drawAttributedString:(struct __CFAttributedString *)arg0 paragraphStyle:(TSWPParagraphStyle *)arg1 intoContext:(struct CGContext *)arg2 atPosition:(struct CGPoint)arg3 range:(struct _NSRange)arg4 viewScale:(float)arg5;
- (void)drawText:(NSString *)arg0 paragraphStyle:(TSWPParagraphStyle *)arg1 intoContext:(struct CGContext *)arg2 range:(struct _NSRange)arg3 viewScale:(float)arg4;
- (TSCHText *)retain;
- (void)release;
- (void)dealloc;
- (TSCHText *)init;
- (TSCHText *)autorelease;
- (unsigned int)retainCount;
- (TSCHText *)copyWithZone:(struct _NSZone *)arg0;
- (void)clearCaches;

@end
