/* Runtime dump - MFAttachmentImageGenerator
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFAttachmentImageGenerator : UIView
{
    struct CGSize _textSize;
    NSString * _displayString;
    UIImage * _image;
    float _maxImageHeight;
}

+ (NSObject *)pngDataForAttachment:(NSObject *)arg0;
+ (float)defaultHeight;

- (MFAttachmentImageGenerator *)initWithAttachment:(NSObject *)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;

@end
