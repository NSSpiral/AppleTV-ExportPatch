/* Runtime dump - SAPhoneSearch
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAPhoneSearch : SADomainCommand

@property (copy, nonatomic) NSArray * contacts;
@property (copy, nonatomic) NSDate * end;
@property (copy, nonatomic) NSNumber * faceTime;
@property (copy, nonatomic) NSNumber * faceTimeAudio;
@property (copy, nonatomic) NSNumber * isNew;
@property (copy, nonatomic) NSNumber * last;
@property (copy, nonatomic) NSNumber * missed;
@property (copy, nonatomic) NSNumber * outgoing;
@property (copy, nonatomic) NSDate * start;
@property (copy, nonatomic) NSNumber * voiceMail;

+ (NSDictionary *)searchWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;
+ (NSString *)search;

- (NSArray *)contacts;
- (void)setContacts:(NSArray *)arg0;
- (NSNumber *)isNew;
- (NSString *)groupIdentifier;
- (NSDate *)start;
- (NSDate *)end;
- (void)setStart:(NSDate *)arg0;
- (void)setEnd:(NSDate *)arg0;
- (void)setLast:(NSNumber *)arg0;
- (NSNumber *)last;
- (NSNumber *)missed;
- (void)setMissed:(NSNumber *)arg0;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (NSNumber *)faceTime;
- (void)setFaceTime:(NSNumber *)arg0;
- (NSNumber *)faceTimeAudio;
- (void)setFaceTimeAudio:(NSNumber *)arg0;
- (void)setIsNew:(NSNumber *)arg0;
- (NSNumber *)outgoing;
- (NSNumber *)voiceMail;
- (void)setVoiceMail:(NSNumber *)arg0;
- (void)setOutgoing:(NSNumber *)arg0;

@end
