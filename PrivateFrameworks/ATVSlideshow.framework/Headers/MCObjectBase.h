/* Runtime dump - MCObjectBase
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCObjectBase : NSObject

@property (readonly, nonatomic) char isSnapshot;

+ (void)initialize;

- (void)dealloc;
- (UIView *)snapshot;
- (void)demolish;
- (void)_copySelfToSnapshot:(NSObject *)arg0;
- (char)isSnapshot;
- (NSDictionary *)imprint;
- (void)finalize;

@end
