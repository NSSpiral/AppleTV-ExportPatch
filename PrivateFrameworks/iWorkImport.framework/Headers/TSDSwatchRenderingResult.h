/* Runtime dump - TSDSwatchRenderingResult
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDSwatchRenderingResult : NSObject
{
    struct CGImage * foreground;
    struct CGImage * background;
}

@property (readonly, nonatomic) struct CGImage * foreground;
@property (readonly, nonatomic) struct CGImage * background;

+ (TSDSwatchRenderingResult *)renderingResultWithForeground:(struct CGImage *)arg0 background:(struct CGImage *)arg1;

- (void)dealloc;
- (struct CGImage *)background;
- (struct CGImage *)foreground;

@end
