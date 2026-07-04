/* Runtime dump - SAAnswerObjectLine
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerObjectLine : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSURL * image;
@property (copy, nonatomic) NSNumber * imageInverted;
@property (copy, nonatomic) NSString * text;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAAnswerObjectLine *)objectLine;
+ (NSDictionary *)objectLineWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setImage:(NSURL *)arg0;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (NSURL *)image;
- (NSString *)encodedClassName;
- (NSNumber *)imageInverted;
- (void)setImageInverted:(NSNumber *)arg0;

@end
