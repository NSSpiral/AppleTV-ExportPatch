/* Runtime dump - BRPosterLayer
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRPosterLayer : CALayer
{
    char _requiresDrawing;
}

+ (BRPosterLayer *)defaultActionForKey:(NSString *)arg0;

- (void)setRequiresDrawing:(char)arg0;
- (char)requiresDrawing;
- (void)display;

@end
