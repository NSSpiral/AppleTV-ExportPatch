/* Runtime dump - TSWPTypesetterAttachmentMap
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPTypesetterAttachmentMap : NSObject
{
    char _layoutNeedsRevalidation;
    TSWPAttachment * _attachment;
    TSDLayout * _layout;
    struct __CTLine * _lineRef;
}

@property (nonatomic) TSWPAttachment * attachment;
@property (retain, nonatomic) TSDLayout * layout;
@property (nonatomic) char layoutNeedsRevalidation;
@property (readonly, nonatomic) struct __CTLine * lineRef;

+ (NSObject *)mapWithAttachment:(TSWPAttachment *)arg0 layout:(TSDLayout *)arg1 pageNumber:(unsigned int)arg2 pageCount:(unsigned int)arg3 footnoteMarkProvider:(<TSWPFootnoteMarkProvider> *)arg4 styleProvider:(NSObject *)arg5 colorOverride:(id)arg6 textScalePercent:(unsigned int)arg7;

- (struct __CTLine *)lineRef;
- (char)layoutNeedsRevalidation;
- (void)setLayoutNeedsRevalidation:(char)arg0;
- (void)dealloc;
- (TSWPTypesetterAttachmentMap *)copyWithZone:(struct _NSZone *)arg0;
- (TSDLayout *)layout;
- (void)setLayout:(TSDLayout *)arg0;
- (void)setAttachment:(TSWPAttachment *)arg0;
- (TSWPAttachment *)attachment;

@end
