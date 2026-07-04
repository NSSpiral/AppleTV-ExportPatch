/* Runtime dump - SAGKSummaryStructuredAnswer
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGKSummaryStructuredAnswer : AceObject <SAGKStructuredAnswer>

@property (copy, nonatomic) NSArray * answerPropertyGroups;
@property (copy, nonatomic) NSString * category;
@property (copy, nonatomic) NSURL * image;
@property (copy, nonatomic) NSString * imageCaption;
@property (copy, nonatomic) NSString * text;
@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSString * titleAnnotation;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SAGKSummaryStructuredAnswer *)summaryStructuredAnswer;
+ (NSDictionary *)summaryStructuredAnswerWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setImage:(NSURL *)arg0;
- (void)setTitle:(NSString *)arg0;
- (void)setCategory:(NSString *)arg0;
- (NSString *)category;
- (NSString *)title;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (NSURL *)image;
- (NSString *)encodedClassName;
- (NSArray *)answerPropertyGroups;
- (void)setAnswerPropertyGroups:(NSArray *)arg0;
- (NSString *)imageCaption;
- (void)setImageCaption:(NSString *)arg0;
- (NSString *)titleAnnotation;
- (void)setTitleAnnotation:(NSString *)arg0;

@end
