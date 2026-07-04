/* Runtime dump - SAPhoneCallHistory
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAPhoneCallHistory : SAPhoneCallSearchResult

@property (copy, nonatomic) NSNumber * blocked;
@property (copy, nonatomic) NSNumber * callCount;
@property (copy, nonatomic) NSNumber * faceTime;
@property (copy, nonatomic) NSNumber * faceTimeAudio;
@property (copy, nonatomic) NSNumber * missed;
@property (copy, nonatomic) NSNumber * outgoing;

+ (NSArray *)callHistory;
+ (NSDictionary *)callHistoryWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setBlocked:(NSNumber *)arg0;
- (NSNumber *)missed;
- (void)setMissed:(NSNumber *)arg0;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSNumber *)faceTime;
- (void)setFaceTime:(NSNumber *)arg0;
- (NSNumber *)faceTimeAudio;
- (void)setFaceTimeAudio:(NSNumber *)arg0;
- (NSNumber *)outgoing;
- (NSNumber *)blocked;
- (void)setOutgoing:(NSNumber *)arg0;
- (void)setCallCount:(NSNumber *)arg0;
- (NSNumber *)callCount;

@end
