/* Runtime dump - SAMPGeniusSummonFailed
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPGeniusSummonFailed : SABaseCommand <SAServerBoundCommand>

@property (nonatomic) int errorCode;
@property (copy, nonatomic) NSString * reason;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (SAMPGeniusSummonFailed *)geniusSummonFailed;
+ (NSDictionary *)geniusSummonFailedWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;
+ (SAMPGeniusSummonFailed *)geniusSummonFailedWithErrorCode:(int)arg0;
+ (NSString *)geniusSummonFailedWithReason:(NSString *)arg0;

- (NSString *)groupIdentifier;
- (NSString *)reason;
- (SAMPGeniusSummonFailed *)initWithReason:(NSString *)arg0;
- (void)setErrorCode:(int)arg0;
- (int)errorCode;
- (void)setReason:(NSString *)arg0;
- (NSString *)encodedClassName;
- (SAMPGeniusSummonFailed *)initWithErrorCode:(int)arg0;

@end
