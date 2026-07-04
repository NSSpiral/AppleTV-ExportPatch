/* Runtime dump - UIWebClipIcon
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebClipIcon : NSObject
{
    char _precomposed;
    char _siteWide;
    struct CGSize _bestSize;
    NSURL * _url;
}

@property (nonatomic) char precomposed;
@property (nonatomic) char siteWide;
@property (nonatomic) struct CGSize bestSize;
@property (retain, nonatomic) NSURL * url;

- (void)dealloc;
- (NSURL *)url;
- (void)setUrl:(NSURL *)arg0;
- (char)isSiteWide;
- (struct CGSize)bestSize;
- (char)isPrecomposed;
- (int)compare:(NSObject *)arg0 preferringDeviceIconSizes:(char)arg1;
- (void)setPrecomposed:(char)arg0;
- (void)setSiteWide:(char)arg0;
- (void)setBestSize:(struct CGSize)arg0;

@end
