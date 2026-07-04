/* Runtime dump - NSTextAttachment
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextAttachment : NSObject <NSTextAttachmentContainer, NSCoding>
{
    NSData * _data;
    NSString * _uti;
    NSString * _cacheKey;
    struct CGRect _bounds;
    NSFileWrapper * _fileWrapper;
    UIImage * _image;
    UITextAttachmentView * _wrapperView;
}

@property (retain, nonatomic) NSData * contents;
@property (retain, nonatomic) NSString * fileType;
@property (retain, nonatomic) NSFileWrapper * fileWrapper;
@property (retain, nonatomic) UIImage * image;
@property (nonatomic) struct CGRect bounds;
@property (retain) UIView * contentView;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSCache *)imageCache;
+ (void)initialize;

- (void)setFileWrapper:(NSFileWrapper *)arg0;
- (UIImage *)imageForBounds:(struct CGRect)arg0 textContainer:(struct CGSize)arg1 characterIndex:(NSObject *)arg2;
- (struct CGRect)attachmentBoundsForTextContainer:(NSObject *)arg0 proposedLineFragment:(SEL)arg1 glyphPosition:(NSObject *)arg2 characterIndex:(struct CGRect)arg3;
- (void)dealloc;
- (struct CGRect)bounds;
- (void)setImage:(UIImage *)arg0;
- (UIImage *)_image;
- (NSTextAttachment *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setBounds:(struct CGRect)arg0;
- (NSString *)description;
- (UIImage *)image;
- (NSData *)contents;
- (UIView *)contentView;
- (void)setContentView:(UIView *)arg0;
- (void)setContents:(NSData *)arg0;
- (NSString *)fileType;
- (void)setFileType:(NSString *)arg0;
- (NSTextAttachment *)initWithData:(NSData *)arg0 ofType:(NSString *)arg1;
- (void)setDrawingBounds:(struct CGRect)arg0;
- (struct CGRect)drawingBounds;
- (NSObject *)attachmentCell;
- (NSString *)_cacheKey;
- (NSFileWrapper *)fileWrapper;
- (NSTextAttachment *)initWithFileWrapper:(NSFileWrapper *)arg0;

@end
