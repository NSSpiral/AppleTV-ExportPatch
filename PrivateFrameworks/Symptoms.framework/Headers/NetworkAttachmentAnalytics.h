/* Runtime dump - NetworkAttachmentAnalytics
 * Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
 */

@interface NetworkAttachmentAnalytics : ObjectAnalytics

- (NetworkAttachmentAnalytics *)init;
- (NetworkAttachmentAnalytics *)initWithWorkspace:(FBWorkspace *)arg0 withCache:(char)arg1;
- (NSObject *)networkAttachmentsWithId:(NSObject *)arg0;
- (NSSet *)networkAttachmentsWithIdInSet:(NSSet *)arg0;

@end
