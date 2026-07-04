/* Runtime dump - SAPhoneVoiceMail
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAPhoneVoiceMail : SAPhoneCallSearchResult

@property (copy, nonatomic) NSString * filePath;
@property (copy, nonatomic) NSNumber * length;

+ (NSNumber *)voiceMail;
+ (NSDictionary *)voiceMailWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSNumber *)length;
- (void)setLength:(NSNumber *)arg0;
- (void)setFilePath:(NSString *)arg0;
- (NSString *)filePath;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;

@end
