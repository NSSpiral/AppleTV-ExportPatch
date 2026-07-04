/* Runtime dump - SAGKSummaryPod
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGKSummaryPod : SAGKPodView

@property (copy, nonatomic) NSString * caption;
@property (retain, nonatomic) SAUIImageResource * imageResource;
@property (copy, nonatomic) NSString * text;

+ (SAGKSummaryPod *)summaryPod;
+ (NSDictionary *)summaryPodWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (void)setCaption:(NSString *)arg0;
- (NSString *)caption;
- (NSString *)encodedClassName;
- (SAUIImageResource *)imageResource;
- (void)setImageResource:(SAUIImageResource *)arg0;

@end
