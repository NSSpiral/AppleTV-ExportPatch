/* Runtime dump - SCNKeyedUnarchiver
 * Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNKeyedUnarchiver : NSKeyedUnarchiver
{
    NSDictionary * _context;
}

@property (retain, nonatomic) NSDictionary * context;

- (void)dealloc;
- (NSDictionary *)context;
- (void)setContext:(NSDictionary *)arg0;

@end
