/* Runtime dump - SAAIStartSession
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAIStartSession : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSString * acousticIdSessionId;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (NSObject *)startSession;
+ (NSDictionary *)startSessionWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSString *)acousticIdSessionId;
- (void)setAcousticIdSessionId:(NSString *)arg0;

@end
