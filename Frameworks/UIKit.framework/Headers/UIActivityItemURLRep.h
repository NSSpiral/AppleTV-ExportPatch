/* Runtime dump - UIActivityItemURLRep
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIActivityItemURLRep : NSObject
{
    NSURL * _URL;
    UIImage * _thumbnail;
    int _attachmentURLType;
}

@property (retain, nonatomic) NSURL * URL;
@property (retain, nonatomic) UIImage * thumbnail;
@property (nonatomic) int attachmentURLType;

- (void)dealloc;
- (NSString *)scheme;
- (char)isFileURL;
- (NSURL *)URL;
- (void)setURL:(NSString *)arg0;
- (UIImage *)thumbnail;
- (int)attachmentURLType;
- (void)setThumbnail:(UIImage *)arg0;
- (void)setAttachmentURLType:(int)arg0;

@end
