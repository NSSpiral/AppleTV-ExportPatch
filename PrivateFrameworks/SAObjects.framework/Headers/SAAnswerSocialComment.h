/* Runtime dump - SAAnswerSocialComment
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerSocialComment : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * author;
@property (copy, nonatomic) NSDate * date;
@property (copy, nonatomic) NSString * text;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAAnswerSocialComment *)socialComment;
+ (NSDictionary *)socialCommentWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSDate *)date;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (void)setDate:(NSDate *)arg0;
- (void)setAuthor:(NSString *)arg0;
- (NSString *)author;
- (NSString *)encodedClassName;

@end
