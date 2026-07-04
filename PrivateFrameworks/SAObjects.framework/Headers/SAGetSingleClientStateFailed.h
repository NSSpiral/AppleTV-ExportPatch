/* Runtime dump - SAGetSingleClientStateFailed
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGetSingleClientStateFailed : SABaseCommand <SAServerBoundCommand>

@property (nonatomic) int errorCode;
@property (copy, nonatomic) NSString * reason;
@property (retain, nonatomic) SAAceClientState * attemptedClientState;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SAGetSingleClientStateFailed *)getSingleClientStateFailed;
+ (NSDictionary *)getSingleClientStateFailedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;
+ (SAGetSingleClientStateFailed *)getSingleClientStateFailedWithErrorCode:(int)arg0;
+ (NSString *)getSingleClientStateFailedWithReason:(NSString *)arg0;

- (NSString *)groupIdentifier;
- (NSString *)reason;
- (SAGetSingleClientStateFailed *)initWithReason:(NSString *)arg0;
- (void)setErrorCode:(int)arg0;
- (int)errorCode;
- (void)setReason:(NSString *)arg0;
- (NSString *)encodedClassName;
- (SAGetSingleClientStateFailed *)initWithErrorCode:(int)arg0;
- (SAAceClientState *)attemptedClientState;
- (void)setAttemptedClientState:(SAAceClientState *)arg0;

@end
