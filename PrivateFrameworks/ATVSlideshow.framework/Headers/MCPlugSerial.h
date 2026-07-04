/* Runtime dump - MCPlugSerial
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCPlugSerial : MCPlug
{
    NSMutableDictionary * mTransitionAttributes;
    unsigned int mIndex;
    NSString * mTransitionID;
    MCContainerSerializer * mSupercontainer;
    double mTransitionDuration;
}

@property (nonatomic) unsigned int index;
@property (copy) NSString * transitionID;
@property (nonatomic) double transitionDuration;
@property (copy) NSDictionary * transitionAttributes;
@property MCContainerSerializer * supercontainer;

+ (NSString *)keyPathsForValuesAffectingValueForKey:(NSString *)arg0;

- (double)transitionDuration;
- (unsigned int)index;
- (void)setTransitionDuration:(double)arg0;
- (void)setIndex:(unsigned int)arg0;
- (void)setTransitionAttributes:(NSDictionary *)arg0;
- (void)setTransitionID:(NSString *)arg0;
- (NSString *)transitionAttributeForKey:(NSString *)arg0;
- (NSDictionary *)transitionAttributes;
- (NSString *)transitionID;
- (void)setTransitionAttribute:(NSObject *)arg0 forKey:(NSString *)arg1;
- (void)demolish;
- (MCContainerSerializer *)supercontainer;
- (void)_copySelfToSnapshot:(NSObject *)arg0;
- (MCPlugSerial *)initWithImprint:(NSDictionary *)arg0 andMontage:(NSObject *)arg1;
- (void)setSupercontainer:(MCContainerSerializer *)arg0;
- (void)addTransitionAttributes:(NSDictionary *)arg0;
- (NSDictionary *)imprint;

@end
