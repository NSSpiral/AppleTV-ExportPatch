/* Runtime dump - MCContainerParallelizer
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCContainerParallelizer : MCContainer
{
    NSMutableDictionary * mPlugs;
    NSArray * mCachedZOrderedPlugs;
    struct CGColor * mBackgroundColor;
}

@property (readonly) NSSet * plugs;
@property (readonly, nonatomic) unsigned int countOfPlugs;
@property (readonly) NSArray * zOrderedPlugs;
@property struct CGColor * backgroundColor;

+ (NSString *)keyPathsForValuesAffectingValueForKey:(NSString *)arg0;

- (void)setBackgroundColor:(struct CGColor *)arg0;
- (struct CGColor *)backgroundColor;
- (MCContainerParallelizer *)init;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (NSObject *)plugForID:(NSObject *)arg0;
- (void)removePlugForID:(NSObject *)arg0;
- (NSObject *)setPlugForContainer:(NSObject *)arg0 forID:(NSObject *)arg1;
- (void)demolish;
- (void)removePlug:(MCPlug *)arg0;
- (NSArray *)zOrderedPlugs;
- (NSSet *)plugs;
- (MCContainerParallelizer *)initWithImprint:(NSDictionary *)arg0 andMontage:(NSObject *)arg1;
- (unsigned int)countOfPlugs;
- (void)changeIDOfPlug:(id)arg0 toID:(NSObject *)arg1;
- (void)removeAllPlugs;
- (id)setPlugProxyForPlug:(id)arg0;
- (NSDictionary *)imprint;

@end
