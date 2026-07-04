/* Runtime dump - TSTCompletionToken
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCompletionToken : TSTWPTokenAttachment
{
    NSString * mCompletionText;
    struct _NSRange mPrefixRange;
    int mRenderAsTokenType;
    TSTReferenceNode * mEditingReferenceNode;
    TSUColor * mReferenceColor;
    <TSTCanvasReferenceProvider> * mCanvasReferenceProvider;
}

@property (retain, nonatomic) NSString * completionText;
@property (nonatomic) struct _NSRange prefixRange;
@property (readonly, nonatomic) int renderAsTokenType;
@property (retain, nonatomic) TSTReferenceNode * editingReferenceNode;
@property (retain, nonatomic) TSUColor * referenceColor;
@property (nonatomic) <TSTCanvasReferenceProvider> * canvasReferenceProvider;

- (TSTCompletionToken *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct CompletionTokenAttachmentArchive *)arg0 archiver:(NSObject *)arg1;
- (TSTCompletionToken *)initFromArchive:(struct CompletionTokenAttachmentArchive *)arg0 unarchiver:(struct CompletionTokenAttachmentArchive)arg1;
- (TSTCompletionToken *)initWithContext:(NSObject *)arg0 expressionNode:(TSTExpressionNode *)arg1;
- (void)setExpressionNode:(TSTExpressionNode *)arg0;
- (NSString *)copyIntoContext:(NSObject *)arg0 bakeModes:(char)arg1;
- (void)p_removeCanvasReference;
- (void)p_createCanvasReference;
- (TSTCompletionToken *)initWithContext:(NSObject *)arg0 completionText:(NSString *)arg1;
- (void)setCompletionText:(NSString *)arg0;
- (void)setPrefixRange:(struct _NSRange)arg0;
- (void)setReferenceColor:(TSUColor *)arg0;
- (void)setEditingReferenceNode:(TSTReferenceNode *)arg0;
- (NSString *)tokenText;
- (void)makeTokenReflectChoice:(id)arg0;
- (NSString *)completionText;
- (struct _NSRange)prefixRange;
- (int)renderAsTokenType;
- (TSTReferenceNode *)editingReferenceNode;
- (<TSTCanvasReferenceProvider> *)canvasReferenceProvider;
- (void)setCanvasReferenceProvider:(<TSTCanvasReferenceProvider> *)arg0;
- (void)dealloc;
- (NSString *)description;
- (void).cxx_construct;
- (TSUColor *)referenceColor;

@end
