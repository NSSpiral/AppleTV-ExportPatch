/* Runtime dump - SCNDelegateSource
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNDelegateSource : SCNImageSource
{
    id _delegate;
}

@property (retain, nonatomic) id delegate;

- (NSString *)textureSourceForContext:(void *)arg0;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (NSObject *)delegate;
- (char)isOpaque;

@end
