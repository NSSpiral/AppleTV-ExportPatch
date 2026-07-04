/* Runtime dump - UITextAttachmentView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextAttachmentView : UIView <NSTextAttachmentCell>
{
    UIImage * _image;
    NSTextAttachment * _attachment;
}

@property (retain, nonatomic) UIImage * image;
@property (nonatomic) struct CGRect drawingBounds;
@property (nonatomic) NSTextAttachment * attachment;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSData *)viewForData:(NSData *)arg0 ofType:(NSString *)arg1;
+ (UIImage *)viewForImage:(UIImage *)arg0;

- (void)dealloc;
- (void)setImage:(UIImage *)arg0;
- (UIImage *)image;
- (UIView *)contentView;
- (UITextAttachmentView *)initWithContentView:(NSObject *)arg0;
- (void)setDrawingBounds:(struct CGRect)arg0;
- (struct CGRect)drawingBounds;
- (void)drawWithFrame:(struct CGRect)arg0 inView:(struct CGSize)arg1 characterIndex:(NSObject *)arg2 layoutManager:(_UIFieldEditorLayoutManager *)arg3;
- (struct CGSize)cellSize;
- (struct CGPoint)cellBaselineOffset;
- (void)setAttachment:(NSTextAttachment *)arg0;
- (NSTextAttachment *)attachment;
- (void)drawWithFrame:(struct CGRect)arg0 inView:(struct CGSize)arg1 characterIndex:(NSObject *)arg2;

@end
