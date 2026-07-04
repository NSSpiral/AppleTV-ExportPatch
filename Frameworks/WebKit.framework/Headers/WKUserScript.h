/* Runtime dump - WKUserScript
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKUserScript : NSObject <NSCopying>
{
    struct RetainPtr<NSString> _source;
    int _injectionTime;
    char _forMainFrameOnly;
}

@property (readonly, copy, nonatomic) NSString * source;
@property (readonly, nonatomic) int injectionTime;
@property (readonly, nonatomic) char forMainFrameOnly;

- (WKUserScript *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;
- (NSString *)source;
- (void).cxx_destruct;
- (WKUserScript *)initWithSource:(NSString *)arg0 injectionTime:(int)arg1 forMainFrameOnly:(char)arg2;
- (int)injectionTime;
- (char)isForMainFrameOnly;

@end
