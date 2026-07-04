/* Runtime dump - TSDSwatchRenderingOperation
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDSwatchRenderingOperation : NSOperation
{
    UIView * mView;
    NSObject<TSSPreset> * mPreset;
    struct CGSize mImageSize;
    float mImageScale;
    struct CGRect mSwatchFrame;
    TSKDocumentRoot * mDocumentRoot;
    struct CGImage * mDeliveredImage;
    unsigned int mInsertPopoverPageType;
    unsigned int mInsertPopoverPageNumber;
    NSString * mIdentifier;
    NSObject * mRenderingTicket;
}

@property (retain) UIView * view;
@property (readonly) NSObject<TSSPreset> * preset;
@property (readonly) struct CGSize imageSize;
@property (readonly) float imageScale;
@property (readonly) struct CGRect swatchFrame;
@property (readonly) TSKDocumentRoot * documentRoot;
@property unsigned int insertPopoverPageType;
@property unsigned int insertPopoverPageNumber;
@property (copy) NSString * identifier;
@property (retain) NSObject * renderingTicket;
@property (readonly, nonatomic) struct CGImage * deliveredImage;

- (NSObject<TSSPreset> *)preset;
- (struct UIEdgeInsets)swatchEdgeInsets;
- (char)needsPressedStateBackground;
- (void)p_animateSwatchIn;
- (struct CGImage *)p_newSwatchPressedStateBackgroundFromCGImage:(struct CGImage *)arg0;
- (void)p_deliverResultOnMainThread:(NSObject *)arg0;
- (void)doWorkWithReadLock;
- (TSDSwatchRenderingOperation *)initWithPreset:(NSObject<TSSPreset> *)arg0 imageSize:(struct CGSize)arg1 imageScale:(float)arg2 swatchFrame:(struct CGRect)arg3 documentRoot:(struct CGSize)arg4;
- (void)deliverCGImage:(struct CGImage *)arg0;
- (struct CGImage *)deliveredImage;
- (struct CGRect)swatchFrame;
- (unsigned int)insertPopoverPageType;
- (void)setInsertPopoverPageType:(unsigned int)arg0;
- (unsigned int)insertPopoverPageNumber;
- (void)setInsertPopoverPageNumber:(unsigned int)arg0;
- (NSObject *)renderingTicket;
- (void)setRenderingTicket:(NSObject *)arg0;
- (void)dealloc;
- (UIView *)view;
- (NSString *)identifier;
- (void)setView:(UIView *)arg0;
- (void)setIdentifier:(NSString *)arg0;
- (struct CGSize)imageSize;
- (void)main;
- (TSKDocumentRoot *)documentRoot;
- (float)imageScale;

@end
