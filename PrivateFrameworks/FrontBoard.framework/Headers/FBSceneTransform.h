/* Runtime dump - FBSceneTransform
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSceneTransform : NSObject
{
    struct CGAffineTransform _transform;
    NSHashTable * _targets;
}

@property (nonatomic) struct CGAffineTransform transform;

+ (struct CGAffineTransform)concatenateTransforms:(id)arg0;

- (void)dealloc;
- (FBSceneTransform *)init;
- (NSString *)description;
- (void)setTransform:(struct CGAffineTransform)arg0;
- (struct CGAffineTransform)transform;
- (NSString *)_initWithTransform:(struct CGAffineTransform)arg0;
- (void)addTransformTarget:(NSObject *)arg0;
- (void)removeTransformTarget:(NSObject *)arg0;

@end
