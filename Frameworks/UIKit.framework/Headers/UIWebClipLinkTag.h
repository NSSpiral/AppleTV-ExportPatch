/* Runtime dump - UIWebClipLinkTag
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebClipLinkTag : NSObject
{
    char _mediaMatchesPortraitOrientation;
    char _mediaMatchesLandscapeOrientation;
    NSString * _href;
    NSString * _rel;
    NSString * _sizes;
}

@property (copy, nonatomic) NSString * href;
@property (readonly, nonatomic) NSURL * hrefURL;
@property (copy, nonatomic) NSString * rel;
@property (copy, nonatomic) NSString * sizes;
@property (nonatomic) char mediaMatchesPortraitOrientation;
@property (nonatomic) char mediaMatchesLandscapeOrientation;

- (void)dealloc;
- (NSURL *)hrefURL;
- (NSString *)href;
- (void)setHref:(NSString *)arg0;
- (NSString *)rel;
- (void)setRel:(NSString *)arg0;
- (NSString *)sizes;
- (void)setSizes:(NSString *)arg0;
- (char)mediaMatchesPortraitOrientation;
- (void)setMediaMatchesPortraitOrientation:(char)arg0;
- (char)mediaMatchesLandscapeOrientation;
- (void)setMediaMatchesLandscapeOrientation:(char)arg0;

@end
