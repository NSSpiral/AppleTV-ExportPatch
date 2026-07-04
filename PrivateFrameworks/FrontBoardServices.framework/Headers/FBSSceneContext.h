/* Runtime dump - FBSSceneContext
 * Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneContext : NSObject
{
    unsigned int _identifier;
    float _level;
    CAContext * _context;
    <FBSSceneContextDelegate> * _delegate;
    char _shouldObserveContext;
}

@property (readonly, retain, nonatomic) CAContext * CAContext;
@property (readonly, nonatomic) unsigned int identifier;
@property (nonatomic) float level;
@property (nonatomic) <FBSSceneContextDelegate> * delegate;

+ (NSString *)contextWithCAContext:(NSObject *)arg0;

- (void)dealloc;
- (void)setDelegate:(<FBSSceneContextDelegate> *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (<FBSSceneContextDelegate> *)delegate;
- (unsigned int)identifier;
- (void)setLevel:(float)arg0;
- (float)level;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (FBSSceneContext *)initWithCAContext:(NSObject *)arg0;
- (FBSSceneContext *)initWithIdentifier:(unsigned int)arg0 level:(float)arg1;
- (CAContext *)CAContext;

@end
