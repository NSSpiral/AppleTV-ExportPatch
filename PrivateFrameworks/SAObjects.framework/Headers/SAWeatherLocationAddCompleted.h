/* Runtime dump - SAWeatherLocationAddCompleted
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWeatherLocationAddCompleted : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSString * error;
@property (copy, nonatomic) NSURL * weatherLocationId;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SAWeatherLocationAddCompleted *)locationAddCompleted;
+ (NSDictionary *)locationAddCompletedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;
+ (NSError *)locationAddCompletedWithError:(NSString *)arg0;
+ (NSObject *)locationAddCompletedWithWeatherLocationId:(NSURL *)arg0;

- (NSString *)groupIdentifier;
- (NSString *)error;
- (void)setError:(NSString *)arg0;
- (NSString *)encodedClassName;
- (SAWeatherLocationAddCompleted *)initWithWeatherLocationId:(NSURL *)arg0;
- (void)setWeatherLocationId:(NSURL *)arg0;
- (NSURL *)weatherLocationId;
- (SAWeatherLocationAddCompleted *)initWithError:(NSString *)arg0;

@end
