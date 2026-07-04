/* Runtime dump - MCContainerNavigator
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCContainerNavigator : MCContainer
{
    NSMutableDictionary * mPlugs;
    NSString * mStartPlugID;
    MCPlugHaven * mStartPlug;
}

@property (readonly) NSSet * plugs;
@property (readonly) unsigned int countOfPlugs;
@property (copy, nonatomic) NSString * startPlugID;
@property (readonly) MCPlugHaven * startPlug;

- (MCContainerNavigator *)init;
- (NSObject *)plugForID:(NSObject *)arg0;
- (void)removePlugForID:(NSObject *)arg0;
- (NSObject *)setPlugForContainer:(NSObject *)arg0 forID:(NSObject *)arg1;
- (void)demolish;
- (void)removePlug:(MCPlug *)arg0;
- (NSString *)startPlugID;
- (void)setStartPlugID:(NSString *)arg0;
- (NSSet *)plugs;
- (MCPlugHaven *)startPlug;
- (MCContainerNavigator *)initWithImprint:(NSDictionary *)arg0 andMontage:(NSObject *)arg1;
- (unsigned int)countOfPlugs;
- (void)changeIDOfPlug:(id)arg0 toID:(NSObject *)arg1;
- (void)removeAllPlugs;
- (NSDictionary *)imprint;

@end
