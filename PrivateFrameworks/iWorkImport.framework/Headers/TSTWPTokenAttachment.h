/* Runtime dump - TSTWPTokenAttachment
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTWPTokenAttachment : TSWPUIGraphicalAttachment
{
    TSTExpressionNode * mExpressionNode;
    char mActive;
    char mSelected;
    char mHighlighted;
    char mNeverShowsMenu;
    struct CGSize mTextSize;
    struct CGRect mMenuRect;
    struct CGImage * mCachedImage;
    float mCachedImageScreenScale;
    char mInInvalidate;
}

@property (retain, nonatomic) TSTExpressionNode * expressionNode;
@property (nonatomic) char active;
@property (nonatomic) char selected;
@property (nonatomic) char highlighted;
@property (nonatomic) char neverShowsMenu;
@property (nonatomic) struct CGImage * cachedImage;
@property (nonatomic) float cachedImageScreenScale;

- (TSTWPTokenAttachment *)initFromUnarchiver:(NSObject *)arg0;
- (void)saveToArchiver:(NSObject *)arg0;
- (void)saveToArchive:(struct TokenAttachmentArchive *)arg0 archiver:(NSObject *)arg1;
- (TSTWPTokenAttachment *)initFromArchive:(struct TokenAttachmentArchive *)arg0 unarchiver:(struct TokenAttachmentArchive)arg1;
- (NSString *)formulaPlainText;
- (TSTExpressionNode *)expressionNode;
- (TSTWPTokenAttachment *)initWithContext:(NSObject *)arg0 expressionNode:(TSTExpressionNode *)arg1;
- (NSString *)detokenizedText;
- (void)setExpressionNode:(TSTExpressionNode *)arg0;
- (NSString *)copyIntoContext:(NSObject *)arg0 bakeModes:(char)arg1;
- (void)setCachedImage:(struct CGImage *)arg0;
- (NSString *)copyIntoContext:(NSObject *)arg0;
- (void)requestRedraw;
- (struct CGImage *)cachedImage;
- (char)neverShowsMenu;
- (void)setNeverShowsMenu:(char)arg0;
- (float)cachedImageScreenScale;
- (void)setCachedImageScreenScale:(float)arg0;
- (void)dealloc;
- (NSString *)description;
- (char)isActive;
- (void)invalidate;
- (void)setHighlighted:(char)arg0;
- (char)isHighlighted;
- (char)isSelected;
- (void)setSelected:(char)arg0;
- (void)setActive:(char)arg0;
- (void).cxx_construct;

@end
