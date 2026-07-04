/* Runtime dump - MCContainerSerializer
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCContainerSerializer : MCContainer
{
    NSMutableSet * mPlugs;
    NSArray * mCachedOrderedPlugs;
    double mCachedDuration;
    NSString * _initialTransitionID;
    NSDictionary * _initialTransitionAttributes;
    double _initialTransitionDuration;
}

@property (readonly) NSSet * plugs;
@property (readonly, nonatomic) unsigned int countOfPlugs;
@property (readonly) NSArray * orderedPlugs;
@property (readonly) double duration;
@property (copy) NSString * initialTransitionID;
@property (nonatomic) double initialTransitionDuration;
@property (copy) NSDictionary * initialTransitionAttributes;

+ (NSString *)keyPathsForValuesAffectingValueForKey:(NSString *)arg0;

- (MCContainerSerializer *)init;
- (double)duration;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void)demolish;
- (void)setInitialTransitionID:(NSString *)arg0;
- (void)setInitialTransitionDuration:(double)arg0;
- (void)setInitialTransitionAttributes:(NSDictionary *)arg0;
- (id)insertPlugsForContainers:(id)arg0 atIndex:(unsigned int)arg1;
- (NSArray *)orderedPlugs;
- (void)removePlugsAtIndices:(id)arg0;
- (void)movePlugsAtIndices:(id)arg0 toIndex:(unsigned int)arg1;
- (id)addPlugsForContainers:(id)arg0;
- (NSSet *)plugs;
- (NSString *)initialTransitionID;
- (NSDictionary *)initialTransitionAttributes;
- (double)initialTransitionDuration;
- (NSObject *)plugAtIndex:(unsigned int)arg0;
- (double)timeInForPlug:(id)arg0;
- (MCContainerSerializer *)initWithImprint:(NSDictionary *)arg0 andMontage:(NSObject *)arg1;
- (unsigned int)countOfPlugs;
- (void)removeAllPlugs;
- (NSObject *)addPlugForContainer:(NSObject *)arg0;
- (NSObject *)insertPlugForContainer:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (NSDictionary *)imprint;

@end
