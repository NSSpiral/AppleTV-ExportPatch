/* Runtime dump - MCPlugHaven
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCPlugHaven : MCPlug
{
    NSString * mIDInSupercontainer;
    MCContainerNavigator * mSupercontainer;
}

@property (copy) NSString * idInSupercontainer;
@property (retain, nonatomic) MCAction * actionOnCompletion;
@property MCContainerNavigator * supercontainer;

- (NSString *)idInSupercontainer;
- (void)demolish;
- (MCContainerNavigator *)supercontainer;
- (void)_copySelfToSnapshot:(NSObject *)arg0;
- (MCPlugHaven *)initWithImprint:(NSDictionary *)arg0 andMontage:(NSObject *)arg1;
- (void)setSupercontainer:(MCContainerNavigator *)arg0;
- (void)setIDInSupercontainer:(id)arg0;
- (MCAction *)actionOnCompletion;
- (void)setActionOnCompletion:(MCAction *)arg0;
- (NSDictionary *)imprint;

@end
