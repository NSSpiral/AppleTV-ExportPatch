/* Runtime dump - PLPhotoBrowserImageRequest
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPhotoBrowserImageRequest : NSObject
{
    char _canceled;
    int _imageManagerRequestID;
}

@property (nonatomic) int imageManagerRequestID;
@property (nonatomic) char canceled;

- (int)imageManagerRequestID;
- (void)setImageManagerRequestID:(int)arg0;
- (char)canceled;
- (void)setCanceled:(char)arg0;

@end
