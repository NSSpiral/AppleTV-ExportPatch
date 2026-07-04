/* Runtime dump - CAMFormattingManager
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMFormattingManager : NSObject
{
    char _wantsCustomKerning;
    char _supportsVerticalText;
}

@property (readonly, nonatomic) char wantsCustomKerning;
@property (readonly, nonatomic) char supportsVerticalText;

+ (CAMFormattingManager *)sharedManager;

- (CAMFormattingManager *)init;
- (char)wantsCustomKerning;
- (void)_commonCAMFormattingManagerInitialization;
- (char)supportsVerticalText;

@end
