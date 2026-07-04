/* Runtime dump - SAGKImageLinkedAnswer
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGKImageLinkedAnswer : SAGKLinkedAnswer

@property (copy, nonatomic) NSNumber * fileSize;
@property (retain, nonatomic) SAUIImageResource * imageResource;
@property (copy, nonatomic) NSArray * thumbnails;

+ (SAGKImageLinkedAnswer *)imageLinkedAnswer;
+ (NSDictionary *)imageLinkedAnswerWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSNumber *)fileSize;
- (void)setFileSize:(NSNumber *)arg0;
- (NSString *)encodedClassName;
- (SAUIImageResource *)imageResource;
- (void)setImageResource:(SAUIImageResource *)arg0;
- (NSArray *)thumbnails;
- (void)setThumbnails:(NSArray *)arg0;

@end
