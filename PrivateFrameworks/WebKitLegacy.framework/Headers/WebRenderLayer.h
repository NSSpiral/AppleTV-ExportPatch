/* Runtime dump - WebRenderLayer
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebRenderLayer : NSObject
{
    NSArray * children;
    NSString * name;
    NSString * compositingInfo;
    struct CGRect bounds;
    char composited;
    char separator;
}

+ (CALayer *)nameForLayer:(struct RenderLayer *)arg0;
+ (CALayer *)compositingInfoForLayer:(struct RenderLayer *)arg0;

- (void)dealloc;
- (NSString *)name;
- (void).cxx_construct;
- (WebRenderLayer *)initWithName:(NSString *)arg0;
- (NSString *)widthString;
- (NSArray *)children;
- (void)buildDescendantLayers:(struct RenderLayer *)arg0;
- (WebRenderLayer *)initWithRenderLayer:(struct RenderLayer *)arg0;
- (WebRenderLayer *)initWithWebFrame:(WebFrame *)arg0;
- (NSString *)positionString;
- (NSString *)heightString;
- (NSString *)compositingInfo;
- (char)isComposited;
- (char)isSeparator;

@end
