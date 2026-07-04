/* Runtime dump - AAUIUpdateMyPhotoRequest
 * Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIUpdateMyPhotoRequest : AARequest
{
    ACAccount * _account;
    UIImage * _photo;
    NSValue * _cropRect;
}

+ (UIImage *)_downsampleImage:(UIImage *)arg0 fromStartingQuality:(float)arg1 toEndingQuality:(float)arg2 increment:(float)arg3 maxLength:(unsigned int)arg4;
+ (UIImage *)_fullScreen2ImageFromImage:(UIImage *)arg0 cropRect:(NSValue *)arg1 fullScreenCropRect:(id *)arg2;

- (NSString *)urlString;
- (void).cxx_destruct;
- (AAUIUpdateMyPhotoRequest *)initWithAccount:(ACAccount *)arg0 photo:(UIImage *)arg1 cropRect:(NSValue *)arg2;
- (NSURLRequest *)urlRequest;

@end
