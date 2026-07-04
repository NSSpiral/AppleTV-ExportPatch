/* Runtime dump - FBOcclusionsStackEntry
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBOcclusionsStackEntry : NSObject
{
    NSString * _key;
    float _level;
    NSSet * _occlusions;
    NSOrderedSet * _orderedOcclusions;
}

@property (readonly, copy, nonatomic) NSString * key;
@property (nonatomic) float level;
@property (copy, nonatomic) NSSet * occlusions;
@property (readonly, copy, nonatomic) NSOrderedSet * orderedOcclusions;

- (void)dealloc;
- (NSString *)description;
- (NSString *)key;
- (void)setLevel:(float)arg0;
- (float)level;
- (NSSet *)occlusions;
- (void)setOcclusions:(NSSet *)arg0;
- (NSOrderedSet *)orderedOcclusions;
- (FBOcclusionsStackEntry *)initWithKey:(NSString *)arg0;

@end
