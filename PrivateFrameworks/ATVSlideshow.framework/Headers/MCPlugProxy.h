/* Runtime dump - MCPlugProxy
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCPlugProxy : MCObject
{
    MCPlug * _plug;
}

@property (retain) MCPlug * plug;

- (void)dealloc;
- (char)isKindOfClass:(Class)arg0;
- (void)setContainer:(NSObject *)arg0;
- (NSString *)forwardingTargetForSelector:(SEL)arg0;
- (int)zIndex;
- (void)setPlug:(MCPlug *)arg0;
- (MCPlug *)plug;
- (void)_copySelfToSnapshot:(NSObject *)arg0;

@end
