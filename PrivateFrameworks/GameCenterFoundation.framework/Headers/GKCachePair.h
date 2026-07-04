/* Runtime dump - GKCachePair
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKCachePair : NSObject
{
    id _value;
    id _key;
}

@property (retain, nonatomic) id value;
@property (retain, nonatomic) id key;

- (void)dealloc;
- (NSString *)key;
- (void *)value;
- (void)setValue:(NSObject *)arg0;
- (void)setKey:(NSString *)arg0;

@end
