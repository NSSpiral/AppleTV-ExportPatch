/* Runtime dump - SASetMultipleClientStates
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASetMultipleClientStates : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSArray * clientStateSetters;
@property (copy, nonatomic) NSArray * failedGetters;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (NSArray *)setMultipleClientStates;
+ (NSDictionary *)setMultipleClientStatesWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)clientStateSetters;
- (void)setClientStateSetters:(NSArray *)arg0;
- (NSArray *)failedGetters;
- (void)setFailedGetters:(NSArray *)arg0;

@end
