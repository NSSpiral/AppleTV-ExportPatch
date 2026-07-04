/* Runtime dump - SAWeatherLocationSearchCompleted
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWeatherLocationSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSArray * weatherLocations;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SAWeatherLocationSearchCompleted *)locationSearchCompleted;
+ (NSDictionary *)locationSearchCompletedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;
+ (SAWeatherLocationSearchCompleted *)locationSearchCompletedWithWeatherLocations:(NSArray *)arg0;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (SAWeatherLocationSearchCompleted *)initWithWeatherLocations:(NSArray *)arg0;
- (void)setWeatherLocations:(NSArray *)arg0;
- (NSArray *)weatherLocations;

@end
